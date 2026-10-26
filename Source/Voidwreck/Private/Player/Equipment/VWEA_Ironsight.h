// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/Equipment/VWEquipmentAttachment.h"
#include "VWEA_Ironsight.generated.h"

/**
 * 
 */
UCLASS()
class UVWEA_Ironsight : public UVWEquipmentAttachment
{
	GENERATED_BODY()
public:

	virtual void InitializeOptions(USkeletalMeshComponent* MeshComponent, const TArray<uint8>& SavedOptions) override;

	//For the options on an ironsight attachment, the order should always be: front glow, back glow.
	//The options array may look something like this: {0, 100, 0, 100, 0, 0}
	//The first three indices are the r, g, and b values for the front post's emissive color,
	//and the last three are the RGB values for the rear posts' emissive color. 

	//This is imperative for the InitializeOptions function to work correctly
};
