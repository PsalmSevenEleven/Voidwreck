// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWLoadoutWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWLoadoutWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UThrobber_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWCharacterMenuViewer_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutEquipmentList_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutWidget();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutWidget_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWSaveGame_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget();
// End Cross Module References
	DEFINE_FUNCTION(UVWLoadoutWidget::execSetupEquipmentMenuViewer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InEquipmentSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupEquipmentMenuViewer(Z_Param_InEquipmentSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWLoadoutWidget::execInitMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWLoadoutWidget::execLoadLoadout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLoadout();
		P_NATIVE_END;
	}
	void UVWLoadoutWidget::StaticRegisterNativesUVWLoadoutWidget()
	{
		UClass* Class = UVWLoadoutWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitMenu", &UVWLoadoutWidget::execInitMenu },
			{ "LoadLoadout", &UVWLoadoutWidget::execLoadLoadout },
			{ "SetupEquipmentMenuViewer", &UVWLoadoutWidget::execSetupEquipmentMenuViewer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWLoadoutWidget_InitMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWLoadoutWidget_InitMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWLoadoutWidget_InitMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWLoadoutWidget, nullptr, "InitMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWLoadoutWidget_InitMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWLoadoutWidget_InitMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWLoadoutWidget_InitMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWLoadoutWidget_InitMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWLoadoutWidget, nullptr, "LoadLoadout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics
	{
		struct VWLoadoutWidget_eventSetupEquipmentMenuViewer_Parms
		{
			int32 InEquipmentSlot;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InEquipmentSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::NewProp_InEquipmentSlot = { "InEquipmentSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWLoadoutWidget_eventSetupEquipmentMenuViewer_Parms, InEquipmentSlot), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::NewProp_InEquipmentSlot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWLoadoutWidget, nullptr, "SetupEquipmentMenuViewer", nullptr, nullptr, Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::VWLoadoutWidget_eventSetupEquipmentMenuViewer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::VWLoadoutWidget_eventSetupEquipmentMenuViewer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWLoadoutWidget);
	UClass* Z_Construct_UClass_UVWLoadoutWidget_NoRegister()
	{
		return UVWLoadoutWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVWLoadoutWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyesSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EyesSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TorsoSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TorsoSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmsSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArmsSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegsSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LegsSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FeetSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackSlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimarySlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimarySlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlotButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondarySlotButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingThrobber_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingThrobber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentDA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentDA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMenuViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMenuViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenuViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenuViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentEquipmentSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWLoadoutWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVWUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWLoadoutWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWLoadoutWidget_InitMenu, "InitMenu" }, // 825784675
		{ &Z_Construct_UFunction_UVWLoadoutWidget_LoadLoadout, "LoadLoadout" }, // 1765459741
		{ &Z_Construct_UFunction_UVWLoadoutWidget_SetupEquipmentMenuViewer, "SetupEquipmentMenuViewer" }, // 2019755859
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Loadout/VWLoadoutWidget.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_HeadSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_HeadSlotButton = { "HeadSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, HeadSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_HeadSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_HeadSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EyesSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EyesSlotButton = { "EyesSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, EyesSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EyesSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EyesSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FaceSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FaceSlotButton = { "FaceSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, FaceSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FaceSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FaceSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_TorsoSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_TorsoSlotButton = { "TorsoSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, TorsoSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_TorsoSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_TorsoSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_ArmsSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_ArmsSlotButton = { "ArmsSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, ArmsSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_ArmsSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_ArmsSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LegsSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LegsSlotButton = { "LegsSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, LegsSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LegsSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LegsSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FeetSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FeetSlotButton = { "FeetSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, FeetSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FeetSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FeetSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_BackSlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_BackSlotButton = { "BackSlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, BackSlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_BackSlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_BackSlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_PrimarySlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_PrimarySlotButton = { "PrimarySlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, PrimarySlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_PrimarySlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_PrimarySlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SecondarySlotButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SecondarySlotButton = { "SecondarySlotButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, SecondarySlotButton), Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SecondarySlotButton_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SecondarySlotButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LoadingThrobber_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LoadingThrobber = { "LoadingThrobber", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, LoadingThrobber), Z_Construct_UClass_UThrobber_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LoadingThrobber_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LoadingThrobber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentDA_MetaData[] = {
		{ "Category", "VWLoadoutWidget" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentDA = { "EquipmentDA", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, EquipmentDA), Z_Construct_UClass_UVWLoadoutEquipmentList_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentDA_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentDA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CharacterMenuViewer_MetaData[] = {
		{ "Category", "VWLoadoutWidget" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CharacterMenuViewer = { "CharacterMenuViewer", nullptr, (EPropertyFlags)0x0021080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, CharacterMenuViewer), Z_Construct_UClass_AVWCharacterMenuViewer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CharacterMenuViewer_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CharacterMenuViewer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuViewer_MetaData[] = {
		{ "Category", "VWLoadoutWidget" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuViewer = { "EquipmentMenuViewer", nullptr, (EPropertyFlags)0x0021080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, EquipmentMenuViewer), Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuViewer_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuViewer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuClass_MetaData[] = {
		{ "Category", "VWLoadoutWidget" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuClass = { "EquipmentMenuClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, EquipmentMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVWEquipmentMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuClass_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SaveGame_MetaData[] = {
		{ "Category", "VWLoadoutWidget" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, SaveGame), Z_Construct_UClass_UVWSaveGame_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SaveGame_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SaveGame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CurrentEquipmentSlot_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CurrentEquipmentSlot = { "CurrentEquipmentSlot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutWidget, CurrentEquipmentSlot), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CurrentEquipmentSlot_MetaData), Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CurrentEquipmentSlot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWLoadoutWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_HeadSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EyesSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FaceSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_TorsoSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_ArmsSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LegsSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_FeetSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_BackSlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_PrimarySlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SecondarySlotButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_LoadingThrobber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentDA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CharacterMenuViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_EquipmentMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutWidget_Statics::NewProp_CurrentEquipmentSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWLoadoutWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWLoadoutWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWLoadoutWidget_Statics::ClassParams = {
		&UVWLoadoutWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWLoadoutWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWLoadoutWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWLoadoutWidget()
	{
		if (!Z_Registration_Info_UClass_UVWLoadoutWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWLoadoutWidget.OuterSingleton, Z_Construct_UClass_UVWLoadoutWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWLoadoutWidget.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWLoadoutWidget>()
	{
		return UVWLoadoutWidget::StaticClass();
	}
	UVWLoadoutWidget::UVWLoadoutWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWLoadoutWidget);
	UVWLoadoutWidget::~UVWLoadoutWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWLoadoutWidget, UVWLoadoutWidget::StaticClass, TEXT("UVWLoadoutWidget"), &Z_Registration_Info_UClass_UVWLoadoutWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWLoadoutWidget), 1720235839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutWidget_h_1945229548(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
