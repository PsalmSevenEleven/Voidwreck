// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWLoadoutEquipmentButton.h"

#include "VWLoadoutWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Player/Equipment/VWEquipment.h"

void UVWLoadoutEquipmentButton::NativeConstruct()
{
	Super::NativeConstruct();
	TArray<FString> EquipmentSlotNames = {"Head", "Eyes", "Face", "Torso", "Arms", "Legs", "Feet", "Back", "Primary", "Secondary"};
	TextBlock->SetText(FText::FromString(EquipmentSlotNames[int32(EquipmentSlot)]));
	
	Button->OnClicked.AddDynamic(this, &UVWLoadoutEquipmentButton::SendLoadoutWidgetToEquipmentMenu);
}

void UVWLoadoutEquipmentButton::SendLoadoutWidgetToEquipmentMenu()
{
	LoadoutWidget->ShowEquipmentMenuForSlot(EquipmentSlot);
}
