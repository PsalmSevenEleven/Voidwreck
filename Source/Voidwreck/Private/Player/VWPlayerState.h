// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/VWAbilitySet.h"
#include "GameFramework/PlayerState.h"
#include "Interfaces/VWPlayerInterface.h"
#include "VWPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class AVWPlayerState : public APlayerState, public IAbilitySystemInterface, public IVWPlayerInterface
{
	GENERATED_BODY()

public:

	AVWPlayerState();
	
	UFUNCTION(BlueprintCallable)
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void CopyProperties(APlayerState* PlayerState) override;

	virtual void OverrideWith(APlayerState* PlayerState) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_RequestAbilities(const TSoftObjectPtr<UVWAbilitySet> & AbilitySet);


protected:
	UPROPERTY(Replicated)
	UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY()
	class UVWPlayerAttributeSet* AttributeSet;
	
};
