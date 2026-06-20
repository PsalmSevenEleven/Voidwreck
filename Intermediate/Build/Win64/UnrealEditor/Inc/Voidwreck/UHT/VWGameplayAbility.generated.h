// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AbilitySystem/VWGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VOIDWRECK_VWGameplayAbility_generated_h
#error "VWGameplayAbility.generated.h already included, missing '#pragma once' in VWGameplayAbility.h"
#endif
#define VOIDWRECK_VWGameplayAbility_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVWGameplayAbility(); \
	friend struct Z_Construct_UClass_UVWGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UVWGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voidwreck"), NO_API) \
	DECLARE_SERIALIZER(UVWGameplayAbility)


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVWGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVWGameplayAbility(UVWGameplayAbility&&); \
	NO_API UVWGameplayAbility(const UVWGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVWGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVWGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVWGameplayAbility) \
	NO_API virtual ~UVWGameplayAbility();


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_24_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDWRECK_API UClass* StaticClass<class UVWGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h


#define FOREACH_ENUM_EABILITYACTIVATIONTYPE(op) \
	op(EAbilityActivationType::ActivateWhileHeld) \
	op(EAbilityActivationType::ActivateOnPressed) \
	op(EAbilityActivationType::ActivateOnGranted) 

enum class EAbilityActivationType;
template<> struct TIsUEnumClass<EAbilityActivationType> { enum { Value = true }; };
template<> VOIDWRECK_API UEnum* StaticEnum<EAbilityActivationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
