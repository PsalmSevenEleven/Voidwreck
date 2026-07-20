// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VWLoadoutEquipmentButton.generated.h"

class UVWLoadoutWidget;
class UTextBlock;
class UButton;
enum class EEquipmentSlot;
/**
 * 
 */
UCLASS()
class UVWLoadoutEquipmentButton : public UUserWidget
{
	GENERATED_BODY()

	

public:


	UPROPERTY(BlueprintReadOnly, EditAnywhere, meta = (ExposeOnSpawn))
	EEquipmentSlot EquipmentSlot;

	UPROPERTY()
	UVWLoadoutWidget* LoadoutWidget;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UButton* Button;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBlock;

	virtual void NativeConstruct() override;

	UFUNCTION()
	void SendLoadoutWidgetToEquipmentMenu();
	
};
