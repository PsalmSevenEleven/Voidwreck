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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEA_Ironsight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEA_Ironsight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEA_Ironsight_Statics::ClassParams = {
		&UVWEA_Ironsight::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEA_Ironsight_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWEA_Ironsight_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_UVWEA_Ironsight, UVWEA_Ironsight::StaticClass, TEXT("UVWEA_Ironsight"), &Z_Registration_Info_UClass_UVWEA_Ironsight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEA_Ironsight), 712472489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_2389366822(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEA_Ironsight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
