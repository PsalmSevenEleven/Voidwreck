// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Player/Input/FirstPersonPlayerController.h"
#include "InputAction.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interfaces/VWPlayerInterface.h"
#include "Player/AbilitySystem/VWAbilitySet.h"
#include "Player/AbilitySystem/VWPlayerAttributeSet.h"
#include "UI/VWUserWidget.h"
#include "FirstPersonCharacter.generated.h"

UCLASS(config = Game)
class AFirstPersonCharacter : public ACharacter, public IAbilitySystemInterface, public IVWPlayerInterface
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* FollowCamera;
	
	// Sets default values for this character's properties
	AFirstPersonCharacter();

protected:
	
	UPROPERTY()
	class AVWPlayerState* VWPlayerState;
	
	UPROPERTY(BlueprintReadOnly)
	UAbilitySystemComponent* AbilitySystemComponent;
	
	UPROPERTY(BlueprintReadOnly)
	mutable const UVWPlayerAttributeSet* AttributeSet;

	//Sets up default values for player attributes like health, movement speed, etc.
	//Make usre it's always called after initting the player's AttributeSet
	void InitAttributes();

	bool bAttributesInitted = false;

	//The effect to set the class's attributes
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	TSoftClassPtr<UGameplayEffect> AttributesEffect;

	UPROPERTY()
	AFirstPersonPlayerController* FirstPersonPlayerController;

	bool bCanSetViewTarget = true;

	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_PlayerState() override;

	
	void SetInteractTimer();

	bool bHudCreated = false;
	void CreateHud();
	

public:
	UPROPERTY()
	AActor* CurrentInteractable = nullptr;

protected:
	//Called about 30 times per second to ensure that the player knows if it's looking at an interactible.
	//I would just call this during Look(), but if an interactible is capable of moving that would cause some... counterintuitive behavior.
	//The player would be able to interact with things that move out of their line of sight as long as they don't move their mouse. 
	void InteractCheck();
	
	
#pragma region GAS
	
	UFUNCTION(Server, Reliable, WithValidation)
	virtual void Server_RequestAbilities(const TSoftObjectPtr<UVWAbilitySet>& AbilitySet);
	
	//Abilities that all player characters have by default; firing, switching equipment, etc. 
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<const UVWAbilitySet> DefaultAbilities;

	bool bDefaultAbilitiesAdded = false;

	UFUNCTION()
	void ActivateGASAbility(int32 Index, bool bOn);
	
#pragma endregion

public:	

#pragma region Input
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool bASCInputBound = false;
	void BindASCInputs();

	bool bNativeInputBound = false;
	void BindNativeInputs(UInputComponent* PlayerInputComponent);

	bool bGASInputBound = false;
	void BindGASInputs(UInputComponent* PlayerInputComponent);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;
	
	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

#pragma endregion

	//Ability System Interface
	UFUNCTION()
	UAbilitySystemComponent* GetAbilitySystemComponent() const override;


	//Player Interface
	UFUNCTION()
	UVWUserWidget* GetCurrentWidget_Implementation() const override;
	
	UFUNCTION()
	void SetCurrentWidget_Implementation(UVWUserWidget* NewWidget) override;
	
};
