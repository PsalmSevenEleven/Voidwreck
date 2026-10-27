// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Equipment/VWEA_Ironsight.h"

void UVWEA_Ironsight::InitializeOptions(USkeletalMeshComponent* MeshComponent, const TArray<uint8>& SavedOptions)
{
	Super::InitializeOptions(MeshComponent, SavedOptions); //Doesn't do anything, but good practice to always have this around just in case

	//I can't be sure that every option is going to be utilized for every attachment, so this is here to allow for no option to be added in a particular slot 
	//Theoretically this isn't necessary and I could hardcode the values for each customization field to use for the indices in SavedOptions,
	//but it's easier for me to account for this here than to try and offset the values when writing them to the save file
	uint8 OptionIndexOffset = 0;
	

	//Create a dynamic material instance of the same type that's already on the glowy bits in the front
	if(MeshComponent->GetMaterial(MeshComponent->GetMaterialIndex("GlowFront"))
		&& SavedOptions.Num()>=3)
	{
		//If there is, make a dynamic material instance and set it as the mesh's material for the second slot
		UMaterialInstanceDynamic* Glow1 = UMaterialInstanceDynamic::Create(MeshComponent->GetMaterial(MeshComponent->GetMaterialIndex("GlowFront")), MeshComponent); 
		
		if (Options[0].Type == EAttachmentOptionType::Vector3)
		{
			GEngine->AddOnScreenDebugMessage(0, 5, FColor::Orange, FVector(SavedOptions[0], SavedOptions[1], SavedOptions[2]).ToString());
			Glow1->SetVectorParameterValue("Color", FVector(SavedOptions[0], SavedOptions[1], SavedOptions[2]));
			//We actually used this option, so to avoid reusing it we offset the next indices by 3
			OptionIndexOffset += 3;
		}

		MeshComponent->SetMaterial(MeshComponent->GetMaterialIndex("GlowFront"), Glow1);
	}
	//Same for the back
	if(MeshComponent->GetMaterial(MeshComponent->GetMaterialIndex("GlowRear"))
		&& SavedOptions.Num() >= 3 + OptionIndexOffset)
	{
		UMaterialInstanceDynamic* Glow2 = UMaterialInstanceDynamic::Create(MeshComponent->GetMaterial(MeshComponent->GetMaterialIndex("GlowRear")), MeshComponent);

		if (Options[1].Type == EAttachmentOptionType::Vector3)
		{
			Glow2->SetVectorParameterValue("Color", FVector(SavedOptions[0 + OptionIndexOffset], SavedOptions[1 + OptionIndexOffset], SavedOptions[2 + OptionIndexOffset]));
			OptionIndexOffset += 3;
		}

		MeshComponent->SetMaterial(MeshComponent->GetMaterialIndex("GlowRear"), Glow2);
	}
	
	//TODO - More customization options to be added later, like the distance sighting or possibly some shape customizations
	
}
