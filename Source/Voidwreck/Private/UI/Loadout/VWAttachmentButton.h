// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VWAttachmentButton.generated.h"


class UVWEquipmentMenu;
/**
 * 
 */
UCLASS()
class UVWAttachmentButton : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY()
	UVWEquipmentMenu* EquipmentMenu;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Button;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TextBlock;

	UPROPERTY()
	int32 AttachmentIndex;

	UFUNCTION()
	void OpenAttachmentStore();
};
