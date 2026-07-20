// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "VWEquipmentMenuViewer.generated.h"


class UVWEquipment;

UCLASS()
class AVWEquipmentMenuViewer : public AActor
{
	GENERATED_BODY()
	AVWEquipmentMenuViewer();
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* Root;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* EquipmentMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<USkeletalMeshComponent*> AttachmentMeshes;

	//WARNING - make sure that this is only called after the equip mesh is already set correctly.
	//Failing to do this will result in socket problems
	UFUNCTION(BlueprintCallable)
	void SetupMeshes(UVWEquipment* Equipment);
};
