// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"

#include "EnhancedInputComponent.h"
#include "FirstPersonPlayerController.h"
#include "InputActionValue.h"
#include "Components/CapsuleComponent.h"


// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->bUsePawnControlRotation = true;
	

}

// Called when the game starts or when spawned
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFirstPersonCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FirstPersonPlayerController = GetController<AFirstPersonPlayerController>();
	if(FirstPersonPlayerController && GetNetMode() < NM_Client && bCanSetViewTarget && IsLocallyControlled())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Setting view target to player pawn"))
		FirstPersonPlayerController->SetViewTarget(FirstPersonPlayerController->GetPawn());
	}
}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if(ensure(IsValid(Cast<AFirstPersonPlayerController>(Controller))))
	{
		
		Cast<AFirstPersonPlayerController>(Controller)->SetupEnhancedInputContext();
		// TODO - add this extra input functionality if I end up using GAS
		//BindASCInputs();
		//BindGASInputs(PlayerInputComponent);
		BindNativeInputs(PlayerInputComponent);
	}
}

void AFirstPersonCharacter::BindNativeInputs(UInputComponent* PlayerInputComponent)
{
	
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (PlayerEnhancedInputComponent && !bNativeInputBound && IsValid(Cast<AFirstPersonPlayerController>(Controller)))
	{
		PlayerEnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
		PlayerEnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);
		
	}
	bNativeInputBound = true;
}

#pragma region Native Abilities
void AFirstPersonCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void AFirstPersonCharacter::Look(const FInputActionValue& Value)
{	
	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(Value.Get<FVector2D>().X);
		AddControllerPitchInput(Value.Get<FVector2D>().Y);
	}
}
#pragma endregion
