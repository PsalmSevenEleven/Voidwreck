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

	UPROPERTY(BlueprintReadWrite)
	int32 EquipmentIndex;

	//This is a little opaque, so I'll explain.
	//The 2d array below provides both the index of each attachment on a particular piece of equipment and any other options that the equipment allows.
	//For example, the FEquipmentOptions struct that this is a part of is the ninth member (index 8) of the Equipment array in a Floadout.
	//That means that this is equipped in the 'Primary' slot and will be dealing with primary weapons.
	//The EquipmentIndex variable will tell the savegame which gun the player has selected, and each row in AttachmentOptions will represent an attachment slot.
	//The first index can be used to tell which attachment goes in the slot, because each equipment slot will have a list of available attachments for that slot.
	//If the slot is an underbarrel slot it'll be a foregrip, laser, grenade launcher, etc.
	//In the case of something like a holographic optic, index 1 in the row can choose the reticle shape from an array, and indices 2-4 can be used for the reticle's RGB tint.
	//Each attachment can have its own format for the int array, meaning that I don't have to make different save variables for everything.
	TArray<TArray<int32>> AttachmentOptions;
	
	int32 GetAttachmentOption(int Slot, int OptionIndex);
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
	
	UPROPERTY(BlueprintReadWrite)
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
