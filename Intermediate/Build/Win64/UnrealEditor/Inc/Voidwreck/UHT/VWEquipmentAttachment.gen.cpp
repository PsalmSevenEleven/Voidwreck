// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/Equipment/VWEquipmentAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWEquipmentAttachment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentAttachment();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentAttachment_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameplayAbility_NoRegister();
// End Cross Module References
	void UVWEquipmentAttachment::StaticRegisterNativesUVWEquipmentAttachment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWEquipmentAttachment);
	UClass* Z_Construct_UClass_UVWEquipmentAttachment_NoRegister()
	{
		return UVWEquipmentAttachment::StaticClass();
	}
	struct Z_Construct_UClass_UVWEquipmentAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PassiveEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveEffects;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWEquipmentAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/Equipment/VWEquipmentAttachment.h" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, Thumbnail), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_Inner = { "PassiveEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects = { "PassiveEffects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, PassiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVWGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEquipmentAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEquipmentAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::ClassParams = {
		&UVWEquipmentAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWEquipmentAttachment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWEquipmentAttachment()
	{
		if (!Z_Registration_Info_UClass_UVWEquipmentAttachment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWEquipmentAttachment.OuterSingleton, Z_Construct_UClass_UVWEquipmentAttachment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWEquipmentAttachment.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWEquipmentAttachment>()
	{
		return UVWEquipmentAttachment::StaticClass();
	}
	UVWEquipmentAttachment::UVWEquipmentAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWEquipmentAttachment);
	UVWEquipmentAttachment::~UVWEquipmentAttachment() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWEquipmentAttachment, UVWEquipmentAttachment::StaticClass, TEXT("UVWEquipmentAttachment"), &Z_Registration_Info_UClass_UVWEquipmentAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEquipmentAttachment), 289770311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_1198645814(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
