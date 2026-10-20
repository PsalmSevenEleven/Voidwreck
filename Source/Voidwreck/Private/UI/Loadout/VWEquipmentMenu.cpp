// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWEquipmentMenu.h"

#include "VWAttachmentButton.h"
#include "VWAttachmentStoreButton.h"
#include "VWLoadoutWidget.h"
#include "Background_Infrastructure/VWSaveGame.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "Engine/AssetManager.h"
#include "Player/Equipment/VWEquipment.h"
#include "Player/Equipment/VWEquipmentAttachment.h"



void UVWEquipmentMenu::SetupAttachmentButtons()
{
	for(UWidget* Child : AttachmentScrollBox->GetAllChildren())
	{
		Child->RemoveFromParent();
	}
	
	//GEngine->AddOnScreenDebugMessage(-1,5,FColor::Green, "Setting up attachment buttons");
	
	for(int i = 0; i < CurrentEquipment->AttachmentSlots.Num(); i++)
	{
		UVWAttachmentButton* NewButton = CreateWidget<UVWAttachmentButton>(this, AttachmentButtonClass);
		NewButton->TextBlock->SetText(CurrentEquipment->AttachmentSlots[i].DisplayName);
		NewButton->SetPadding(FMargin(5.f,5.f));

		NewButton->AttachmentIndex = i;
		NewButton->EquipmentMenu = this;
		AttachmentScrollBox->AddChild(NewButton);
	}
}

void UVWEquipmentMenu::OpenAttachmentStore(int32 AttachmentSlotIndex)
{
	AttachmentStoreScrollBox->SetVisibility(ESlateVisibility::Visible);

	for(UWidget* Child : AttachmentStoreScrollBox->GetAllChildren())
	{
		Child->RemoveFromParent();
	}

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}
	
	AssetManager->UnloadPrimaryAssets(StoreAttachmentsToLoad);

	StoreAttachmentsToLoad.Reset();

	for(int i = 0; i < CurrentEquipment->AttachmentSlots[AttachmentSlotIndex].AvailableAttachments.Num(); i++)
	{
		StoreAttachmentsToLoad.Emplace(CurrentEquipment->AttachmentSlots[AttachmentSlotIndex].AvailableAttachments[i]);
	}

	AssetManager->LoadPrimaryAssets(StoreAttachmentsToLoad,
			TArray<FName>({FName("HubAndMission"), FName("HubOnly")}),
			FStreamableDelegate::CreateUObject(this, &UVWEquipmentMenu::AttachmentStoreLoadedCallback, AttachmentSlotIndex));
}

void UVWEquipmentMenu::AttachmentStoreLoadedCallback(int32 SlotIndex)
{

	UAssetManager* AssetManager = UAssetManager::GetIfInitialized();
	if(!AssetManager)
	{
		return;
	}

	for(int i = 0; i < StoreAttachmentsToLoad.Num(); i++)
	{
		
		UVWAttachmentStoreButton* NewButton =  CreateWidget<UVWAttachmentStoreButton>(this, AttachmentStoreButtonClass);

		UVWEquipmentAttachment* LoadedAttachment = AssetManager->GetPrimaryAssetObject<UVWEquipmentAttachment>(StoreAttachmentsToLoad[i]);

		if(LoadedAttachment)
		{
			NewButton->TextBlock->SetText(LoadedAttachment->DisplayName);
		}
		else
		{
			NewButton->TextBlock->SetText(FText::FromString("None"));
		}
		
		NewButton->AttachmentIndex = i;
		NewButton->AttachmentSlot = SlotIndex;
		NewButton->EquipmentMenu = this;
		NewButton->SetPadding(FMargin(5.f,5.f));
		
		AttachmentStoreScrollBox->AddChild(NewButton);
	}
	
}

void UVWEquipmentMenu::SelectAttachment(int32 AttachmentSlot, int32 AttachmentIndex)
{
	
	if(LoadoutWidget->SaveGame)
	{
		LoadoutWidget->SaveGame->Loadouts[CurrentLoadoutIndex].Equipment[LoadoutWidget->CurrentEquipmentSlot].AttachmentIndices[AttachmentSlot] = AttachmentIndex;
	}

	LoadoutWidget->SetupEquipmentMenuViewer(LoadoutWidget->CurrentEquipmentSlot);
}


