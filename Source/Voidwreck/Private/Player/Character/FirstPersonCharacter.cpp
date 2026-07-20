// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"

#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Background_Infrastructure/VWGameplayTags.h"
#include "Components/CapsuleComponent.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/InteractableInterface.h"
#include "Player/VWPlayerState.h"
#include "Player/AbilitySystem/VWPlayerAbilitySystemComponent.h"
#include "Player/Input/FirstPersonPlayerController.h"
#include "Player/Input/VWMappableKeySettings.h"
#include "UI/InteractPrompt.h"
#include "UI/VWHud.h"


// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	FollowCamera->SetupAttachment(GetCapsuleComponent());
	FollowCamera->bUsePawnControlRotation = true;

	// Configure camera
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

}



void AFirstPersonCharacter::InitAttributes()
{
	if(!AttributesEffect.LoadSynchronous())
	{
		UE_LOG(LogTemp, Warning, TEXT("No attributes effect!"));
		return;
	}
	if(!AbilitySystemComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("No ASC !"));
		return;
	}
	if(bAttributesInitted)
	{
		UE_LOG(LogTemp, Warning, TEXT("Already Initted!"));
		return;
	}
	if(!AbilitySystemComponent->MakeEffectContext().Get())
	{
		UE_LOG(LogTemp, Warning, TEXT("No effect context!"));
	}
	
	FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
	EffectContext.AddSourceObject(this);
	
	FGameplayEffectSpecHandle AttributesEffectHandle = AbilitySystemComponent->MakeOutgoingSpec(AttributesEffect.LoadSynchronous(),1, EffectContext);
	if (AttributesEffectHandle.IsValid())
	{
		AbilitySystemComponent->ApplyGameplayEffectSpecToTarget(*AttributesEffectHandle.Data.Get(), AbilitySystemComponent);
		UE_LOG(LogTemp, Log, TEXT("Default attributes applied"));
		bAttributesInitted = true;
	}
}

//This is triggered when the character is possessed by a controller, and is where any server side setup should be done. The client will be handled in OnRep_PlayerState().
void AFirstPersonCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	VWPlayerState = GetPlayerState<AVWPlayerState>();
	if(VWPlayerState)
	{
		
		// storing the ASC in a member variable is technically not necessary,
		// but it's significantly more readable than copy-pasting the code to get it every time I want to access it
		AbilitySystemComponent = VWPlayerState->GetAbilitySystemComponent();
		AbilitySystemComponent->InitAbilityActorInfo(VWPlayerState, this);
		
		AttributeSet = AbilitySystemComponent->GetSet<UVWPlayerAttributeSet>();
		
		ensure(DefaultAbilities);
		if(!bDefaultAbilitiesAdded)
		{
			DefaultAbilities->AddAbilitiesToASC(AbilitySystemComponent);
		}
		
	}

	InitAttributes();

	FirstPersonPlayerController = GetController<AFirstPersonPlayerController>();
	if(FirstPersonPlayerController && GetNetMode() < NM_Client && bCanSetViewTarget && IsLocallyControlled())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Setting view target to player pawn"))
		FirstPersonPlayerController->SetViewTarget(FirstPersonPlayerController->GetPawn());
	}

	CreateHud();
	SetInteractTimer();
	
}

void AFirstPersonCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();


	VWPlayerState = GetPlayerState<AVWPlayerState>();
	if(!VWPlayerState)
	{
		//UE_LOG(LogTemp, Warning, TEXT("No MSD player state in OnRep_PlayerState!"))
		return;
	}
	
	
	AbilitySystemComponent = VWPlayerState->GetAbilitySystemComponent();
	AbilitySystemComponent->InitAbilityActorInfo(VWPlayerState, this);

	FirstPersonPlayerController = GetController<AFirstPersonPlayerController>();
	if(FirstPersonPlayerController && FirstPersonPlayerController->IsLocalController())
	{
		
		FirstPersonPlayerController->SetViewTarget(FirstPersonPlayerController->GetPawn());
		
		Cast<AFirstPersonPlayerController>(Controller)->SetupEnhancedInputContext();
		BindASCInputs();
		BindGASInputs(Controller->InputComponent);
		BindNativeInputs(Controller->InputComponent);
	}
	
	if(DefaultAbilities && !bDefaultAbilitiesAdded)
	{
		DefaultAbilities->AddAbilitiesToASC(AbilitySystemComponent);
		bDefaultAbilitiesAdded = true;
	}
		
	if(AbilitySystemComponent)
	{
		AttributeSet = AbilitySystemComponent->GetSet<UVWPlayerAttributeSet>();
	}

	InitAttributes();
	
	CreateHud();
	SetInteractTimer();
}

void AFirstPersonCharacter::SetInteractTimer()
{
	//Tick is an abomination given to designers by God to punish programmers for their hubris
	//Therefore, looping timer
	FTimerHandle InteractTimerHandle;

	//SetInteractTimer() is called in both OnRep_PlayerState() and PossessedBy(),
	//but SetTimer() will internally clear the existing timer if the handle already has one associated with it,
	//so we don't need to worry about multiple timers being set.
	GetWorld()->GetTimerManager().SetTimer(InteractTimerHandle, this, &AFirstPersonCharacter::InteractCheck, 0.03f, true);
	
}

void AFirstPersonCharacter::CreateHud()
{
	if(!bHudCreated)
	{
		AFirstPersonPlayerController* PC = GetController<AFirstPersonPlayerController>();
		if(PC)
		{
			PC->SetupHud();
			bHudCreated = true;
		}
	}
}

void AFirstPersonCharacter::InteractCheck()
{
	if(!VWPlayerState || VWPlayerState->GetAbilitySystemComponent()->HasMatchingGameplayTag(TAG_Player_Status_Menu))
	{
		return;
	}
	
	FHitResult HitResult;
	// const FName TraceTag("InteractTraceTag");
	// GetWorld()->DebugDrawTraceTag = TraceTag;
	
	FCollisionQueryParams CollisionParams;
	//CollisionParams.TraceTag = TraceTag;
	
	if(!GetWorld()
		|| !FollowCamera
		|| !FirstPersonPlayerController
		|| !FirstPersonPlayerController->HUD
		|| !FirstPersonPlayerController->HUD->InteractPrompt)
	{
		// FString Log = GetWorld() ? "world"
		// 		: FollowCamera ? "camera"
		// 		: FirstPersonPlayerController ? "player controller"
		// 		: FirstPersonPlayerController->HUD ? "HUD"
		// 		: "Interact Prompt";
		// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("InteractCheck failed: No" + Log));
		return;
	}
	
	int32 InteractionDistance = AttributeSet->GetInteractionDistance();
	//GEngine->AddOnScreenDebugMessage(-1, 0.033f, FColor::Green, FString::FromInt(InteractionDistance));
	
	GetWorld()->LineTraceSingleByChannel(HitResult, FollowCamera->GetComponentLocation(), FollowCamera->GetComponentLocation() + FollowCamera->GetForwardVector() * InteractionDistance, ECollisionChannel::ECC_GameTraceChannel1, CollisionParams);
	
	if(!HitResult.GetActor() || !HitResult.GetActor()->Implements<UInteractableInterface>())
	{
		CurrentInteractable = nullptr;
		
		if(FirstPersonPlayerController->HUD->InteractPrompt->GetVisibility() == ESlateVisibility::Visible)
		{
			FirstPersonPlayerController->HUD->InteractPrompt->SetVisibility(ESlateVisibility::Collapsed);
		}
		
		return;
	}
	
	CurrentInteractable = HitResult.GetActor();
	
	UInteractPrompt* InteractPrompt = FirstPersonPlayerController->HUD->InteractPrompt;
	
	if(InteractPrompt->GetVisibility() == ESlateVisibility::Collapsed)
	{
		InteractPrompt->SetVisibility(ESlateVisibility::Visible);
			
		FString InteractText;
		EInteractionType InteractionType;
		IInteractableInterface::Execute_RetrieveInteractInfo(CurrentInteractable, InteractText, InteractionType);
	
		InteractPrompt->PromptText->SetText(FText::FromString(InteractText));
	
		if(InteractionType == EInteractionType::InteractionType_Hold)
		{
			InteractPrompt->ProgressBar->SetVisibility(ESlateVisibility::Visible);
			InteractPrompt->ProgressBar->PercentDelegate.BindUFunction(CurrentInteractable, "GetPercentComplete");
			InteractPrompt->ProgressBar->SynchronizeProperties();
		}
		else
		{
			InteractPrompt->ProgressBar->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void AFirstPersonCharacter::Server_RequestAbilities_Implementation(const TSoftObjectPtr<UVWAbilitySet>& AbilitySet)
 {
 	AbilitySet->AddAbilitiesToASC(VWPlayerState->GetAbilitySystemComponent());
 }

 bool AFirstPersonCharacter::Server_RequestAbilities_Validate(const TSoftObjectPtr<UVWAbilitySet>& AbilitySet)
 {
 	//TODO - check if the player owns the class in their save game or on a database
 	return true;
}

void AFirstPersonCharacter::ActivateGASAbility(int32 Index, bool bOn)
{
	if(!IsValid(GetController()))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "No Controller!");
		return;
	}
	
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(GetController()->InputComponent);
	UVWPlayerAbilitySystemComponent* ASC = Cast<UVWPlayerAbilitySystemComponent>(AbilitySystemComponent);
	
	if (IsValid(PlayerEnhancedInputComponent) && ASC)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, "Valid InputComponent and ASC");
		if(bOn)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, "Queueing " + FString::SanitizeFloat(Index));
			ASC->QueueAbilityPressed(Index);
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, "Releasing " + FString::SanitizeFloat(Index));
			ASC->QueueAbilityReleased(Index);
		}
	}
	
}



// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if(ensure(IsValid(Cast<AFirstPersonPlayerController>(Controller))))
	{
		Cast<AFirstPersonPlayerController>(Controller)->SetupEnhancedInputContext();
		BindASCInputs();
		BindGASInputs(PlayerInputComponent);
		BindNativeInputs(PlayerInputComponent);
	}
}

void AFirstPersonCharacter::BindASCInputs()
{
	if (!bASCInputBound && AbilitySystemComponent && IsValid(InputComponent))
	{
	
		const FGameplayAbilityInputBinds Binds(
				FString("Confirm"),
				FString("Cancel"),
				FTopLevelAssetPath(FName("/Script/Voidwreck"), FName("EPlayerAbilityInputID")),
				static_cast<int32>(EPlayerAbilityInputID::Confirm),
				static_cast<int32>(EPlayerAbilityInputID::Cancel)
				);
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, Binds);
		bASCInputBound = true;
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
	if (FirstPersonPlayerController != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(Value.Get<FVector2D>().X);
		AddControllerPitchInput(Value.Get<FVector2D>().Y);
	}
}



//Automatically binds all GAS abilities to their inputs,
//saving the trouble of creating a variable for every input action and creating a function to call each possible GAS ability.

//This function relies on a custom PlayerMappableKeySettings class which allows
//the designer to tell each input action which of the custom input id's should trigger it.
//It also allows the designer to specify whether the input should be for a GAS ability
//or native function, which allows us to remap native function keys just as easily as GAS abilities.
void AFirstPersonCharacter::BindGASInputs(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* PlayerEnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (PlayerEnhancedInputComponent && !bGASInputBound && IsValid(Cast<AFirstPersonPlayerController>(Controller)))
	{
		for(const FEnhancedActionKeyMapping & Action : Cast<AFirstPersonPlayerController>(Controller)->GetPlayerInputMappingContext()->GetMappings())
		{
			
			//if the action isn't a GAS ability, we'll handle it in BindNativeInputs().
			if (!Action.GetPlayerMappableKeySettings<UVWMappableKeySettings>()->bIsGASAbility)
			{
				continue;
			}
			
			int32 InputID = static_cast<int>(Action.GetPlayerMappableKeySettings<UVWMappableKeySettings>()->InputID);
			PlayerEnhancedInputComponent->BindAction(Action.Action, ETriggerEvent::Started, this, &ThisClass::ActivateGASAbility, InputID, true);
			PlayerEnhancedInputComponent->BindAction(Action.Action, ETriggerEvent::Canceled, this, &ThisClass::ActivateGASAbility, InputID, false);
			PlayerEnhancedInputComponent->BindAction(Action.Action, ETriggerEvent::Completed, this, &ThisClass::ActivateGASAbility, InputID, false);
		}
		
		bGASInputBound = true;
		//TODO (maybe) - add a delegate broadcast here in case something cares about it
	}
}

UAbilitySystemComponent* AFirstPersonCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UVWUserWidget* AFirstPersonCharacter::GetCurrentWidget_Implementation() const
{
	return FirstPersonPlayerController->CurrentWidget;
}

void AFirstPersonCharacter::SetCurrentWidget_Implementation(UVWUserWidget* NewWidget)
{
	FirstPersonPlayerController->CurrentWidget = NewWidget;
}


#pragma endregion
