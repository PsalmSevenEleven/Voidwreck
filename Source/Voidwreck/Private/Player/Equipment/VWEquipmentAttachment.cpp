// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Equipment/VWEquipmentAttachment.h"

FPrimaryAssetId UVWEquipmentAttachment::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FName("VWEquipmentAttachment"), GetFName());
}
