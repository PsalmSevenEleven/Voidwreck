// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Equipment/VWEquipmentAttachment.h"

#include "Background_Infrastructure/VWSaveGame.h"

FAttachmentCustomizationOption::FAttachmentCustomizationOption()
{
	
}

FPrimaryAssetId UVWEquipmentAttachment::GetPrimaryAssetId() const
{
	return FPrimaryAssetId(FName("VWEquipmentAttachment"), GetFName());
}

//Nothing here yet, meant to be overridden by the different types of attachment
void UVWEquipmentAttachment::InitializeOptions(USkeletalMeshComponent* MeshComponent, const TArray<uint8>& SavedOptions)
{
	
}
