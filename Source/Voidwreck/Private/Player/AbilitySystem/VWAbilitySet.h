// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VWGameplayAbility.h"
#include "Engine/DataAsset.h"
#include "VWAbilitySet.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, Const)
class VOIDWRECK_API UVWAbilitySet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UVWGameplayAbility>> Abilities;
	
	void AddAbilitiesToASC(UAbilitySystemComponent* ASC) const;
	
};
