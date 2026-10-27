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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentOptionsWidget_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentStoreButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipment_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentAttachment_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutWidget_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget();
// End Cross Module References
	DEFINE_FUNCTION(UVWEquipmentMenu::execAssetListSelectonChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Selection);
		P_GET_PROPERTY(FByteProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetListSelectonChanged(Z_Param_Selection,Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execVector3ValueChanged)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Vector3ValueChanged(Z_Param_Value,Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execVector2ValueChanged)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Vector2ValueChanged(Z_Param_Value,Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execScalarValueChanged)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_StartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScalarValueChanged(Z_Param_Value,Z_Param_StartIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execSelectAttachment)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AttachmentSlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttachmentIndex);
		P_GET_OBJECT(UVWEquipmentAttachment,Z_Param_Attachment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAttachment(Z_Param_AttachmentSlot,Z_Param_AttachmentIndex,Z_Param_Attachment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execAttachmentStoreLoadedCallback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachmentStoreLoadedCallback(Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVWEquipmentMenu::execOpenAttachmentStore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AttachmentSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAttachmentStore(Z_Param_AttachmentSlotIndex);
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
			{ "AssetListSelectonChanged", &UVWEquipmentMenu::execAssetListSelectonChanged },
			{ "AttachmentStoreLoadedCallback", &UVWEquipmentMenu::execAttachmentStoreLoadedCallback },
			{ "OpenAttachmentStore", &UVWEquipmentMenu::execOpenAttachmentStore },
			{ "ScalarValueChanged", &UVWEquipmentMenu::execScalarValueChanged },
			{ "SelectAttachment", &UVWEquipmentMenu::execSelectAttachment },
			{ "SetupAttachmentButtons", &UVWEquipmentMenu::execSetupAttachmentButtons },
			{ "Vector2ValueChanged", &UVWEquipmentMenu::execVector2ValueChanged },
			{ "Vector3ValueChanged", &UVWEquipmentMenu::execVector3ValueChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics
	{
		struct VWEquipmentMenu_eventAssetListSelectonChanged_Parms
		{
			uint8 Selection;
			uint8 StartIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Selection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventAssetListSelectonChanged_Parms, Selection), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventAssetListSelectonChanged_Parms, StartIndex), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::NewProp_StartIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "AssetListSelectonChanged", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::VWEquipmentMenu_eventAssetListSelectonChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::VWEquipmentMenu_eventAssetListSelectonChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics
	{
		struct VWEquipmentMenu_eventAttachmentStoreLoadedCallback_Parms
		{
			int32 SlotIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventAttachmentStoreLoadedCallback_Parms, SlotIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::NewProp_SlotIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "AttachmentStoreLoadedCallback", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::VWEquipmentMenu_eventAttachmentStoreLoadedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback_Statics::VWEquipmentMenu_eventAttachmentStoreLoadedCallback_Parms) < MAX_uint16);
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
			int32 AttachmentSlotIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentSlotIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::NewProp_AttachmentSlotIndex = { "AttachmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventOpenAttachmentStore_Parms, AttachmentSlotIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore_Statics::NewProp_AttachmentSlotIndex,
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
	struct Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics
	{
		struct VWEquipmentMenu_eventScalarValueChanged_Parms
		{
			uint8 Value;
			uint8 StartIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventScalarValueChanged_Parms, Value), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventScalarValueChanged_Parms, StartIndex), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::NewProp_StartIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "ScalarValueChanged", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::VWEquipmentMenu_eventScalarValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::VWEquipmentMenu_eventScalarValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics
	{
		struct VWEquipmentMenu_eventSelectAttachment_Parms
		{
			int32 AttachmentSlot;
			int32 AttachmentIndex;
			UVWEquipmentAttachment* Attachment;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentSlot;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::NewProp_AttachmentSlot = { "AttachmentSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventSelectAttachment_Parms, AttachmentSlot), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::NewProp_AttachmentIndex = { "AttachmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventSelectAttachment_Parms, AttachmentIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventSelectAttachment_Parms, Attachment), Z_Construct_UClass_UVWEquipmentAttachment_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::NewProp_AttachmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::NewProp_AttachmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::NewProp_Attachment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "SelectAttachment", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::VWEquipmentMenu_eventSelectAttachment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::VWEquipmentMenu_eventSelectAttachment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics
	{
		struct VWEquipmentMenu_eventVector2ValueChanged_Parms
		{
			FVector2D Value;
			uint8 StartIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventVector2ValueChanged_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventVector2ValueChanged_Parms, StartIndex), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::NewProp_StartIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "Vector2ValueChanged", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::VWEquipmentMenu_eventVector2ValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::VWEquipmentMenu_eventVector2ValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics
	{
		struct VWEquipmentMenu_eventVector3ValueChanged_Parms
		{
			FVector Value;
			uint8 StartIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventVector3ValueChanged_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentMenu_eventVector3ValueChanged_Parms, StartIndex), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::NewProp_StartIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentMenu, nullptr, "Vector3ValueChanged", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::VWEquipmentMenu_eventVector3ValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::VWEquipmentMenu_eventVector3ValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadoutWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadoutWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLoadoutIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLoadoutIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquipment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEquipment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenuViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenuViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentStoreScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentStoreScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentOptionsScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachmentOptionsScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAttachmentSlotIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAttachmentSlotIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentStoreButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentStoreButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentOptionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttachmentOptionWidgetClass;
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
		{ &Z_Construct_UFunction_UVWEquipmentMenu_AssetListSelectonChanged, "AssetListSelectonChanged" }, // 3953762492
		{ &Z_Construct_UFunction_UVWEquipmentMenu_AttachmentStoreLoadedCallback, "AttachmentStoreLoadedCallback" }, // 3327344195
		{ &Z_Construct_UFunction_UVWEquipmentMenu_OpenAttachmentStore, "OpenAttachmentStore" }, // 1298323598
		{ &Z_Construct_UFunction_UVWEquipmentMenu_ScalarValueChanged, "ScalarValueChanged" }, // 653328272
		{ &Z_Construct_UFunction_UVWEquipmentMenu_SelectAttachment, "SelectAttachment" }, // 723858282
		{ &Z_Construct_UFunction_UVWEquipmentMenu_SetupAttachmentButtons, "SetupAttachmentButtons" }, // 1740667114
		{ &Z_Construct_UFunction_UVWEquipmentMenu_Vector2ValueChanged, "Vector2ValueChanged" }, // 1246625565
		{ &Z_Construct_UFunction_UVWEquipmentMenu_Vector3ValueChanged, "Vector3ValueChanged" }, // 2451190918
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_LoadoutWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_LoadoutWidget = { "LoadoutWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, LoadoutWidget), Z_Construct_UClass_UVWLoadoutWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_LoadoutWidget_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_LoadoutWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentLoadoutIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentLoadoutIndex = { "CurrentLoadoutIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, CurrentLoadoutIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentLoadoutIndex_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentLoadoutIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment = { "CurrentEquipment", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, CurrentEquipment), Z_Construct_UClass_UVWEquipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer = { "EquipmentMenuViewer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, EquipmentMenuViewer), Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionsScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionsScrollBox = { "AttachmentOptionsScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentOptionsScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionsScrollBox_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionsScrollBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass_MetaData[] = {
		{ "Category", "VWEquipmentMenu" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass = { "AttachmentButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVWAttachmentButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentAttachmentSlotIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentAttachmentSlotIndex = { "CurrentAttachmentSlotIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, CurrentAttachmentSlotIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentAttachmentSlotIndex_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentAttachmentSlotIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass_MetaData[] = {
		{ "Category", "VWEquipmentMenu" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass = { "AttachmentStoreButtonClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentStoreButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVWAttachmentStoreButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionWidgetClass_MetaData[] = {
		{ "Category", "VWEquipmentMenu" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionWidgetClass = { "AttachmentOptionWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, AttachmentOptionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UVWAttachmentOptionsWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionWidgetClass_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_LoadoutWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentLoadoutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentEquipment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionsScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_CurrentAttachmentSlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentStoreButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_AttachmentOptionWidgetClass,
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
		{ Z_Construct_UClass_UVWEquipmentMenu, UVWEquipmentMenu::StaticClass, TEXT("UVWEquipmentMenu"), &Z_Registration_Info_UClass_UVWEquipmentMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEquipmentMenu), 3067210185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_617829174(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
