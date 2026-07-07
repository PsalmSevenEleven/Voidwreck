// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWCharacterMenuViewer.h"

#include "Kismet/KismetStringLibrary.h"
#include "Player/Equipment/VWEquipment.h"

// Sets default values
AVWCharacterMenuViewer::AVWCharacterMenuViewer()
{
	PrimaryActorTick.bCanEverTick = false;

	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	CharacterMesh->Mobility = EComponentMobility::Movable;
	RootComponent = CharacterMesh;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->Mobility = EComponentMobility::Movable;

	for(int i = 0; i < (int32)EEquipmentSlot::Count; i++)
	{
		FName NewMeshName = FName("EquipmentMesh" + FString::FromInt(i));
		USkeletalMeshComponent* NewMesh = CreateDefaultSubobject<USkeletalMeshComponent>(NewMeshName);
		if(CharacterMesh->DoesSocketExist(FName(FString::FromInt(i))))
		{
			NewMesh->SetupAttachment(CharacterMesh, FName(FString::FromInt(i)));
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(-1, 30, FColor::Red, "Add your sockets to the CharacterMenuViewer's mesh, genius.");
			NewMesh->SetupAttachment(CharacterMesh);
		}
		
		EquipmentMeshes.Emplace(NewMesh);
	}

}


