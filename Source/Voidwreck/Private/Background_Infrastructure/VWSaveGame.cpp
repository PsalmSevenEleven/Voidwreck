// Fill out your copyright notice in the Description page of Project Settings.


#include "Background_Infrastructure/VWSaveGame.h"

#include "Player/Equipment/VWEquipment.h"

FEquipmentOptions::FEquipmentOptions()
{
	EquipmentIndex = 0;
	
	//We're assuming here that no equipment will have more than 10 attachment slots.
	//If you're getting index out of bounds errors related to attachment slots, make sure that 10 is enough.
	for(int i = 0; i<10; i++)
	{
		AttachmentIndices.Emplace(0);
	}
	
	//TODO - we're making a lot of assumptions here about the numbers of equipment, attachments, and options that will be in the game,
	//and this should probably be updated dynamically as more content is added.
	//Add checks to anything that has to draw from the savegame and add default arrays if needed
	
	for(int Equipment = 0; Equipment<30; Equipment++)
	{
		SavedAttachmentOptions.Emplace(TArray<TArray<TArray<uint8>>>());
		
		for (int Slot = 0; Slot<10; Slot++)
		{
			SavedAttachmentOptions[Equipment].Emplace(TArray<TArray<uint8>>());
			
			for(int Attachment = 0; Attachment<8; Attachment++)
			{
				SavedAttachmentOptions[Equipment][Slot].Emplace(TArray<uint8>({0,0,0,0,0,0,0}));
			}
		}
	}
}


TArray<uint8> FEquipmentOptions::GetAttachmentOptionsForSlot(uint8 InAttachmentSlot)
{
	return SavedAttachmentOptions[EquipmentIndex][InAttachmentSlot][AttachmentIndices[InAttachmentSlot]];
}

TArray<uint8> FEquipmentOptions::GetAttachmentOptions(uint8 InEquipmentIndex, uint8 InAttachmentSlot)
{
	return SavedAttachmentOptions[InEquipmentIndex][InAttachmentSlot][AttachmentIndices[InAttachmentSlot]];
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


