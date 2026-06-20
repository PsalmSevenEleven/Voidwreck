// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "VWPlayerAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class UVWPlayerAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData CurrentHealth;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CurrentHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CurrentHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CurrentHealth);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UVWPlayerAttributeSet, CurrentHealth);

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxHealth;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealth);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UVWPlayerAttributeSet, MaxHealth);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData RemainingRounds;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(RemainingRounds);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(RemainingRounds);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(RemainingRounds);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UVWPlayerAttributeSet, RemainingRounds);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxRounds;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxRounds);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxRounds);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxRounds);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UVWPlayerAttributeSet, MaxRounds);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData WalkSpeed;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(WalkSpeed);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UVWPlayerAttributeSet, WalkSpeed);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData SprintSpeed;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(SprintSpeed);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UVWPlayerAttributeSet, SprintSpeed);
	
};


