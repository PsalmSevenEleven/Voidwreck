// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/AbilitySystem/VWAbilitySet.h"

#include "AbilitySystemComponent.h"

void UVWAbilitySet::AddAbilitiesToASC(UAbilitySystemComponent* ASC) const
{
	//Make sure the ASC exists and that it actually has the authority to give abilities
	//UE_LOG(LogTemp, Warning, TEXT("ASC is %s, and is %s") , ASC ? TEXT("valid") : TEXT("invalid"), (ASC && ASC->IsOwnerActorAuthoritative()) ? TEXT("authoritative") : TEXT("not authoritative"));

	if(!ASC || !ASC->IsOwnerActorAuthoritative())
	{
		return;
	}

	for(int i = 0; i < Abilities.Num(); i++)
	{
		if(!Abilities[i])
		{
			continue;
		}
		
		FGameplayAbilitySpec AbilitySpec = FGameplayAbilitySpec(Abilities[i].GetDefaultObject(), 1, static_cast<int16>(Abilities[i].GetDefaultObject()->AbilityInputID));
		ASC->GiveAbility(AbilitySpec);
		UE_LOG(LogTemp, Log, TEXT("Ability %s added to ASC"), *Abilities[i].GetDefaultObject()->GetName());
	}
	
}
