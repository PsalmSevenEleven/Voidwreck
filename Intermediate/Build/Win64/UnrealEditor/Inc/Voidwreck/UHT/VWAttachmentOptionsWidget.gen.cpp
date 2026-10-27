// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWAttachmentOptionsWidget.h"
#include "Voidwreck/Private/Player/Equipment/VWEquipmentAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWAttachmentOptionsWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UComboBoxKey_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentOptionsWidget();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentOptionsWidget_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EAttachmentOptionType();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentCustomizationOption();
// End Cross Module References
	DEFINE_FUNCTION(UVWAttachmentOptionsWidget::execVectorValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VectorValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWAttachmentOptionsWidget::execScalarValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScalarValueChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWAttachmentOptionsWidget::execSetup)
	{
		P_GET_STRUCT_REF(FAttachmentCustomizationOption,Z_Param_Out_InOption);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_SavedValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param_Out_InOption,Z_Param_Out_SavedValues);
		P_NATIVE_END;
	}
	void UVWAttachmentOptionsWidget::StaticRegisterNativesUVWAttachmentOptionsWidget()
	{
		UClass* Class = UVWAttachmentOptionsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScalarValueChanged", &UVWAttachmentOptionsWidget::execScalarValueChanged },
			{ "Setup", &UVWAttachmentOptionsWidget::execSetup },
			{ "VectorValueChanged", &UVWAttachmentOptionsWidget::execVectorValueChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics
	{
		struct VWAttachmentOptionsWidget_eventScalarValueChanged_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWAttachmentOptionsWidget_eventScalarValueChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWAttachmentOptionsWidget, nullptr, "ScalarValueChanged", nullptr, nullptr, Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::VWAttachmentOptionsWidget_eventScalarValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::VWAttachmentOptionsWidget_eventScalarValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics
	{
		struct VWAttachmentOptionsWidget_eventSetup_Parms
		{
			FAttachmentCustomizationOption InOption;
			TArray<uint8> SavedValues;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOption;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::NewProp_InOption = { "InOption", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWAttachmentOptionsWidget_eventSetup_Parms, InOption), Z_Construct_UScriptStruct_FAttachmentCustomizationOption, METADATA_PARAMS(0, nullptr) }; // 2129584959
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::NewProp_SavedValues_Inner = { "SavedValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::NewProp_SavedValues = { "SavedValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWAttachmentOptionsWidget_eventSetup_Parms, SavedValues), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::NewProp_InOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::NewProp_SavedValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::NewProp_SavedValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWAttachmentOptionsWidget, nullptr, "Setup", nullptr, nullptr, Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::VWAttachmentOptionsWidget_eventSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::VWAttachmentOptionsWidget_eventSetup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics
	{
		struct VWAttachmentOptionsWidget_eventVectorValueChanged_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWAttachmentOptionsWidget_eventVectorValueChanged_Parms, Value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWAttachmentOptionsWidget, nullptr, "VectorValueChanged", nullptr, nullptr, Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::VWAttachmentOptionsWidget_eventVectorValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::VWAttachmentOptionsWidget_eventVectorValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWAttachmentOptionsWidget);
	UClass* Z_Construct_UClass_UVWAttachmentOptionsWidget_NoRegister()
	{
		return UVWAttachmentOptionsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OptionStartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScalarValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_YValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ZValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWAttachmentOptionsWidget_ScalarValueChanged, "ScalarValueChanged" }, // 2663670422
		{ &Z_Construct_UFunction_UVWAttachmentOptionsWidget_Setup, "Setup" }, // 1450433159
		{ &Z_Construct_UFunction_UVWAttachmentOptionsWidget_VectorValueChanged, "VectorValueChanged" }, // 2571114205
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Loadout/VWAttachmentOptionsWidget.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "VWAttachmentOptionsWidget" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, Type), Z_Construct_UEnum_Voidwreck_EAttachmentOptionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_Type_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_Type_MetaData) }; // 3267708936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_EquipmentMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_EquipmentMenu = { "EquipmentMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, EquipmentMenu), Z_Construct_UClass_UVWEquipmentMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_EquipmentMenu_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_EquipmentMenu_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_OptionStartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_OptionStartIndex = { "OptionStartIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, OptionStartIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_OptionStartIndex_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_OptionStartIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ScalarValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ScalarValue = { "ScalarValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, ScalarValue), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ScalarValue_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ScalarValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_XValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_XValue = { "XValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, XValue), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_XValue_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_XValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_YValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_YValue = { "YValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, YValue), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_YValue_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_YValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ZValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ZValue = { "ZValue", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, ZValue), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ZValue_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ZValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_AssetList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentOptionsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentOptionsWidget, AssetList), Z_Construct_UClass_UComboBoxKey_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_AssetList_MetaData), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_AssetList_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_EquipmentMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_OptionStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ScalarValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_XValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_YValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_ZValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::NewProp_AssetList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWAttachmentOptionsWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::ClassParams = {
		&UVWAttachmentOptionsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWAttachmentOptionsWidget()
	{
		if (!Z_Registration_Info_UClass_UVWAttachmentOptionsWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWAttachmentOptionsWidget.OuterSingleton, Z_Construct_UClass_UVWAttachmentOptionsWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWAttachmentOptionsWidget.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWAttachmentOptionsWidget>()
	{
		return UVWAttachmentOptionsWidget::StaticClass();
	}
	UVWAttachmentOptionsWidget::UVWAttachmentOptionsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWAttachmentOptionsWidget);
	UVWAttachmentOptionsWidget::~UVWAttachmentOptionsWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentOptionsWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentOptionsWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWAttachmentOptionsWidget, UVWAttachmentOptionsWidget::StaticClass, TEXT("UVWAttachmentOptionsWidget"), &Z_Registration_Info_UClass_UVWAttachmentOptionsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWAttachmentOptionsWidget), 1147779363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentOptionsWidget_h_2408078289(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentOptionsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentOptionsWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
