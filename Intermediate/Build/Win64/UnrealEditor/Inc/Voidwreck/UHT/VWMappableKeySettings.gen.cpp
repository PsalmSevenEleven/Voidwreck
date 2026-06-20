// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/Input/VWMappableKeySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWMappableKeySettings() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWMappableKeySettings();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWMappableKeySettings_NoRegister();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID();
// End Cross Module References
	void UVWMappableKeySettings::StaticRegisterNativesUVWMappableKeySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWMappableKeySettings);
	UClass* Z_Construct_UClass_UVWMappableKeySettings_NoRegister()
	{
		return UVWMappableKeySettings::StaticClass();
	}
	struct Z_Construct_UClass_UVWMappableKeySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGASAbility_MetaData[];
#endif
		static void NewProp_bIsGASAbility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGASAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWMappableKeySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerMappableKeySettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWMappableKeySettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWMappableKeySettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/Input/VWMappableKeySettings.h" },
		{ "ModuleRelativePath", "Private/Player/Input/VWMappableKeySettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/Player/Input/VWMappableKeySettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID = { "InputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWMappableKeySettings, InputID), Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID_MetaData), Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID_MetaData) }; // 3207570583
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/Player/Input/VWMappableKeySettings.h" },
	};
#endif
	void Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility_SetBit(void* Obj)
	{
		((UVWMappableKeySettings*)Obj)->bIsGASAbility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility = { "bIsGASAbility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVWMappableKeySettings), &Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility_MetaData), Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWMappableKeySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_InputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWMappableKeySettings_Statics::NewProp_bIsGASAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWMappableKeySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWMappableKeySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWMappableKeySettings_Statics::ClassParams = {
		&UVWMappableKeySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWMappableKeySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWMappableKeySettings_Statics::PropPointers),
		0,
		0x002010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWMappableKeySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWMappableKeySettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWMappableKeySettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWMappableKeySettings()
	{
		if (!Z_Registration_Info_UClass_UVWMappableKeySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWMappableKeySettings.OuterSingleton, Z_Construct_UClass_UVWMappableKeySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWMappableKeySettings.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWMappableKeySettings>()
	{
		return UVWMappableKeySettings::StaticClass();
	}
	UVWMappableKeySettings::UVWMappableKeySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWMappableKeySettings);
	UVWMappableKeySettings::~UVWMappableKeySettings() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Input_VWMappableKeySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Input_VWMappableKeySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWMappableKeySettings, UVWMappableKeySettings::StaticClass, TEXT("UVWMappableKeySettings"), &Z_Registration_Info_UClass_UVWMappableKeySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWMappableKeySettings), 1094947093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Input_VWMappableKeySettings_h_2383773467(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Input_VWMappableKeySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Input_VWMappableKeySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
