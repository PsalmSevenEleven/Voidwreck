// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/VWPlayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVWUserWidget;
enum class ESlateVisibility : uint8;
#ifdef VOIDWRECK_VWPlayerInterface_generated_h
#error "VWPlayerInterface.generated.h already included, missing '#pragma once' in VWPlayerInterface.h"
#endif
#define VOIDWRECK_VWPlayerInterface_generated_h

#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_SPARSE_DATA
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetHudVisibility_Implementation(ESlateVisibility Visibility) {}; \
	virtual void SetCurrentWidget_Implementation(UVWUserWidget* NewWidget) {}; \
	virtual UVWUserWidget* GetCurrentWidget_Implementation() const { return NULL; }; \
 \
	DECLARE_FUNCTION(execSetHudVisibility); \
	DECLARE_FUNCTION(execSetCurrentWidget); \
	DECLARE_FUNCTION(execGetCurrentWidget);


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_ACCESSORS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_CALLBACK_WRAPPERS
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VOIDWRECK_API UVWPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VOIDWRECK_API UVWPlayerInterface(UVWPlayerInterface&&); \
	VOIDWRECK_API UVWPlayerInterface(const UVWPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VOIDWRECK_API, UVWPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVWPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVWPlayerInterface) \
	VOIDWRECK_API virtual ~UVWPlayerInterface();


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVWPlayerInterface(); \
	friend struct Z_Construct_UClass_UVWPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UVWPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Voidwreck"), VOIDWRECK_API) \
	DECLARE_SERIALIZER(UVWPlayerInterface)


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVWPlayerInterface() {} \
public: \
	typedef UVWPlayerInterface UClassType; \
	typedef IVWPlayerInterface ThisClass; \
	static UVWUserWidget* Execute_GetCurrentWidget(const UObject* O); \
	static void Execute_SetCurrentWidget(UObject* O, UVWUserWidget* NewWidget); \
	static void Execute_SetHudVisibility(UObject* O, ESlateVisibility Visibility); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_11_PROLOG
#define FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_SPARSE_DATA \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_ACCESSORS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_CALLBACK_WRAPPERS \
	FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VOIDWRECK_API UClass* StaticClass<class UVWPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
