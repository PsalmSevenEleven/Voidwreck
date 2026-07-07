// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/AbilitySystem/VWPlayerAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWPlayerAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerAttributeSet();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerAttributeSet_NoRegister();
// End Cross Module References
	void UVWPlayerAttributeSet::StaticRegisterNativesUVWPlayerAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWPlayerAttributeSet);
	UClass* Z_Construct_UClass_UVWPlayerAttributeSet_NoRegister()
	{
		return UVWPlayerAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UVWPlayerAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingRounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemainingRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWPlayerAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/AbilitySystem/VWPlayerAttributeSet.h" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, CurrentHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_CurrentHealth_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_CurrentHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_RemainingRounds_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_RemainingRounds = { "RemainingRounds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, RemainingRounds), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_RemainingRounds_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_RemainingRounds_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxRounds_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxRounds = { "MaxRounds", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, MaxRounds), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxRounds_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxRounds_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, WalkSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_WalkSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, SprintSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_SprintSpeed_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_SprintSpeed_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAttributeSet, InteractionDistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_InteractionDistance_MetaData), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_InteractionDistance_MetaData) }; // 2151517668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWPlayerAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_RemainingRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_MaxRounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAttributeSet_Statics::NewProp_InteractionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWPlayerAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWPlayerAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWPlayerAttributeSet_Statics::ClassParams = {
		&UVWPlayerAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWPlayerAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWPlayerAttributeSet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAttributeSet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWPlayerAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UVWPlayerAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWPlayerAttributeSet.OuterSingleton, Z_Construct_UClass_UVWPlayerAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWPlayerAttributeSet.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWPlayerAttributeSet>()
	{
		return UVWPlayerAttributeSet::StaticClass();
	}
	UVWPlayerAttributeSet::UVWPlayerAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWPlayerAttributeSet);
	UVWPlayerAttributeSet::~UVWPlayerAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWPlayerAttributeSet, UVWPlayerAttributeSet::StaticClass, TEXT("UVWPlayerAttributeSet"), &Z_Registration_Info_UClass_UVWPlayerAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWPlayerAttributeSet), 3669799219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAttributeSet_h_3871459470(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
