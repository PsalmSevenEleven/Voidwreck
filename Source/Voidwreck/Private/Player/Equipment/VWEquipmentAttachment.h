// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VWEquipmentAttachment.generated.h"

class UImage;
class UGameplayEffect;
class UVWGameplayAbility;
/**
 * 
 */
UENUM()
enum EAttachmentOptionType
{
	Scalar UMETA(DisplayName = "Scalar"),
	Vector2 UMETA(DisplayName = "2D Vector"),
	Vector3 UMETA(DisplayName = "3D Vector"),
	AssetList UMETA(DisplayName = "Asset List")
};

USTRUCT(BlueprintType, Blueprintable)
struct FAttachmentCustomizationOption
{
	GENERATED_BODY()
public:
	FAttachmentCustomizationOption();

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText DisplayName = FText::FromString("Option Name Here");

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText Tooltip = FText::FromString("Description Here");

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TEnumAsByte<EAttachmentOptionType> Type = EAttachmentOptionType::Scalar;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type != EAttachmentOptionType::AssetList", EditConditionHides))
	uint8 MinValue = 0;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type != EAttachmentOptionType::AssetList", EditConditionHides))
	uint8 MaxValue = 100;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type == EAttachmentOptionType::Scalar", EditConditionHides), DisplayName = "Default Value")
	uint8 DefaultValue = 0;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type == EAttachmentOptionType::Vector2 || Type == EAttachmentOptionType::Vector3", EditConditionHides), DisplayName = "Default Value X")
	uint8 DefaultX = 0;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type == EAttachmentOptionType::Vector2 || Type == EAttachmentOptionType::Vector3", EditConditionHides), DisplayName = "Default Value Y")
	uint8 DefaultY = 0;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type == EAttachmentOptionType::Vector3", EditConditionHides), DisplayName = "Default Value Z")
	uint8 DefaultZ = 0;

	//When populating this array, make sure that all of the items are the same class or they won't show up in-game
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (EditCondition="Type == EAttachmentOptionType::AssetList", EditConditionHides))
	TArray<FPrimaryAssetId> Assets;
	
};

UCLASS()
class UVWEquipmentAttachment : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSoftObjectPtr<UImage> Thumbnail;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FText DisplayName;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSoftObjectPtr<USkeletalMesh> Mesh;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<TSoftObjectPtr<UGameplayEffect>> PassiveEffects;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<TSoftObjectPtr<UVWGameplayAbility>> GrantedAbilities;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<FAttachmentCustomizationOption> Options;

	//This function is meant to be overridden by al child classes to allow them to parse options with their own individual formats
	//For this to work, all attachment types (ironsight, optic, underbarrel, etc) must have their own standardized order in which the options appear
	//Any unused option is to be skipped. for example, if there is no need to customize the rear glow of an ironsight,
	//that option is simply never added and the function should continue to the next one.
	UFUNCTION()
	virtual void InitializeOptions(USkeletalMeshComponent* MeshComponent, const TArray<uint8>& SavedOptions);
	
};
