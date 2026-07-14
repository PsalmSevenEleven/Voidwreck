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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWCharacterMenuViewer();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWCharacterMenuViewer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVWCharacterMenuViewer::execSetupAttachmentMeshesForSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EquipmentMeshIndex);
		P_GET_TARRAY_REF(FName,Z_Param_Out_SocketNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAttachmentMeshesForSlot(Z_Param_EquipmentMeshIndex,Z_Param_Out_SocketNames);
		P_NATIVE_END;
	}
	void AVWCharacterMenuViewer::StaticRegisterNativesAVWCharacterMenuViewer()
	{
		UClass* Class = AVWCharacterMenuViewer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupAttachmentMeshesForSlot", &AVWCharacterMenuViewer::execSetupAttachmentMeshesForSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics
	{
		struct VWCharacterMenuViewer_eventSetupAttachmentMeshesForSlot_Parms
		{
			int32 EquipmentMeshIndex;
			TArray<FName> SocketNames;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentMeshIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_EquipmentMeshIndex = { "EquipmentMeshIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWCharacterMenuViewer_eventSetupAttachmentMeshesForSlot_Parms, EquipmentMeshIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames_Inner = { "SocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames = { "SocketNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWCharacterMenuViewer_eventSetupAttachmentMeshesForSlot_Parms, SocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames_MetaData), Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_EquipmentMeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::NewProp_SocketNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVWCharacterMenuViewer, nullptr, "SetupAttachmentMeshesForSlot", nullptr, nullptr, Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::VWCharacterMenuViewer_eventSetupAttachmentMeshesForSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::VWCharacterMenuViewer_eventSetupAttachmentMeshesForSlot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVWCharacterMenuViewer);
	UClass* Z_Construct_UClass_AVWCharacterMenuViewer_NoRegister()
	{
		return AVWCharacterMenuViewer::StaticClass();
	}
	struct Z_Construct_UClass_AVWCharacterMenuViewer_Statics
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AVWCharacterMenuViewer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVWCharacterMenuViewer_SetupAttachmentMeshesForSlot, "SetupAttachmentMeshesForSlot" }, // 469827026
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWCharacterMenuViewer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/Loadout/VWCharacterMenuViewer.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "VWCharacterMenuViewer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWCharacterMenuViewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWCharacterMenuViewer, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Root_MetaData), Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Root_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWCharacterMenuViewer_Statics::NewProp_Root,
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
		FuncInfo,
		Z_Construct_UClass_AVWCharacterMenuViewer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AVWCharacterMenuViewer, AVWCharacterMenuViewer::StaticClass, TEXT("AVWCharacterMenuViewer"), &Z_Registration_Info_UClass_AVWCharacterMenuViewer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVWCharacterMenuViewer), 209687773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_3834263027(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWCharacterMenuViewer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
