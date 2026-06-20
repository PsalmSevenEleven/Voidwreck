// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Voidwreck.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDWRECK_Voidwreck_generated_h
#error "Voidwreck.generated.h already included, missing '#pragma once' in Voidwreck.h"
#endif
#define VOIDWRECK_Voidwreck_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Voidwreck_h


#define FOREACH_ENUM_EPLAYERABILITYINPUTID(op) \
	op(EPlayerAbilityInputID::None) \
	op(EPlayerAbilityInputID::Confirm) \
	op(EPlayerAbilityInputID::Cancel) \
	op(EPlayerAbilityInputID::Move) \
	op(EPlayerAbilityInputID::Look) \
	op(EPlayerAbilityInputID::Jump) \
	op(EPlayerAbilityInputID::Pause) \
	op(EPlayerAbilityInputID::Interact) \
	op(EPlayerAbilityInputID::Reload) \
	op(EPlayerAbilityInputID::Fire) \
	op(EPlayerAbilityInputID::AimDownSights) \
	op(EPlayerAbilityInputID::SwitchFireMode) \
	op(EPlayerAbilityInputID::NextItem) \
	op(EPlayerAbilityInputID::PreviousItem) \
	op(EPlayerAbilityInputID::SelectPrimary) \
	op(EPlayerAbilityInputID::SelectSecondary) \
	op(EPlayerAbilityInputID::Ping) 

enum class EPlayerAbilityInputID : uint8;
template<> struct TIsUEnumClass<EPlayerAbilityInputID> { enum { Value = true }; };
template<> VOIDWRECK_API UEnum* StaticEnum<EPlayerAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
