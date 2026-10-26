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

	//This stores the index of the equipment that currently occupies this slot
	UPROPERTY(BlueprintReadWrite, SaveGame)
	uint8 EquipmentIndex;

	//This stores the indices of the attachments to use in each slot on the equipment
	UPROPERTY(SaveGame)
	TArray<uint8> AttachmentIndices;

	//This 4d array of uint8's is a little opaque, so I'll explain.
	//Each element in the top-level array represents a different equipment, and each element of the array below it is a different attachment slot.
	//Each index in the next is an individual attachment, and the lowest-level arrays hold the individual values for any options the attachment may have for customization.

	//If this FEquipmentOptions struct is index nine in the loadout's equipment array, it represents a primary weapon.
	//Index 2 in the top level array of SavedAttachmentOptions will represent the third available gun in the armory. We'll say it's an SMG.
	//Index 1 within that SMG array would be the second attachment slot. We'll assume it's the optics slot. 
	//From there, each index is a different attachment for that slot. ACOGs, reflex sights, looking glass sights, an absurd 8x scope, etc.
	//If we choose the ACOG sight (index 0), we'll get an array of uint8 that we can use to customize the ACOG.
	//These could represent things like the reticle shape, the reticle size, and the reticle color.
	//The first index could represent the shape (pulled from a list of available shapes), the second the size (on a scale of 1 to 10),
	//and the third, fourth, and fifth indices can store the R, G, and B values for the reticle color respectively.
	//Each attachment can have its own format for the int array, meaning that I don't have to make different save variables for everything.

	//To pull that info out, it would look something like: SavedAttachmentOptions[EquipmentIndex][Slot][AttachmentIndices[Slot]].
	//Let's say Equipmentindex = 2, Slot = 1, and AttachmentIndices = {0, 0, 3, 5, 2, 4}.
	//In this example, you're getting the third available gun (SMG), that gun's second attachment slot (Optics), and the first available attachment for that slot (ACOG).
	//The return value will be an array of uint8's that looks like: {0, 5, 100, 100, 0}.
	//This represents the first available reticle shape, a medium reticle size, and a pure yellow reticle color
	
	//We use this system to make sure that any customization the player has done in the attachment screen (colors, locations, etc) doesn't need to be redone
	//every time a player reselects an attachment.
	//Hopefully, this over-engineered solution will reduce later tech debt and make adding new content a breeze
	TArray<TArray<TArray<TArray<uint8>>>> SavedAttachmentOptions;

	//Returns the options for a given slot on the current equipment
	TArray<uint8> GetAttachmentOptionsForSlot(uint8 InAttachmentSlot);

	//Returns the options for a given slot on a specified equipment
	TArray<uint8> GetAttachmentOptions(uint8 InEquipmentIndex, uint8 InAttachmentSlot);
};


USTRUCT(BlueprintType)
struct FLoadout
{
	GENERATED_BODY()
public:

	FLoadout();
	FLoadout(FString InDisplayName, TArray<FEquipmentOptions> InEquipment);

	//This is better for the player than 'Loadout 1', 'Loadout 2', etc.
	UPROPERTY(BlueprintReadWrite, SaveGame)
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
