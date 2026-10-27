// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWLoadoutWidget.h"


#include "VWCharacterMenuViewer.h"
#include "VWEquipmentMenu.h"
#include "VWEquipmentMenuViewer.h"
#include "VWLoadoutEquipmentButton.h"
#include "Background_Infrastructure/VWGameplayTags.h"
#include "Background_Infrastructure/VWSaveGame.h"
#include "Components/Throbber.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"
#include "Player/VWPlayerState.h"
#include "Player/Equipment/VWEquipment.h"
#include "Player/Equipment/VWEquipmentAttachment.h"


class UVWEquipmentMenu;



void UVWLoadoutWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	IVWPlayerInterface::Execute_SetHudVisibility(GetOwningPlayer(), ESlateVisibility::Collapsed);
	
	SaveGame = Cast<UVWSaveGame>(UGameplayStatics::LoadGameFromSlot("SaveGame", 0));

	if(!SaveGame)
	{
		UVWSaveGame* NewSaveGame = Cast<UVWSaveGame>(UGameplayStatics::CreateSaveGameObject(UVWSaveGame::StaticClass()));
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, "Creating New Savegame!");
		
		UGameplayStatics::SaveGameToSlot(NewSaveGame, "SaveGame", 0);

		SaveGame = NewSaveGame;
	}

	//CurrentLoadout = SaveGame->Loadouts[SaveGame->SelectedLoadout];

	HeadSlotButton->LoadoutWidget = this;
	EyesSlotButton->LoadoutWidget = this;
	FaceSlotButton->LoadoutWidget = this;
	TorsoSlotButton->LoadoutWidget = this;
	ArmsSlotButton->LoadoutWidget = this;
	LegsSlotButton->LoadoutWidget = this;
	FeetSlotButton->LoadoutWidget = this;
	BackSlotButton->LoadoutWidget = this;
	PrimarySlotButton->LoadoutWidget = this;
	SecondarySlotButton->LoadoutWidget = this;
	
	LoadLoadout();
}

void UVWLoadoutWidget::NativeDestruct()
{
	if(GetOwningPlayer() && GetOwningPlayerPawn())
	{
		GetOwningPlayer()->SetViewTarget(GetOwningPlayerPawn());
		GetOwningPlayer()->SetInputMode(FInputModeGameOnly());
		GetOwningPlayer()->bShowMouseCursor = false;
		GetOwningPlayer()->GetPlayerState<AVWPlayerState>()->GetAbilitySystemComponent()->RemoveLooseGameplayTag(TAG_Player_Status_Menu);
	}
	
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->Destroy();
	}
	if(EquipmentMenuViewer)
	{
		EquipmentMenuViewer->Destroy();
	}
	
	if(GetOwningPlayer() && GetOwningPlayer()->GetClass()->ImplementsInterface(UVWPlayerInterface::StaticClass()))
	{
		IVWPlayerInterface::Execute_SetHudVisibility(GetOwningPlayer(), ESlateVisibility::Visible);
	}
	

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		Super::NativeDestruct();
		return;
	}

	AssetManager->UnloadPrimaryAssetsWithType(FPrimaryAssetType("VWEquipment"));
	AssetManager->UnloadPrimaryAssetsWithType(FPrimaryAssetType("VWEquipmentAttachment"));
	
	Super::NativeDestruct();
}

void UVWLoadoutWidget:: LoadLoadout()
{
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->CharacterMesh->SetVisibility(false);
	}
	
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}
	
	EquipmentToLoad.Reset();
	AttachmentsToLoad.Reset();
	
	for(int i = 0; i<SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment.Num(); i++)
	{
		if(EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[i].EquipmentIndex].PrimaryAssetId.IsValid())
		{
			FVWPrimaryAssetID& NewEquipment = EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[i].EquipmentIndex];
		
			EquipmentToLoad.Emplace(NewEquipment.PrimaryAssetId);
		}
		else
		{
			EquipmentToLoad.Emplace(FPrimaryAssetId());
		}
		
	}

	AssetManager->LoadPrimaryAssets(EquipmentToLoad,
			TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
			FStreamableDelegate::CreateUObject(this, &UVWLoadoutWidget::LoadoutEquipmentLoadedCallback));

	
	LoadingThrobber->SetVisibility(ESlateVisibility::Visible);
}

void UVWLoadoutWidget::LoadoutEquipmentLoadedCallback()
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	//All of the equipment we loaded earlier, in order by slot
	for(int i = 0; i<EquipmentToLoad.Num(); i++)
	{
		UVWEquipment* LoadedEquipment = AssetManager->GetPrimaryAssetObject<UVWEquipment>(EquipmentToLoad[i]);
		if(!LoadedEquipment)
		{
			CharacterMenuViewer->EquipmentMeshes[i]->SetSkeletalMeshAsset(nullptr);
			
			//GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Orange, FString("no mesh for slot " + FString::FromInt(i)));
			continue;
		}
		CharacterMenuViewer->EquipmentMeshes[i]->SetSkeletalMeshAsset(LoadedEquipment->Mesh.LoadSynchronous());

		TArray<FName> AttachmentSlotNames;

		for(FEquipmentAttachmentSlot AttachmentSlot : LoadedEquipment->AttachmentSlots)
		{
			AttachmentSlotNames.Emplace(AttachmentSlot.SocketName);
		}
		
		//ready the attachment meshes
		CharacterMenuViewer->SetupAttachmentMeshesForSlot(i, AttachmentSlotNames);
		

		for(int8 j = 0; j < LoadedEquipment->AttachmentSlots.Num(); j++)
		{
			
			int8 SelectedAttachmentForSlot = SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[i].AttachmentIndices[j];
			AttachmentsToLoad.Emplace(LoadedEquipment->AttachmentSlots[j].AvailableAttachments[SelectedAttachmentForSlot]);
		}
	}

	AssetManager->LoadPrimaryAssets(AttachmentsToLoad,
			TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
			FStreamableDelegate::CreateUObject(this, &UVWLoadoutWidget::LoadoutAttachmentsLoadedCallback));
	
	
}

void UVWLoadoutWidget::LoadoutAttachmentsLoadedCallback()
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	int AttachmentIndexOffset = 0;

	//All of the equipment we loaded earlier, in order by slot
	for(int i = 0; i<EquipmentToLoad.Num(); i++)
	{
		UVWEquipment* LoadedEquipment = AssetManager->GetPrimaryAssetObject<UVWEquipment>(EquipmentToLoad[i]);
		if(!LoadedEquipment)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Orange, FString("no mesh for slot " + FString::FromInt(i)));
			continue;
		}

		for(int j = 0; j < LoadedEquipment->AttachmentSlots.Num(); j++)
		{
			UVWEquipmentAttachment* LoadedAttachment = AssetManager->GetPrimaryAssetObject<UVWEquipmentAttachment>(AttachmentsToLoad[j + AttachmentIndexOffset]);
			
			CharacterMenuViewer->AttachmentMeshes[i][j]->SetSkeletalMeshAsset(LoadedAttachment->Mesh.LoadSynchronous());
			//DrawDebugSphere(GetWorld(), CharacterMenuViewer->AttachmentMeshes[i][j]->GetComponentLocation(), 10.f, 8, FColor::White, false, 30, 0, 2.f);
		}

		AttachmentIndexOffset += LoadedEquipment->AttachmentSlots.Num();
	}

	CharacterMenuViewer->CharacterMesh->SetVisibility(true);
	LoadingThrobber->SetVisibility(ESlateVisibility::Collapsed);
}


void UVWLoadoutWidget::ShowEquipmentMenuForSlot(const EEquipmentSlot& InEquipmentSlot)
{
	if(GetOwningPlayer() && GetOwningPlayerPawn())
	{
		GetOwningPlayer()->SetViewTarget(EquipmentMenuViewer);
	}
	
	CurrentEquipmentSlot = int8(InEquipmentSlot);
	SetupEquipmentMenuViewer(CurrentEquipmentSlot);
	
	SetVisibility(ESlateVisibility::Collapsed);
	
	EquipmentMenu = Cast<UVWEquipmentMenu>(CreateWidget(this, EquipmentMenuClass));
	if(!EquipmentMenu)
	{
		return;
	}

	EquipmentMenu->Parent = this;
	EquipmentMenu->AddToViewport();
	

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	int32 EquipmentIndex = SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[int(InEquipmentSlot)].EquipmentIndex;
	FPrimaryAssetId EquipmentId = EquipmentDA->EquipmentSlotCatalog[int32(InEquipmentSlot)].AvailableEquipmentForSlot[EquipmentIndex].PrimaryAssetId;

	UVWEquipment* LoadedEquipment = AssetManager->GetPrimaryAssetObject<UVWEquipment>(EquipmentId);

	EquipmentMenu->EquipmentMenuViewer = EquipmentMenuViewer;
	EquipmentMenu->LoadoutWidget = this;
	
	EquipmentMenu->CurrentEquipment = LoadedEquipment;
	EquipmentMenu->SetupAttachmentButtons();
	
}

void UVWLoadoutWidget::SetupEquipmentMenuViewer(int InEquipmentSlot)
{
	//Get and validate the asset manager
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}
	

	//Make sure we have a save game to pull from, one way or another
	if(!SaveGame)
	{
		UVWSaveGame* NewSaveGame = Cast<UVWSaveGame>(UGameplayStatics::CreateSaveGameObject(UVWSaveGame::StaticClass()));
		
		UGameplayStatics::SaveGameToSlot(NewSaveGame, "SaveGame", 0);
		SaveGame = NewSaveGame;
	}

	//Get the primary asset id of the equipment we're going to display.
	//In the case of the head slot it could be a helmet, gas mask, NVG, etc.
	int32 EquipmentIndex = SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[int(InEquipmentSlot)].EquipmentIndex;
	FPrimaryAssetId EquipmentId = EquipmentDA->EquipmentSlotCatalog[int(InEquipmentSlot)].AvailableEquipmentForSlot[EquipmentIndex].PrimaryAssetId;

	//We know it's already loaded because we did that when we set up the character viewer,
	//so no need to try to load it again
	UVWEquipment* LoadedEquipment = AssetManager->GetPrimaryAssetObject<UVWEquipment>(EquipmentId);
	//Set the equipment mesh asset
	EquipmentMenuViewer->EquipmentMesh->SetSkeletalMeshAsset(LoadedEquipment->Mesh.LoadSynchronous());
	//And build a set of meshes for the attachments
	EquipmentMenuViewer->SetupMeshes(LoadedEquipment);

	//Unloading any unused attachments.
	//From my understanding, this will only unload any assets not currently in use,
	//so we can just call it on the entire list to clean up anything we no longer need
	AssetManager->UnloadPrimaryAssets(AttachmentsForEquipmentViewer);
	//Always good to reset an array to prevent junk data from getting in the way
	AttachmentsForEquipmentViewer.Reset();

	//For every attachment slot...
	for(int8 i = 0; i < LoadedEquipment->AttachmentSlots.Num(); i++)
	{
		//... check the save game to see what is selected for that slot...
		int8 SelectedAttachmentForSlot = SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[int32(InEquipmentSlot)].AttachmentIndices[i];
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Orange, FString::FromInt(SelectedAttachmentForSlot));
		//... and queue that attachment up to be loaded
		AttachmentsForEquipmentViewer.Emplace(LoadedEquipment->AttachmentSlots[i].AvailableAttachments[SelectedAttachmentForSlot]);
	}

	//Load the queued attachments
	AssetManager->LoadPrimaryAssets(AttachmentsForEquipmentViewer,
		TArray<FName>({FName("HubOnly"), FName("HubAndMission")}),
		FStreamableDelegate::CreateUObject(this, &UVWLoadoutWidget::EquipmentViewerAttachmentsLoadedCallback));
}

//Called when the attachments are loaded for display
void UVWLoadoutWidget::EquipmentViewerAttachmentsLoadedCallback()
{
	//Get and validate the asset manager
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}
	
	//For each of the attachment meshes attached to the equipment mesh...
	for(int i = 0; i < EquipmentMenuViewer->AttachmentMeshes.Num(); i++)
	{
		//... assign the correct skeletal mesh asset to it
		UVWEquipmentAttachment* Attachment = AssetManager->GetPrimaryAssetObject<UVWEquipmentAttachment>(AttachmentsForEquipmentViewer[i]);
		USkeletalMesh* MeshAsset = Attachment->Mesh.LoadSynchronous();
		if(MeshAsset)
		{
			EquipmentMenuViewer->AttachmentMeshes[i]->SetSkeletalMeshAsset(MeshAsset);

			Attachment->InitializeOptions(
				EquipmentMenuViewer->AttachmentMeshes[i],
				SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[CurrentEquipmentSlot].GetAttachmentOptionsForSlot(i)
				);
		}
		
	}
}

void UVWLoadoutWidget::InitMenu()
{
	if(!CharacterMenuViewer)
	{
		return;
	}
	GetOwningPlayer()->SetViewTarget(CharacterMenuViewer);
	GetOwningPlayer()->GetPawn()->GetPlayerState<AVWPlayerState>()->GetAbilitySystemComponent()->AddLooseGameplayTag(TAG_Player_Status_Menu);
	
}
