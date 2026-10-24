// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "VWSaveGame.generated.h"




USTRUCT(BlueprintType)
struct FEquipmentOptions
{
	GENERATED_BODY()
public:

	FEquipmentOptions();
	
	UPROPERTY(BlueprintReadWrite, SaveGame)
	uint8 EquipmentIndex;

	//This stores the indices of the attachments to use in each slot on the equipment
	UPROPERTY(SaveGame)
	TArray<uint8> AttachmentIndices;

	//This 3d array of int8's is a little opaque, so I'll explain.
	//Each element in the top-level array represents a different attachment slot, and each element of the array below it is a different attachment.
	//The lowest-level array holds the individual values for any options the attachment.
	
	//For example, let's say the FEquipmentOptions struct that this is a part of is the ninth member (index 8) of the Equipment array in an Floadout.
	//That means that this is equipped in the 'Primary' slot and will be dealing with primary weapons.
	//The EquipmentIndex variable will tell the savegame which gun the player has selected, and each index in AttachmentIndices will represent an attachment slot.
	//The values at those indices will determine which attachment is being used on the equipment, and thus which set of options to pull from SavedAttachmentOptions.
	
	//In the case of something like a holographic optic, index 0 in the lowest-level array in SavedAttachmentOptions can choose the reticle shape from an array,
	//and indices 1-3 can be used for the reticle's RGB tint.
	//Each attachment can have its own format for the int array, meaning that I don't have to make different save variables for everything.
	
	//We use this system to make sure that any customization the player has done in the attachment depot (colors, sightings, etc) doesn't need to be redone
	//every time a player reselects an attachment.
	TArray<TArray<TArray<uint8>>> SavedAttachmentOptions;
	
	uint8 GetAttachmentOption(uint8 Slot, uint8 AttachmentIndex, uint8 OptionIndex);
};


USTRUCT(BlueprintType)
struct FLoadout
{
	GENERATED_BODY()
public:

	FLoadout();
	FLoadout(FString InDisplayName, TArray<FEquipmentOptions> InEquipment);
	
	UPROPERTY(BlueprintReadWrite)
	FString DisplayName;

	//Each index represents an equipment slot, corresponding to the elements of EEquipmentSlot
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TArray<FEquipmentOptions> Equipment;
	
};


/**
 * 
 */
UCLASS()
class UVWSaveGame : public USaveGame
{
	GENERATED_BODY()

	UVWSaveGame();

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	int AccountLevel = 0;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	int XP = 0;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	int32 SelectedLoadout;
	
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TArray<FLoadout> Loadouts = TArray<FLoadout>();
	
	
};
