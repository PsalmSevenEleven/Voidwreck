// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FirstPersonPlayerController.h"
#include "InputAction.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacter.generated.h"

UCLASS()
class AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* CameraComponent;
	
	// Sets default values for this character's properties
	AFirstPersonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	AFirstPersonPlayerController* FirstPersonPlayerController;

	bool bCanSetViewTarget = true;

	virtual void PossessedBy(AController* NewController) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetupEnhancedInputContext();

	bool bNativeInputBound = false;
	void BindNativeInputs(UInputComponent* PlayerInputComponent);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;
	
	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

};
