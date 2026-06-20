// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/AbilitySystem/VWPlayerAbilitySystemComponent.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWPlayerAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerAbilitySystemComponent();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerAbilitySystemComponent_NoRegister();
// End Cross Module References
	void UVWPlayerAbilitySystemComponent::StaticRegisterNativesUVWPlayerAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWPlayerAbilitySystemComponent);
	UClass* Z_Construct_UClass_UVWPlayerAbilitySystemComponent_NoRegister()
	{
		return UVWPlayerAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeldAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HeldAbilityHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PressedAbilityHandles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReleasedAbilityHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleasedAbilityHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReleasedAbilityHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Player/AbilitySystem/VWPlayerAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_Inner = { "HeldAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_MetaData[] = {
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles = { "HeldAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAbilitySystemComponent, HeldAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_MetaData), Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_Inner = { "PressedAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_MetaData[] = {
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles = { "PressedAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAbilitySystemComponent, PressedAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_MetaData), Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_Inner = { "ReleasedAbilityHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 839298412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_MetaData[] = {
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/VWPlayerAbilitySystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles = { "ReleasedAbilityHandles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWPlayerAbilitySystemComponent, ReleasedAbilityHandles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_MetaData), Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_MetaData) }; // 839298412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_HeldAbilityHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_PressedAbilityHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::NewProp_ReleasedAbilityHandles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWPlayerAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::ClassParams = {
		&UVWPlayerAbilitySystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWPlayerAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UVWPlayerAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWPlayerAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UVWPlayerAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWPlayerAbilitySystemComponent.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWPlayerAbilitySystemComponent>()
	{
		return UVWPlayerAbilitySystemComponent::StaticClass();
	}
	UVWPlayerAbilitySystemComponent::UVWPlayerAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWPlayerAbilitySystemComponent);
	UVWPlayerAbilitySystemComponent::~UVWPlayerAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWPlayerAbilitySystemComponent, UVWPlayerAbilitySystemComponent::StaticClass, TEXT("UVWPlayerAbilitySystemComponent"), &Z_Registration_Info_UClass_UVWPlayerAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWPlayerAbilitySystemComponent), 3370358470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAbilitySystemComponent_h_3499397881(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_VWPlayerAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
