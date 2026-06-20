// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VWUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UVWUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	virtual void BackOut();

	//A reference to the parent widget, typically for easy access when backing out of this one
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	UVWUserWidget* Parent = nullptr;
};
