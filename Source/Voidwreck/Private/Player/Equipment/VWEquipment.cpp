// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Equipment/VWEquipment.h"

FVWPrimaryAssetID::FVWPrimaryAssetID()
{
	DisplayName = FText::FromString("None");
	PrimaryAssetId = FPrimaryAssetId();
}

FVWPrimaryAssetID::FVWPrimaryAssetID(FText InDisplayName, FPrimaryAssetId InPrimaryAssetId)
{
	DisplayName = InDisplayName;
	PrimaryAssetId = InPrimaryAssetId;
}

FPrimaryAssetId UVWEquipment::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FName("VWEquipment"), GetFName());
}

FEquipmentAttachmentSlot::FEquipmentAttachmentSlot()
{
	SocketName = FName("None");
	
}

FEquipmentAttachmentSlot::FEquipmentAttachmentSlot(FName InSocketName)
{
	SocketName = InSocketName;
}
