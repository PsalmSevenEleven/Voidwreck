// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "VWCharacterMenuViewer.generated.h"

UCLASS()
class AVWCharacterMenuViewer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVWCharacterMenuViewer();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* CharacterMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<USkeletalMeshComponent*> EquipmentMeshes;
	

};
