// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/FirstPersonPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AFirstPersonPlayerController();
	VOIDWRECK_API UClass* Z_Construct_UClass_AFirstPersonPlayerController_NoRegister();
// End Cross Module References
	void AFirstPersonPlayerController::StaticRegisterNativesAFirstPersonPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonPlayerController);
	UClass* Z_Construct_UClass_AFirstPersonPlayerController_NoRegister()
	{
		return AFirstPersonPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FirstPersonPlayerController.h" },
		{ "ModuleRelativePath", "Private/FirstPersonPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/FirstPersonPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonPlayerController_Statics::NewProp_PlayerInputMappingContext = { "PlayerInputMappingContext", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonPlayerController, PlayerInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData), Z_Construct_UClass_AFirstPersonPlayerController_Statics::NewProp_PlayerInputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonPlayerController_Statics::NewProp_PlayerInputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonPlayerController_Statics::ClassParams = {
		&AFirstPersonPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstPersonPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFirstPersonPlayerController()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonPlayerController.OuterSingleton, Z_Construct_UClass_AFirstPersonPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonPlayerController.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<AFirstPersonPlayerController>()
	{
		return AFirstPersonPlayerController::StaticClass();
	}
	AFirstPersonPlayerController::AFirstPersonPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonPlayerController);
	AFirstPersonPlayerController::~AFirstPersonPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Source_Voidwreck_Private_FirstPersonPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Source_Voidwreck_Private_FirstPersonPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonPlayerController, AFirstPersonPlayerController::StaticClass, TEXT("AFirstPersonPlayerController"), &Z_Registration_Info_UClass_AFirstPersonPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonPlayerController), 568293181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Source_Voidwreck_Private_FirstPersonPlayerController_h_2155974464(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Source_Voidwreck_Private_FirstPersonPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Source_Voidwreck_Private_FirstPersonPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
