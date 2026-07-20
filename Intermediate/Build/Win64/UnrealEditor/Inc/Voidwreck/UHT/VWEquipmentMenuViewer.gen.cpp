// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWEquipmentMenuViewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWEquipmentMenuViewer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWEquipmentMenuViewer();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipment_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVWEquipmentMenuViewer::execSetupMeshes)
	{
		P_GET_OBJECT(UVWEquipment,Z_Param_Equipment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMeshes(Z_Param_Equipment);
		P_NATIVE_END;
	}
	void AVWEquipmentMenuViewer::StaticRegisterNativesAVWEquipmentMenuViewer()
	{
		UClass* Class = AVWEquipmentMenuViewer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupMeshes", &AVWEquipmentMenuViewer::execSetupMeshes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics
	{
		struct VWEquipmentMenuViewer_eventSetupMeshes_Parms
		{
			UVWEquipment* Equipment;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenuViewer_eventSetupMeshes_Parms, Equipment), Z_Construct_UClass_UVWEquipment_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::NewProp_Equipment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//WARNING - make sure that this is only called after the equip mesh is already set correctly.\n//Failing to do this will result in socket problems\n" },
#endif
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenuViewer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WARNING - make sure that this is only called after the equip mesh is already set correctly.\nFailing to do this will result in socket problems" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVWEquipmentMenuViewer, nullptr, "SetupMeshes", nullptr, nullptr, Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::VWEquipmentMenuViewer_eventSetupMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::VWEquipmentMenuViewer_eventSetupMeshes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVWEquipmentMenuViewer);
	UClass* Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister()
	{
		return AVWEquipmentMenuViewer::StaticClass();
	}
	struct Z_Construct_UClass_AVWEquipmentMenuViewer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVWEquipmentMenuViewer_SetupMeshes, "SetupMeshes" }, // 308175222
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Loadout/VWEquipmentMenuViewer.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenuViewer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "VWEquipmentMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWEquipmentMenuViewer, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Root_MetaData), Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Root_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VWEquipmentMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWEquipmentMenuViewer, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_EquipmentMesh_MetaData[] = {
		{ "Category", "VWEquipmentMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_EquipmentMesh = { "EquipmentMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWEquipmentMenuViewer, EquipmentMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_EquipmentMesh_MetaData), Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_EquipmentMesh_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes_Inner = { "AttachmentMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes_MetaData[] = {
		{ "Category", "VWEquipmentMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes = { "AttachmentMeshes", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWEquipmentMenuViewer, AttachmentMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes_MetaData), Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_EquipmentMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::NewProp_AttachmentMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVWEquipmentMenuViewer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::ClassParams = {
		&AVWEquipmentMenuViewer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::Class_MetaDataParams), Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVWEquipmentMenuViewer()
	{
		if (!Z_Registration_Info_UClass_AVWEquipmentMenuViewer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVWEquipmentMenuViewer.OuterSingleton, Z_Construct_UClass_AVWEquipmentMenuViewer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVWEquipmentMenuViewer.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<AVWEquipmentMenuViewer>()
	{
		return AVWEquipmentMenuViewer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVWEquipmentMenuViewer);
	AVWEquipmentMenuViewer::~AVWEquipmentMenuViewer() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenuViewer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenuViewer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVWEquipmentMenuViewer, AVWEquipmentMenuViewer::StaticClass, TEXT("AVWEquipmentMenuViewer"), &Z_Registration_Info_UClass_AVWEquipmentMenuViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVWEquipmentMenuViewer), 3560262710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenuViewer_h_885111310(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenuViewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenuViewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
