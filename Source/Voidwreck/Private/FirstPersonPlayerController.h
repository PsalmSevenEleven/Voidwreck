// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "GameFramework/PlayerController.h"
#include "FirstPersonPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AFirstPersonPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetupEnhancedInputContext();

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	UInputMappingContext* PlayerInputMappingContext;
};
