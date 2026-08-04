// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWEquipmentMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWEquipmentMenu() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentStoreButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipment_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget();
// End Cross Module References
	DEFINE_FUNCTION(UVWEquipmentMenu::execAttachmentStoreLoadedCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachmentStoreLoadedCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execOpenAttachmentStore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AttachmentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAttachmentStore(Z_Param_AttachmentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execSetupAttachmentButtons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAttachmentButtons();
		P_NATIVE_END;
	}
	void UVWEquipmentMenu::StaticRegisterNativesUVWEquipmentMenu()
	{
		UClass* Class = UVWEquipmentMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachmentStoreLoadedCallback", &UVWEquipmentMenu::execAttachmentStoreLoadedCallback },
			{ "OpenAttachmentStore", &UVWEquipmentMenu::execOpenAttachmentStore },
			{ "SetupAttachmentButtons", &UVWEquipmentMenu::execSetupAttachmentButtons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "AttachmentStoreLoadedCallback", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics
	{
		struct VWEquipmentMenu_eventOpenAttachmentStore_Parms
		{
			int32 AttachmentIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::NewProp_AttachmentIndex = { "AttachmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventOpenAttachmentStore_Parms, AttachmentIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::NewProp_AttachmentIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "OpenAttachmentStore", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::VWEquipmentMenu_eventOpenAttachmentStore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::VWEquipmentMenu_eventOpenAttachmentStore_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "SetupAttachmentButtons", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWEquipmentMenu);
	UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister()
	{
		return UVWEquipmentMenu::StaticClass();
	}
	struct Z_Construct_UClass_UVWEquipmentMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenuViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenuViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEquipment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentStoreScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentStoreScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentStoreButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentStoreButtonClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWEquipmentMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVWUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWEquipmentMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback, "AttachmentStoreLoadedCallback" }, // 3301367847
		{ &Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore, "OpenAttachmentStore" }, // 2151882341
		{ &Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons, "SetupAttachmentButtons" }, // 1740667114
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Loadout/VWEquipmentMenu.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer = { "EquipmentMenuViewer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, EquipmentMenuViewer), Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment = { "CurrentEquipment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, CurrentEquipment), Z_Construct_UClass_UVWEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentScrollBox = { "AttachmentScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentScrollBox_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentScrollBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreScrollBox = { "AttachmentStoreScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentStoreScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreScrollBox_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreScrollBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass_MetaData[] = {
		{ "Category", "VWEquipmentMenu" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass = { "AttachmentButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVWAttachmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass_MetaData[] = {
		{ "Category", "VWEquipmentMenu" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass = { "AttachmentStoreButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentStoreButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVWAttachmentStoreButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEquipmentMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEquipmentMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEquipmentMenu_Statics::ClassParams = {
		&UVWEquipmentMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWEquipmentMenu_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWEquipmentMenu()
	{
		if (!Z_Registration_Info_UClass_UVWEquipmentMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWEquipmentMenu.OuterSingleton, Z_Construct_UClass_UVWEquipmentMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWEquipmentMenu.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWEquipmentMenu>()
	{
		return UVWEquipmentMenu::StaticClass();
	}
	UVWEquipmentMenu::UVWEquipmentMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWEquipmentMenu);
	UVWEquipmentMenu::~UVWEquipmentMenu() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWEquipmentMenu, UVWEquipmentMenu::StaticClass, TEXT("UVWEquipmentMenu"), &Z_Registration_Info_UClass_UVWEquipmentMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEquipmentMenu), 2541563573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_2180009598(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
