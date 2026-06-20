// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/AbilitySystem/VWGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameplayAbility();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameplayAbility_NoRegister();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EAbilityActivationType();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityActivationType;
	static UEnum* EAbilityActivationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAbilityActivationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAbilityActivationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voidwreck_EAbilityActivationType, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("EAbilityActivationType"));
		}
		return Z_Registration_Info_UEnum_EAbilityActivationType.OuterSingleton;
	}
	template<> VOIDWRECK_API UEnum* StaticEnum<EAbilityActivationType>()
	{
		return EAbilityActivationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::Enumerators[] = {
		{ "EAbilityActivationType::ActivateWhileHeld", (int64)EAbilityActivationType::ActivateWhileHeld },
		{ "EAbilityActivationType::ActivateOnPressed", (int64)EAbilityActivationType::ActivateOnPressed },
		{ "EAbilityActivationType::ActivateOnGranted", (int64)EAbilityActivationType::ActivateOnGranted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::Enum_MetaDataParams[] = {
		{ "ActivateOnGranted.Comment", "/**\n * \n\n*/" },
		{ "ActivateOnGranted.DisplayName", "Activate On Granted" },
		{ "ActivateOnGranted.Name", "EAbilityActivationType::ActivateOnGranted" },
		{ "ActivateOnPressed.Comment", "/**\n * \n\n*/" },
		{ "ActivateOnPressed.DisplayName", "Activate On Pressed" },
		{ "ActivateOnPressed.Name", "EAbilityActivationType::ActivateOnPressed" },
		{ "ActivateWhileHeld.Comment", "/**\n * \n\n*/" },
		{ "ActivateWhileHeld.DisplayName", "Activate While Held" },
		{ "ActivateWhileHeld.Name", "EAbilityActivationType::ActivateWhileHeld" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n\n*/" },
#endif
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		"EAbilityActivationType",
		"EAbilityActivationType",
		Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Voidwreck_EAbilityActivationType()
	{
		if (!Z_Registration_Info_UEnum_EAbilityActivationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityActivationType.InnerSingleton, Z_Construct_UEnum_Voidwreck_EAbilityActivationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAbilityActivationType.InnerSingleton;
	}
	void UVWGameplayAbility::StaticRegisterNativesUVWGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWGameplayAbility);
	UClass* Z_Construct_UClass_UVWGameplayAbility_NoRegister()
	{
		return UVWGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UVWGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActivationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameplayAbility_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/AbilitySystem/VWGameplayAbility.h" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "VWGameplayAbility" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWGameplayAbility, AbilityInputID), Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID_MetaData), Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID_MetaData) }; // 3207570583
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType_MetaData[] = {
		{ "Category", "VWGameplayAbility" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType = { "ActivationType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWGameplayAbility, ActivationType), Z_Construct_UEnum_Voidwreck_EAbilityActivationType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType_MetaData), Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType_MetaData) }; // 1224890233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_AbilityInputID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWGameplayAbility_Statics::NewProp_ActivationType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWGameplayAbility_Statics::ClassParams = {
		&UVWGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameplayAbility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWGameplayAbility_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGameplayAbility_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UVWGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWGameplayAbility.OuterSingleton, Z_Construct_UClass_UVWGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWGameplayAbility.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWGameplayAbility>()
	{
		return UVWGameplayAbility::StaticClass();
	}
	UVWGameplayAbility::UVWGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWGameplayAbility);
	UVWGameplayAbility::~UVWGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics::EnumInfo[] = {
		{ EAbilityActivationType_StaticEnum, TEXT("EAbilityActivationType"), &Z_Registration_Info_UEnum_EAbilityActivationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1224890233U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWGameplayAbility, UVWGameplayAbility::StaticClass, TEXT("UVWGameplayAbility"), &Z_Registration_Info_UClass_UVWGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWGameplayAbility), 278257026U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_2435758630(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWGameplayAbility_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
