// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VWHud.generated.h"

/**
 * 
 */
UCLASS()
class UVWHud : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
	class UImage* Crosshair;

	UPROPERTY(meta = (BindWidget))
	class UInteractPrompt* InteractPrompt;
	
};
