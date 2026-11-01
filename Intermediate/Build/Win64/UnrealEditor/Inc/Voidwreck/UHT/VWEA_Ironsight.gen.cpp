// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/Equipment/VWEA_Ironsight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWEA_Ironsight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEA_Ironsight();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEA_Ironsight_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentAttachment();
// End Cross Module References
	void UVWEA_Ironsight::StaticRegisterNativesUVWEA_Ironsight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWEA_Ironsight);
	UClass* Z_Construct_UClass_UVWEA_Ironsight_NoRegister()
	{
		return UVWEA_Ironsight::StaticClass();
	}
	struct Z_Construct_UClass_UVWEA_Ironsight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Glow1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Glow1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Glow2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Glow2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWEA_Ironsight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVWEquipmentAttachment,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEA_Ironsight_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/Equipment/VWEA_Ironsight.h" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEA_Ironsight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow1_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is imperative for the InitializeOptions function to work correctly\n" },
#endif
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEA_Ironsight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is imperative for the InitializeOptions function to work correctly" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow1 = { "Glow1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEA_Ironsight, Glow1), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow1_MetaData), Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow2_MetaData[] = {
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEA_Ironsight.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow2 = { "Glow2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEA_Ironsight, Glow2), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow2_MetaData), Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEA_Ironsight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEA_Ironsight_Statics::NewProp_Glow2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEA_Ironsight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEA_Ironsight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEA_Ironsight_Statics::ClassParams = {
		&UVWEA_Ironsight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWEA_Ironsight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWEA_Ironsight_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWEA_Ironsight()
	{
		if (!Z_Registration_Info_UClass_UVWEA_Ironsight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWEA_Ironsight.OuterSingleton, Z_Construct_UClass_UVWEA_Ironsight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWEA_Ironsight.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWEA_Ironsight>()
	{
		return UVWEA_Ironsight::StaticClass();
	}
	UVWEA_Ironsight::UVWEA_Ironsight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWEA_Ironsight);
	UVWEA_Ironsight::~UVWEA_Ironsight() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWEA_Ironsight, UVWEA_Ironsight::StaticClass, TEXT("UVWEA_Ironsight"), &Z_Registration_Info_UClass_UVWEA_Ironsight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEA_Ironsight), 622497125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_1190936471(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
