// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AbilitySystem/Abilities/VWGA_Interact.h"

#include "Abilities/Tasks/AbilityTask_WaitInputRelease.h"
#include "Background_Infrastructure/VWGameplayTags.h"
#include "GameFramework/PlayerState.h"
#include "Interfaces/InteractableInterface.h"
#include "Player/Character/FirstPersonCharacter.h"


UVWGA_Interact::UVWGA_Interact()
{
	AbilityInputID = EPlayerAbilityInputID::Interact;
	ActivationType = EAbilityActivationType::ActivateOnPressed;
}

void UVWGA_Interact::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

	
	AFirstPersonCharacter* Character = Cast<AFirstPersonCharacter>(ActorInfo->AvatarActor);

	if(!Character->CurrentInteractable
		|| ActorInfo->AbilitySystemComponent->HasMatchingGameplayTag(TAG_Player_Status_Menu))
	{
		return;
	}
	
	IInteractableInterface::Execute_Interact(Character->CurrentInteractable, Cast<APlayerController>(Character->GetController()), Cast<APlayerState>(ActorInfo->OwnerActor));

	UAbilityTask_WaitInputRelease* WaitInputRelease = UAbilityTask_WaitInputRelease::WaitInputRelease(this, true);
	WaitInputRelease->OnRelease.AddDynamic(this, &UVWGA_Interact::OnInputReleased);
}

void UVWGA_Interact::OnInputReleased(float TimeHeld)
{
	AFirstPersonCharacter* Character = Cast<AFirstPersonCharacter>(GetAvatarActorFromActorInfo());

	if(!Character->CurrentInteractable)
	{
		return;
	}

	//If the object isn't a 'hold' interactable, we just won't implement the StopInteract() function
	IInteractableInterface::Execute_StopInteract(Character->CurrentInteractable, Cast<APlayerController>(Character->GetController()), Cast<APlayerState>(GetOwningActorFromActorInfo()));
	EndAbility(CurrentSpecHandle, CurrentActorInfo, GetCurrentActivationInfo(), true, false);
}

