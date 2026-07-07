// Fill out your copyright notice in the Description page of Project Settings.


#include "Background_Infrastructure/VWSaveGame.h"

#include "Player/Equipment/VWEquipment.h"

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


