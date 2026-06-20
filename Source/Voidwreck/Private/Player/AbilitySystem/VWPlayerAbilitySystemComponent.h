// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "VWPlayerAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class UVWPlayerAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:

	template<class T>
	T* GetAbilityOfClass();

#pragma region Ability Input Batching
	
	UPROPERTY()
	TArray<struct FGameplayAbilitySpecHandle> HeldAbilityHandles;

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> PressedAbilityHandles;

	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> ReleasedAbilityHandles;
	
	void QueueAbilityPressed(int32 Index);
	void QueueAbilityReleased(int32 Index);

	void HandleQueuedAbilities();

	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;
#pragma endregion

	
};

template <class T>
inline T* UVWPlayerAbilitySystemComponent::GetAbilityOfClass()
{
	for (const FGameplayAbilitySpec& Spec : ActivatableAbilities.Items)
	{
		if (Spec.Ability->IsA(T::StaticClass()))
		{
			return Cast<T>(Spec.Ability);
		}
	}

	return nullptr;
}