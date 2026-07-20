// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Loadout/VWCharacterMenuViewer.h"

#include "Kismet/KismetStringLibrary.h"
#include "Player/Equipment/VWEquipment.h"

// Sets default values
AVWCharacterMenuViewer::AVWCharacterMenuViewer()
{
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	CharacterMesh->Mobility = EComponentMobility::Movable;
	CharacterMesh->SetupAttachment(RootComponent);
	
	
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
		AttachmentMeshes.Emplace(TArray<USkeletalMeshComponent*>({}));
	}

}

void AVWCharacterMenuViewer::SetupAttachmentMeshesForSlot(int32 EquipmentMeshIndex, const TArray<FName>& SocketNames)
{
	//Destroy all attachment meshes
	TArray<USceneComponent*> ChildComponentsToDelete;
	EquipmentMeshes[EquipmentMeshIndex]->GetChildrenComponents(true, ChildComponentsToDelete);
	for(USceneComponent* Child : ChildComponentsToDelete)
	{
		Child->UnregisterComponent();
	}

	for (int i = 0; i < SocketNames.Num(); i++)
	{
		FName NewMeshName = FName(FString("AttachmentMesh_" + FString::FromInt(EquipmentMeshIndex) +"_"+ FString::FromInt(i)));
		USkeletalMeshComponent* NewMesh = NewObject<USkeletalMeshComponent>(this, USkeletalMeshComponent::StaticClass(), NewMeshName);
		
		if(EquipmentMeshes[EquipmentMeshIndex]->DoesSocketExist(SocketNames[i]))
		{
			NewMesh->SetupAttachment(EquipmentMeshes[EquipmentMeshIndex], SocketNames[i]);
			NewMesh->SetRelativeTransform(FTransform(FQuat(0,0,0,0), FVector(0,0,0), FVector(1,1,1)));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Add your sockets to the CharacterMenuViewer's mesh, genius."));
			NewMesh->SetupAttachment(EquipmentMeshes[EquipmentMeshIndex]);
		}
		NewMesh->RegisterComponent();

		AttachmentMeshes[EquipmentMeshIndex].Emplace(NewMesh);
	}

	
}


