// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/AbilitySystem/VWGameplayAbility.h"
#include "VWGA_Interact.generated.h"

/**
 * 
 */
UCLASS()
class UVWGA_Interact : public UVWGameplayAbility
{
	GENERATED_BODY()
	
	UVWGA_Interact();

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION()
	virtual void OnInputReleased(float TimeHeld);
};
