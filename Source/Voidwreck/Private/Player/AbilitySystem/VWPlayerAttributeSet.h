// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "VWPlayerAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

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
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, CurrentHealth);

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, MaxHealth);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData RemainingRounds;
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, RemainingRounds);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData MaxRounds;
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, MaxRounds);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData WalkSpeed;
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, WalkSpeed);


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData SprintSpeed;
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, SprintSpeed);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attributes")
	FGameplayAttributeData InteractionDistance;
	ATTRIBUTE_ACCESSORS(UVWPlayerAttributeSet, InteractionDistance);
	
};


