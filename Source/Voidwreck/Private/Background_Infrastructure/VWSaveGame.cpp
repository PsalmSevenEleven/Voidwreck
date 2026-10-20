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
		
		//We're making a similar assumption here.
		//we're assuming that there are no more than 8 options for different attachments per slot.
		//This number should probably be as small as possible to reduce save game sizes,
		//but the difference will be measured in kilobytes so it's less important than making sure we have enough
		for (int j = 0; j<8; j++)
		{
			//We're assuming here that no attachment will have more than 6 fields that can be customized.
			SavedAttachmentOptions.Emplace(TArray<TArray<int8>>({TArray<int8>({0,0,0,0,0,0})}));
		}
	}
}

uint8 FEquipmentOptions::GetAttachmentOption(uint8 Slot, uint8 AttachmentIndex, uint8 OptionIndex)
{
	return SavedAttachmentOptions[Slot][AttachmentIndex][OptionIndex];
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


