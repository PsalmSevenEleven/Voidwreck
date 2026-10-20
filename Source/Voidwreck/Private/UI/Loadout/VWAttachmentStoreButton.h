// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VWAttachmentStoreButton.generated.h"

class UVWEquipmentMenu;
/**
 * 
 */
UCLASS()
class UVWAttachmentStoreButton : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* Button;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TextBlock;

	UPROPERTY()
	UVWEquipmentMenu* EquipmentMenu;

	UPROPERTY()
	int32 AttachmentIndex;

	UPROPERTY()
	int32 AttachmentSlot;
	
	UFUNCTION()
	void SelectAttachment();
	
};
