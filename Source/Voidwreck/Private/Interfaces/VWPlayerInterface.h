// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/VWUserWidget.h"
#include "UObject/Interface.h"
#include "VWPlayerInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UVWPlayerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IVWPlayerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UVWUserWidget* GetCurrentWidget() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCurrentWidget(UVWUserWidget* NewWidget);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetHudVisibility(ESlateVisibility Visibility);

};
