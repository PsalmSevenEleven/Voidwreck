// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWEquipmentMenuViewer.h"

#include "Camera/CameraComponent.h"
#include "Player/Equipment/VWEquipment.h"


// Sets default values
AVWEquipmentMenuViewer::AVWEquipmentMenuViewer()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	EquipmentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	EquipmentMesh->Mobility = EComponentMobility::Movable;
	EquipmentMesh->SetupAttachment(Root);
	
	
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(Root);
	Camera->Mobility = EComponentMobility::Movable;

}

void AVWEquipmentMenuViewer::SetupMeshes(UVWEquipment* Equipment)
{

	//TODO - small optimization to be made here by only adding or deleting meshes if necessary

	//clear out the attachment mesh array and remove the attachment meshes
	AttachmentMeshes.Reset();
	
	TArray<USceneComponent*> ChildComponentsToDelete;
	EquipmentMesh->GetChildrenComponents(true, ChildComponentsToDelete);
	for(USceneComponent* Child : ChildComponentsToDelete)
	{
		Child->UnregisterComponent();
	}

	

	for(int i = 0; i < Equipment->AttachmentSlots.Num(); i++)
	{
		FName NewMeshName = FName(FString("AttachmentMesh_" + FString::FromInt(i)));
		USkeletalMeshComponent* NewMesh = NewObject<USkeletalMeshComponent>(this, USkeletalMeshComponent::StaticClass(), NewMeshName);

		if(EquipmentMesh->DoesSocketExist(Equipment->AttachmentSlots[i].SocketName))
		{
			NewMesh->SetupAttachment(EquipmentMesh, Equipment->AttachmentSlots[i].SocketName);
			NewMesh->SetRelativeTransform(FTransform(FQuat(0,0,0,0), FVector(0,0,0), FVector(1,1,1)));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Add your sockets to the equipment's mesh, genius."));
			NewMesh->SetupAttachment(EquipmentMesh);
		}
		NewMesh->RegisterComponent();
		
		AttachmentMeshes.Emplace(NewMesh);
	}
}

