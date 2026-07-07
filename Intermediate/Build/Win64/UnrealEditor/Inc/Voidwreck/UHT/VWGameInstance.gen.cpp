// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Background_Infrastructure/VWGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWGameInstance() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_UAdvancedFriendsGameInstance();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameInstance();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameInstance_NoRegister();
// End Cross Module References
	void UVWGameInstance::StaticRegisterNativesUVWGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWGameInstance);
	UClass* Z_Construct_UClass_UVWGameInstance_NoRegister()
	{
		return UVWGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVWGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedFriendsGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWGameInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Background_Infrastructure/VWGameInstance.h" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWGameInstance_Statics::ClassParams = {
		&UVWGameInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWGameInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVWGameInstance()
	{
		if (!Z_Registration_Info_UClass_UVWGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWGameInstance.OuterSingleton, Z_Construct_UClass_UVWGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWGameInstance.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWGameInstance>()
	{
		return UVWGameInstance::StaticClass();
	}
	UVWGameInstance::UVWGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWGameInstance);
	UVWGameInstance::~UVWGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWGameInstance, UVWGameInstance::StaticClass, TEXT("UVWGameInstance"), &Z_Registration_Info_UClass_UVWGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWGameInstance), 2002386258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWGameInstance_h_98476935(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
