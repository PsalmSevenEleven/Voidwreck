// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWLoadoutWidget.h"

#include "VWCharacterMenuViewer.h"
#include "Background_Infrastructure/VWGameplayTags.h"
#include "Background_Infrastructure/VWSaveGame.h"
#include "Components/Throbber.h"
#include "Engine/AssetManager.h"
#include "Kismet/GameplayStatics.h"
#include "Player/VWPlayerState.h"
#include "Player/Equipment/VWEquipment.h"

void UVWLoadoutWidget::LoadLoadout()
{
	if(CharacterMenuViewer)
	{
		CharacterMenuViewer->CharacterMesh->SetVisibility(false);
	}

	CharacterViewerMeshIndex = 0;

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	for(int i = 0; i<CurrentLoadout.Equipment.Num(); i++)
	{
		FVWPrimaryAssetID& EquipmentToLoad = EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[CurrentLoadout.Equipment[i].EquipmentIndex];

		//If nothing is referenced, we don't need to do anything
		if(EquipmentToLoad.PrimaryAssetId == FPrimaryAssetId())
		{
			CharacterMenuViewer->EquipmentMeshes[i]->SetSkeletalMeshAsset(nullptr);
			continue;
		}
		
		AssetManager->LoadPrimaryAsset(EquipmentToLoad.PrimaryAssetId,
			TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
			FStreamableDelegate::CreateUObject(this, &UVWLoadoutWidget::LoadEquipmentCallback, EquipmentToLoad.PrimaryAssetId));
	}
	
	//
	// for (int i = 0; i < (int32)EEquipmentSlot::Count; i++)
	// {
	// 	TArray<FAssetData> AssetData;
	// 	if(!AssetManager->GetPrimaryAssetDataList(FPrimaryAssetType("VWCharacterEquipment"), AssetData))
	// 	{
	// 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No assets found"));
	// 		return;
	// 	}
	// 	
	// 	FName AssetTypeName = FName("VWCharacterEquipment" + FString::FromInt(i));
	// 	FPrimaryAssetType Type = FPrimaryAssetType(AssetTypeName);
	// 	
	// 	int IndexToLoad = SaveGame->Loadouts[SaveGame->SelectedLoadout].Equipment[i].EquipmentIndex;
	// 	
	// 	FPrimaryAssetId ID = FPrimaryAssetId(Type, AssetData[IndexToLoad].AssetName);
	// 	
	// 	AssetManager->LoadPrimaryAsset(ID, 
	// 	TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
	// 	FStreamableDelegate::CreateUObject(this, &UVWLoadoutWidget::LoadEquipmentCallback, ID));
	// }

	LoadingThrobber->SetVisibility(ESlateVisibility::Visible);

	UpdateCharacterViewer();
}

void UVWLoadoutWidget::UpdateCharacterViewer()
{
	// for (int i = 0; i< CharacterMenuViewer->EquipmentMeshes.Num(); i++)
	// {
	// 	int SelectedEquipment = CurrentLoadout.Equipment[i].EquipmentIndex;
	// 	if(!EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[SelectedEquipment])
	// 	{
	// 		continue;
	// 	}
	// 	USkeletalMesh* NewMesh =  EquipmentDA->EquipmentSlotCatalog[i].AvailableEquipmentForSlot[SelectedEquipment]->Mesh.Get();
	// 	if(NewMesh)
	// 	{
	// 		CharacterMenuViewer->EquipmentMeshes[i]->SetSkeletalMeshAsset(NewMesh);
	// 	}
	// }
}

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

void UVWLoadoutWidget::LoadEquipmentCallback(FPrimaryAssetId AssetId)
{
	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	UVWEquipment* LoadedEquipment = AssetManager->GetPrimaryAssetObject<UVWEquipment>(AssetId);
	if(!LoadedEquipment)
	{
		return;
	}

	CharacterMenuViewer->EquipmentMeshes[CharacterViewerMeshIndex]->SetSkeletalMeshAsset(LoadedEquipment->Mesh.LoadSynchronous());
	CharacterViewerMeshIndex++;
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
