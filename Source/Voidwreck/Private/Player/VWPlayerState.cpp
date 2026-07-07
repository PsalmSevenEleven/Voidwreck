// Fill out your copyright notice in the Description page of Project Settings.


#include "VWPlayerState.h"

 #include "AbilitySystem/VWPlayerAbilitySystemComponent.h"
 #include "AbilitySystem/VWPlayerAttributeSet.h"
#include "Net/UnrealNetwork.h"

AVWPlayerState::AVWPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UVWPlayerAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	
	AbilitySystemComponent->SetIsReplicated(true);

	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	//From what I know, this will automatically register itself with the AbilitySystemComponent
	//because this playerstate is the ASC's owner
	AttributeSet = CreateDefaultSubobject<UVWPlayerAttributeSet>(TEXT("AttributeSet"));
	
	NetUpdateFrequency = 50.0f;
}

UAbilitySystemComponent* AVWPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AVWPlayerState::CopyProperties(APlayerState* PlayerState)
{
	Super::CopyProperties(PlayerState);

	AVWPlayerState* NewPlayerState = Cast<AVWPlayerState>(PlayerState);
	if(NewPlayerState)
	{
		//TODO - Set loadout values here; guns, gadgets, attachments, etc.
	}
	
}

void AVWPlayerState::OverrideWith(APlayerState* PlayerState)
{
	Super::OverrideWith(PlayerState);

	AVWPlayerState* OldPlayerState = Cast<AVWPlayerState>(PlayerState);
	if(OldPlayerState)
	{
		//TODO - Set loadout values here; guns, gadgets, attachments, etc.
	}
}

void AVWPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AVWPlayerState, AbilitySystemComponent)
}

void AVWPlayerState::Server_RequestAbilities_Implementation(const TSoftObjectPtr<UVWAbilitySet> & AbilitySet)
{
	AbilitySet->AddAbilitiesToASC(AbilitySystemComponent);
}

bool AVWPlayerState::Server_RequestAbilities_Validate(const TSoftObjectPtr<UVWAbilitySet> & AbilitySet)
{
	//Eventually I'll add checks to ensure that the player is requesting the correct AbilitySet
	//but for now I'll just allow anything
	return true;
}