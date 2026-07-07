// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VWLoadoutEquipmentList.generated.h"


struct FVWPrimaryAssetID;
class UVWEquipment;

USTRUCT(BlueprintType)
struct FVWEquipmentSlotList
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TArray<FVWPrimaryAssetID> AvailableEquipmentForSlot;
};

/**
 * 
 */
UCLASS()
class UVWLoadoutEquipmentList : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:



	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FVWEquipmentSlotList> EquipmentSlotCatalog;
	
};
