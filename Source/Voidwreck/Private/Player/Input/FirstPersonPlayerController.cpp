// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonPlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "Player/VWPlayerState.h"
#include "Player/AbilitySystem/VWPlayerAbilitySystemComponent.h"
#include "UI/VWHud.h"

void AFirstPersonPlayerController::SetupEnhancedInputContext()
{
	UEnhancedInputLocalPlayerSubsystem* EnhancedInputSubsystem = GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

	if(!EnhancedInputSubsystem || !PlayerInputMappingContext
		|| EnhancedInputSubsystem->HasMappingContext(PlayerInputMappingContext))
	{
		return;
	}

	FModifyContextOptions ModifyOptions = FModifyContextOptions();
	ModifyOptions.bIgnoreAllPressedKeysUntilRelease = true;
	ModifyOptions.bForceImmediately = true;
	ModifyOptions.bNotifyUserSettings = true;
	
	EnhancedInputSubsystem->AddMappingContext(PlayerInputMappingContext, 0, ModifyOptions);
}

void AFirstPersonPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);
	if(UVWPlayerAbilitySystemComponent* AbilitySystemComponent = Cast<UVWPlayerAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		AbilitySystemComponent->HandleQueuedAbilities();
	}
}

void AFirstPersonPlayerController::SetupHud()
{
	HUD = CreateWidget<UVWHud>(this, HUDClass);
	if(HUD)
	{
		HUD->AddToViewport();
	}
}

UAbilitySystemComponent* AFirstPersonPlayerController::GetAbilitySystemComponent() const
{
	if(GetPlayerState<AVWPlayerState>())
	{
		return GetPlayerState<AVWPlayerState>()->GetAbilitySystemComponent();
	}
	return nullptr;
}
