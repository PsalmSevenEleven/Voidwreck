// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWLoadoutWidget.h"

#include "SkeletalDebugRendering.h"
#include "VWCharacterMenuViewer.h"
#include "Background_Infrastructure/VWGameplayTags.h"
#include "Background_Infrastructure/VWSaveGame.h"
#include "Components/Throbber.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"
#include "Player/VWPlayerState.h"
#include "Player/Equipment/VWEquipment.h"
#include "Player/Equipment/VWEquipmentAttachment.h"


void UVWLoadoutWidget::NativeConstruct()
{
	Super::NativeConstruct();

	//TODO - reimplement this
	//IPlayerInterface::Execute_SetHudVisibility(GetOwningPlayer(), ESlateVisibility::Collapsed);
	
	SaveGame = Cast<UVWSaveGame>(UGameplayStatics::LoadGameFromSlot("SaveGame", 0));

	if(!SaveGame)
	{
		UVWSaveGame* NewSaveGame = Cast<UVWSaveGame>(UGameplayStatics::CreateSaveGameObject(UVWSaveGame::StaticClass()));
		
		UGameplayStatics::SaveGameToSlot(NewSaveGame, "SaveGame", 0);

		SaveGame = NewSaveGame;
	}

	CurrentLoadout = SaveGame->Loadouts[SaveGame->SelectedLoadout];

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

	//TODO - Reimplement this once I have a hud
	// if(GetOwningPlayer() && GetOwningPlayer()->GetClass()->ImplementsInterface(UPlayerInterface::StaticClass()))
	// {
	// 	IPlayerInterface::Execute_SetHudVisibility(GetOwningPlayer(), ESlateVisibility::Visible);
	// }
	
	Super::NativeDestruct();
}

void UVWLoadoutWidget::LoadLoadout()
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
	
	for(int i = 0; i<CurrentLoadout.Equipment.Num(); i++)
	{
		if(EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[CurrentLoadout.Equipment[i].EquipmentIndex].PrimaryAssetId.IsValid())
		{
			FVWPrimaryAssetID& NewEquipment = EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[CurrentLoadout.Equipment[i].EquipmentIndex];
		
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
		

		for(int j = 0; j < LoadedEquipment->AttachmentSlots.Num(); j++)
		{
			//The first index of each AttachmentOptions row is the attachment to use,
			//and the subsequent ones are for attachment-specific customization
			int SelectedAttachmentForSlot = CurrentLoadout.Equipment[i].AttachmentOptions[j][0];
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

void UVWLoadoutWidget::InitMenu()
{
	if(!CharacterMenuViewer)
	{
		return;
	}
	GetOwningPlayer()->SetViewTarget(CharacterMenuViewer);
	GetOwningPlayer()->GetPawn()->GetPlayerState<AVWPlayerState>()->GetAbilitySystemComponent()->AddLooseGameplayTag(TAG_Player_Status_Menu);
	
}
