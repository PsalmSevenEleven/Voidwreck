// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/VWPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
class UVWAbilitySet;
#ifdef VOIDWRECK_VWPlayerState_generated_h
#error "VWPlayerState.generated.h already included, missing '#pragma once' in VWPlayerState.h"
#endif
#define VOIDWRECK_VWPlayerState_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RequestAbilities_Validate(TSoftObjectPtr<UVWAbilitySet> const& ); \
	virtual void Server_RequestAbilities_Implementation(TSoftObjectPtr<UVWAbilitySet> const& AbilitySet); \
 \
	DECLARE_FUNCTION(execServer_RequestAbilities); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVWPlayerState(); \
	friend struct Z_Construct_UClass_AVWPlayerState_Statics; \
public: \
	DECLARE_CLASS(AVWPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Voidwreck"), NO_API) \
	DECLARE_SERIALIZER(AVWPlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<AVWPlayerState*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AbilitySystemComponent=NETFIELD_REP_START, \
		NETFIELD_REP_END=AbilitySystemComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVWPlayerState(AVWPlayerState&&); \
	NO_API AVWPlayerState(const AVWPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVWPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVWPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVWPlayerState) \
	NO_API virtual ~AVWPlayerState();


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_16_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDWRECK_API UClass* StaticClass<class AVWPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
