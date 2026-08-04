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
	
};
