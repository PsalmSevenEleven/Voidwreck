// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(Blueprintable)
enum class EPlayerAbilityInputID: uint8
{
	None UMETA(DisplayName = "None"),
	Confirm UMETA(DisplayName = "Confirm"),
	Cancel UMETA(DisplayName = "Cancel"),
	Move UMETA(DisplayName = "Move"),
	Look UMETA(DisplayName = "Look"),
	Jump UMETA(DisplayName = "Jump"),
	Pause UMETA(DisplayName = "Pause"),
	Interact UMETA(DisplayName = "Interact"),
	Reload UMETA(DisplayName = "Reload"),
	Fire UMETA(DisplayName = "Fire"),
	AimDownSights UMETA(DisplayName = "Aim Down Sights"),
	SwitchFireMode UMETA(DisplayName = "Switch Fire Mode"),
	NextItem UMETA(DisplayName = "Select Next Item"),
	PreviousItem UMETA(DisplayName = "Select Previous Item"),
	SelectPrimary UMETA(DisplayName = "Select Primary"),
	SelectSecondary UMETA(DisplayName = "Select Secondary"),
	Ping UMETA(DisplayName = "Ping"),
	
	
	
};