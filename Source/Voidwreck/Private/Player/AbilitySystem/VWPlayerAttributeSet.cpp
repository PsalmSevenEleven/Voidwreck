// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AbilitySystem/VWPlayerAttributeSet.h"

void UVWPlayerAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if(Attribute == GetCurrentHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}
	
	Super::PreAttributeChange(Attribute, NewValue);
	
}

void UVWPlayerAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}
