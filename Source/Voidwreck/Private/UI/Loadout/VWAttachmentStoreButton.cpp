// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWAttachmentStoreButton.h"

#include "VWEquipmentMenu.h"
#include "Components/Button.h"

void UVWAttachmentStoreButton::NativeConstruct()
{
	Super::NativeConstruct();

	Button->OnClicked.AddDynamic(this, &UVWAttachmentStoreButton::SelectAttachment);
}

void UVWAttachmentStoreButton::SelectAttachment()
{
	EquipmentMenu->SelectAttachment(AttachmentSlot, AttachmentIndex, AttachmentDA);
}
