// Fill out your copyright notice in the Description page of Project Settings.


#include "Background_Infrastructure/VWSaveGame.h"

#include "Player/Equipment/VWEquipment.h"

FSavedAttachmentOptions::FSavedAttachmentOptions()
{
	Options = {0,0,0,0,0,0,0,0};
}

FSavedAttachmentSlotOptions::FSavedAttachmentSlotOptions()
{
	for(uint8 i = 0; i<10; i++)
	{
		Attachment.Emplace(FSavedAttachmentOptions());
	}
}

FSavedEquipmentOptions::FSavedEquipmentOptions()
{
	for(uint8 i = 0; i<10; i++)
	{
		Slot.Emplace(FSavedAttachmentSlotOptions());
	}
}

FSavedEquipmentSlotOptions::FSavedEquipmentSlotOptions()
{
	for(uint8 i = 0; i<20; i++)
	{
		Equipment.Emplace(FSavedEquipmentOptions());
	}
}

FEquipmentOptions::FEquipmentOptions()
{
	EquipmentIndex = 0;
	
	//We're assuming here that no equipment will have more than 10 attachment slots.
	//If you're getting index out of bounds errors related to attachment slots, make sure that 10 is enough.
	for(int i = 0; i<10; i++)
	{
		AttachmentIndices.Emplace(0);
	}

	SavedAttachmentOptions = FSavedEquipmentSlotOptions();
}


TArray<uint8> FEquipmentOptions::GetAttachmentOptionsForSlot(uint8 InAttachmentSlot)
{
	return SavedAttachmentOptions.Equipment[EquipmentIndex].Slot[InAttachmentSlot].Attachment[AttachmentIndices[InAttachmentSlot]].Options;
	
}

TArray<uint8> FEquipmentOptions::GetAttachmentOptions(uint8 InEquipmentIndex, uint8 InAttachmentSlot)
{
	return SavedAttachmentOptions.Equipment[InEquipmentIndex].Slot[InAttachmentSlot].Attachment[AttachmentIndices[InAttachmentSlot]].Options;
}

FLoadout::FLoadout()
{
	DisplayName = "NewLoadout";

	Equipment = TArray<FEquipmentOptions>();
	for (int i = 0; i<(uint8)EEquipmentSlot::Count; i++)
	{
		Equipment.Emplace(FEquipmentOptions());
	}
	
}

FLoadout::FLoadout(FString InDisplayName, TArray<FEquipmentOptions> InEquipment)
{
	DisplayName = InDisplayName;
	Equipment = InEquipment;
}

UVWSaveGame::UVWSaveGame()
{
	Loadouts.Emplace(FLoadout());
	SelectedLoadout = 0;
}


