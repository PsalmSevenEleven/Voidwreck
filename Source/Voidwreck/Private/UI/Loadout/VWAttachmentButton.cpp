// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWAttachmentButton.h"

#include "VWEquipmentMenu.h"
#include "Components/Button.h"


void UVWAttachmentButton::NativeConstruct()
{
	Super::NativeConstruct();

	Button->OnClicked.AddDynamic(this, &UVWAttachmentButton::OpenAttachmentStore);
}

void UVWAttachmentButton::OpenAttachmentStore()
{
	EquipmentMenu->OpenAttachmentStore(AttachmentIndex);
}
