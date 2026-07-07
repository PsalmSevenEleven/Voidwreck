// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWCharacterMenuViewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWCharacterMenuViewer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWCharacterMenuViewer();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWCharacterMenuViewer_NoRegister();
// End Cross Module References
	void AVWCharacterMenuViewer::StaticRegisterNativesAVWCharacterMenuViewer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVWCharacterMenuViewer);
	UClass* Z_Construct_UClass_AVWCharacterMenuViewer_NoRegister()
	{
		return AVWCharacterMenuViewer::StaticClass();
	}
	struct Z_Construct_UClass_AVWCharacterMenuViewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EquipmentMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVWCharacterMenuViewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWCharacterMenuViewer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Loadout/VWCharacterMenuViewer.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VWCharacterMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWCharacterMenuViewer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_CharacterMesh_MetaData[] = {
		{ "Category", "VWCharacterMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_CharacterMesh = { "CharacterMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWCharacterMenuViewer, CharacterMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_CharacterMesh_MetaData), Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_CharacterMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes_Inner = { "EquipmentMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes_MetaData[] = {
		{ "Category", "VWCharacterMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes = { "EquipmentMeshes", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWCharacterMenuViewer, EquipmentMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes_MetaData), Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVWCharacterMenuViewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_CharacterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_EquipmentMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVWCharacterMenuViewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVWCharacterMenuViewer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVWCharacterMenuViewer_Statics::ClassParams = {
		&AVWCharacterMenuViewer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVWCharacterMenuViewer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_AVWCharacterMenuViewer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVWCharacterMenuViewer()
	{
		if (!Z_Registration_Info_UClass_AVWCharacterMenuViewer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVWCharacterMenuViewer.OuterSingleton, Z_Construct_UClass_AVWCharacterMenuViewer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVWCharacterMenuViewer.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<AVWCharacterMenuViewer>()
	{
		return AVWCharacterMenuViewer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVWCharacterMenuViewer);
	AVWCharacterMenuViewer::~AVWCharacterMenuViewer() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVWCharacterMenuViewer, AVWCharacterMenuViewer::StaticClass, TEXT("AVWCharacterMenuViewer"), &Z_Registration_Info_UClass_AVWCharacterMenuViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVWCharacterMenuViewer), 2580732303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_2075428272(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
