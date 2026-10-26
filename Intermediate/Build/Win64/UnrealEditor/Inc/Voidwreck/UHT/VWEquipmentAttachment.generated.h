// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/Equipment/VWEquipmentAttachment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef VOIDWRECK_VWEquipmentAttachment_generated_h
#error "VWEquipmentAttachment.generated.h already included, missing '#pragma once' in VWEquipmentAttachment.h"
#endif
#define VOIDWRECK_VWEquipmentAttachment_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics; \
	VOIDWRECK_API static class UScriptStruct* StaticStruct();


template<> VOIDWRECK_API UScriptStruct* StaticStruct<struct FAttachmentCustomizationOption>();

#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeOptions);


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVWEquipmentAttachment(); \
	friend struct Z_Construct_UClass_UVWEquipmentAttachment_Statics; \
public: \
	DECLARE_CLASS(UVWEquipmentAttachment, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Voidwreck"), NO_API) \
	DECLARE_SERIALIZER(UVWEquipmentAttachment)


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVWEquipmentAttachment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVWEquipmentAttachment(UVWEquipmentAttachment&&); \
	NO_API UVWEquipmentAttachment(const UVWEquipmentAttachment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVWEquipmentAttachment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVWEquipmentAttachment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVWEquipmentAttachment) \
	NO_API virtual ~UVWEquipmentAttachment();


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_64_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_INCLASS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDWRECK_API UClass* StaticClass<class UVWEquipmentAttachment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h


#define FOREACH_ENUM_EATTACHMENTOPTIONTYPE(op) \
	op(Scalar) \
	op(Vector2) \
	op(Vector3) \
	op(AssetList) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
