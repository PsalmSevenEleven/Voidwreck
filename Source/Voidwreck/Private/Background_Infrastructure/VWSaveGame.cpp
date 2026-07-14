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
		//We're also assuming that no attachment will have more than 6 fields that can be customized.
		AttachmentOptions.Emplace(TArray<int>({0,0,0,0,0,0}));
	}
}

int32 FEquipmentOptions::GetAttachmentOption(int Slot, int OptionIndex)
{
	return AttachmentOptions[Slot][OptionIndex];
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
}


