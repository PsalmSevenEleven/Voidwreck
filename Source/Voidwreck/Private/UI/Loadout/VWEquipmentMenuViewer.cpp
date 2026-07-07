// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWEquipmentMenuViewer.h"

#include "Camera/CameraComponent.h"


// Sets default values
AVWEquipmentMenuViewer::AVWEquipmentMenuViewer()
{
	PrimaryActorTick.bCanEverTick = false;

	EquipmentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	EquipmentMesh->Mobility = EComponentMobility::Movable;
	RootComponent = EquipmentMesh;
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->Mobility = EComponentMobility::Movable;

}

