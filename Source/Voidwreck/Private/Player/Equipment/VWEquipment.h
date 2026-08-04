// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "VWEquipment.generated.h"


class UImage;
class UVWEquipmentAttachment;
class UVWAbilitySet;
/**
 * 
 */

//WARNING - Do not change the enum int values
UENUM()
enum class EEquipmentSlot
{
	Head UMETA(DisplayName = "Head"),
	Eyes UMETA(DisplayName = "Eyes"),
	Face UMETA(DisplayName = "Face"),
	Torso UMETA(DisplayName = "Torso"),
	Arms UMETA(DisplayName = "Arm"),
	Legs UMETA(DisplayName = "Legs"),
	Feet UMETA(DisplayName = "Feet"),
	Back UMETA(DisplayName = "Back"),
	Primary UMETA(DisplayName = "Primary"),
	Secondary UMETA(DisplayName = "Secondary"),

	//Insert any new slots above this line ^^^^^
	//This last one allows me to iterate over my slots.
	//It will not be used in editor or available as an option, and is only here to give me a way of checking the size of the enum.
	Count UMETA(Hidden)
	
};

//This struct primarily exists to let me access a display name without having to load stuff
USTRUCT(Blueprintable)
struct VOIDWRECK_API FVWPrimaryAssetID
{
	GENERATED_BODY()

	FVWPrimaryAssetID();
	FVWPrimaryAssetID(FText InDisplayName, FPrimaryAssetId InPrimaryAssetId);
	
	//Display name for loadout screen, localizable
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FPrimaryAssetId PrimaryAssetId;
};

USTRUCT(Blueprintable)
struct FEquipmentAttachmentSlot
{
	GENERATED_BODY()
public:
	FEquipmentAttachmentSlot();
	FEquipmentAttachmentSlot(FName InSocketName);

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly)
	FText DisplayName = FText::FromString("THIS THING NEEDS A NAME AAAAAAAAAAAAAAAAAAA");
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName SocketName; 

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<FPrimaryAssetId> AvailableAttachments;
};

UCLASS()
class VOIDWRECK_API UVWEquipment : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	EEquipmentSlot Slot;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Weight;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Cost;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, meta = (AssetBundles = "MissionOnly"))
	TSoftObjectPtr<UVWAbilitySet> GrantedAbilities;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FGameplayTagContainer GrantedTags;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly)
	FText Description = FText::FromString("AAAAAAAAAAAA YOU DIDN'T ADD A DESCRIPTION FOR THIS THING YOU GOOBER");

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSoftObjectPtr<UImage> Thumbnail;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText DisplayName;
	
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, meta = (AssetBundles = "HubAndMission"))
	TSoftObjectPtr<USkeletalMesh> Mesh;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly)
	TArray<FEquipmentAttachmentSlot> AttachmentSlots;

	
	
};
