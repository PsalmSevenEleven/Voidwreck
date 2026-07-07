// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "VWEquipmentMenuViewer.generated.h"



UCLASS()
class AVWEquipmentMenuViewer : public AActor
{
	GENERATED_BODY()
	AVWEquipmentMenuViewer();
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* EquipmentMesh;
};
