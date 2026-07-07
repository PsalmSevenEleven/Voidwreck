// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/VWHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWHud() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UInteractPrompt_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWHud();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWHud_NoRegister();
// End Cross Module References
	void UVWHud::StaticRegisterNativesUVWHud()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWHud);
	UClass* Z_Construct_UClass_UVWHud_NoRegister()
	{
		return UVWHud::StaticClass();
	}
	struct Z_Construct_UClass_UVWHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crosshair_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Crosshair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractPrompt_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractPrompt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWHud_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWHud_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/VWHud.h" },
		{ "ModuleRelativePath", "Private/UI/VWHud.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWHud_Statics::NewProp_Crosshair_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/VWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWHud_Statics::NewProp_Crosshair = { "Crosshair", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWHud, Crosshair), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWHud_Statics::NewProp_Crosshair_MetaData), Z_Construct_UClass_UVWHud_Statics::NewProp_Crosshair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWHud_Statics::NewProp_InteractPrompt_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/VWHud.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWHud_Statics::NewProp_InteractPrompt = { "InteractPrompt", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWHud, InteractPrompt), Z_Construct_UClass_UInteractPrompt_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWHud_Statics::NewProp_InteractPrompt_MetaData), Z_Construct_UClass_UVWHud_Statics::NewProp_InteractPrompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWHud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWHud_Statics::NewProp_Crosshair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWHud_Statics::NewProp_InteractPrompt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWHud>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWHud_Statics::ClassParams = {
		&UVWHud::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWHud_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWHud_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWHud_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWHud_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWHud_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWHud()
	{
		if (!Z_Registration_Info_UClass_UVWHud.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWHud.OuterSingleton, Z_Construct_UClass_UVWHud_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWHud.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWHud>()
	{
		return UVWHud::StaticClass();
	}
	UVWHud::UVWHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWHud);
	UVWHud::~UVWHud() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWHud_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWHud_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWHud, UVWHud::StaticClass, TEXT("UVWHud"), &Z_Registration_Info_UClass_UVWHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWHud), 883067352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWHud_h_536822667(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWHud_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
