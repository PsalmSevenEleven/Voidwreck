// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWAttachmentOptionsWidget.h"

void UVWAttachmentOptionsWidget::NativeConstruct()
{
	Super::NativeConstruct();
	//TODO - add events for each of the values changing
}

void UVWAttachmentOptionsWidget::Setup(FAttachmentCustomizationOption& InOption, TArray<uint8>& SavedValues)
{

	switch (InOption.Type)
	{
		
	case Scalar:
		ScalarValue->SetVisibility(ESlateVisibility::Visible);
		XValue->SetVisibility(ESlateVisibility::Collapsed);
		YValue->SetVisibility(ESlateVisibility::Collapsed);
		ZValue->SetVisibility(ESlateVisibility::Collapsed);
		AssetList->SetVisibility(ESlateVisibility::Collapsed);

		ScalarValue->SetMinValue(InOption.MinValue);
		ScalarValue->SetMaxValue(InOption.MaxValue);
		ScalarValue->SetValue(SavedValues[0]);

		break;

	case Vector2:
		ScalarValue->SetVisibility(ESlateVisibility::Collapsed);
		XValue->SetVisibility(ESlateVisibility::Visible);
		YValue->SetVisibility(ESlateVisibility::Visible);
		ZValue->SetVisibility(ESlateVisibility::Collapsed);
		AssetList->SetVisibility(ESlateVisibility::Collapsed);

		XValue->SetMinValue(InOption.MinValue);
		XValue->SetMaxValue(InOption.MaxValue);
		XValue->SetValue(SavedValues[0]);

		YValue->SetMinValue(InOption.MinValue);
		YValue->SetMaxValue(InOption.MaxValue);
		YValue->SetValue(SavedValues[1]);

		break;
		
	case Vector3:
		
		ScalarValue->SetVisibility(ESlateVisibility::Collapsed);
		XValue->SetVisibility(ESlateVisibility::Visible);
		YValue->SetVisibility(ESlateVisibility::Visible);
		ZValue->SetVisibility(ESlateVisibility::Visible);
		AssetList->SetVisibility(ESlateVisibility::Collapsed);

		XValue->SetMinValue(InOption.MinValue);
		XValue->SetMaxValue(InOption.MaxValue);
		XValue->SetValue(SavedValues[0]);

		YValue->SetMinValue(InOption.MinValue);
		YValue->SetMaxValue(InOption.MaxValue);
		YValue->SetValue(SavedValues[1]);

		ZValue->SetMinValue(InOption.MinValue);
		ZValue->SetMaxValue(InOption.MaxValue);
		ZValue->SetValue(SavedValues[2]);

		break;

	case EAttachmentOptionType::AssetList:
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, "AssetList");
		ScalarValue->SetVisibility(ESlateVisibility::Collapsed);
		XValue->SetVisibility(ESlateVisibility::Collapsed);
		YValue->SetVisibility(ESlateVisibility::Collapsed);
		ZValue->SetVisibility(ESlateVisibility::Collapsed);
		AssetList->SetVisibility(ESlateVisibility::Visible);

		//TODO - Populate with widgets and set the selected one to the first value in SavedValues

		break;

	default: break;
	}
}
