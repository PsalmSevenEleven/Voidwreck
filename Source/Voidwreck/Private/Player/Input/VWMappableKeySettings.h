// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerMappableKeySettings.h"
#include "Voidwreck/Voidwreck.h"
#include "VWMappableKeySettings.generated.h"

/**
 * 
 */
UCLASS()
class UVWMappableKeySettings : public UPlayerMappableKeySettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	EPlayerAbilityInputID InputID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	bool bIsGASAbility = true;
	
};
