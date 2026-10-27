// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ComboBoxKey.h"
#include "Components/ScrollBox.h"
#include "Components/Slider.h"
#include "Player/Equipment/VWEquipmentAttachment.h"
#include "VWAttachmentOptionsWidget.generated.h"

class UVWEquipmentMenu;
enum EAttachmentOptionType : int;
/**
 * 
 */
UCLASS()
class UVWAttachmentOptionsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void Setup(FAttachmentCustomizationOption& InOption, TArray<uint8>& SavedValues);

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EAttachmentOptionType> Type = EAttachmentOptionType::Scalar;

	UPROPERTY()
	UVWEquipmentMenu* EquipmentMenu;

	UPROPERTY()
	uint8 OptionStartIndex;
	

	UPROPERTY(meta = (BindWidget))
	USlider* ScalarValue;

	UFUNCTION()
	void ScalarValueChanged(float Value);

	UPROPERTY(meta = (BindWidget))
	USlider* XValue;
	
	UPROPERTY(meta = (BindWidget))
	USlider* YValue;
	
	UPROPERTY(meta = (BindWidget))
	USlider* ZValue;

	UFUNCTION()
	void VectorValueChanged(float Value);

	

	UPROPERTY(meta = (BindWidget))
	UComboBoxKey* AssetList;

	
	
	
};
