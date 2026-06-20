// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "InputMappingContext.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/VWPlayerInterface.h"
#include "UI/VWUserWidget.h"
#include "FirstPersonPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AFirstPersonPlayerController : public APlayerController, public IAbilitySystemInterface, public IVWPlayerInterface
{
	GENERATED_BODY()

public:
	void SetupEnhancedInputContext();

	UInputMappingContext* GetPlayerInputMappingContext() const { return PlayerInputMappingContext; }

	//Overridden to allow input to pe processed in batches
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

	//This is to allow the player to use the pause key to back out of any menu
	UPROPERTY(BlueprintReadWrite)
	UVWUserWidget* CurrentWidget = nullptr;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* PlayerInputMappingContext;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UFUNCTION()
	UVWUserWidget* GetCurrentWidget_Implementation() const override {return CurrentWidget;}
	
	UFUNCTION()
	void SetCurrentWidget_Implementation(UVWUserWidget* NewWidget) override {CurrentWidget = NewWidget;}

};
