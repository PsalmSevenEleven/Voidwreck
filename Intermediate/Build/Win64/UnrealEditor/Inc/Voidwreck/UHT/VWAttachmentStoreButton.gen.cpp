// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWAttachmentStoreButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWAttachmentStoreButton() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentStoreButton();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentStoreButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVWAttachmentStoreButton::execSelectAttachment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAttachment();
		P_NATIVE_END;
	}
	void UVWAttachmentStoreButton::StaticRegisterNativesUVWAttachmentStoreButton()
	{
		UClass* Class = UVWAttachmentStoreButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectAttachment", &UVWAttachmentStoreButton::execSelectAttachment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWAttachmentStoreButton, nullptr, "SelectAttachment", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWAttachmentStoreButton);
	UClass* Z_Construct_UClass_UVWAttachmentStoreButton_NoRegister()
	{
		return UVWAttachmentStoreButton::StaticClass();
	}
	struct Z_Construct_UClass_UVWAttachmentStoreButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWAttachmentStoreButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWAttachmentStoreButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWAttachmentStoreButton_SelectAttachment, "SelectAttachment" }, // 1761183206
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentStoreButton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Loadout/VWAttachmentStoreButton.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentStoreButton, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_Button_MetaData), Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_Button_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_TextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentStoreButton, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_TextBlock_MetaData), Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_TextBlock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_EquipmentMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_EquipmentMenu = { "EquipmentMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentStoreButton, EquipmentMenu), Z_Construct_UClass_UVWEquipmentMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_EquipmentMenu_MetaData), Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_EquipmentMenu_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentIndex = { "AttachmentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentStoreButton, AttachmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentIndex_MetaData), Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentSlot_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentStoreButton.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentSlot = { "AttachmentSlot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentStoreButton, AttachmentSlot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentSlot_MetaData), Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentSlot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWAttachmentStoreButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_TextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_EquipmentMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentStoreButton_Statics::NewProp_AttachmentSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWAttachmentStoreButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWAttachmentStoreButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWAttachmentStoreButton_Statics::ClassParams = {
		&UVWAttachmentStoreButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWAttachmentStoreButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWAttachmentStoreButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentStoreButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWAttachmentStoreButton()
	{
		if (!Z_Registration_Info_UClass_UVWAttachmentStoreButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWAttachmentStoreButton.OuterSingleton, Z_Construct_UClass_UVWAttachmentStoreButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWAttachmentStoreButton.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWAttachmentStoreButton>()
	{
		return UVWAttachmentStoreButton::StaticClass();
	}
	UVWAttachmentStoreButton::UVWAttachmentStoreButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWAttachmentStoreButton);
	UVWAttachmentStoreButton::~UVWAttachmentStoreButton() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentStoreButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentStoreButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWAttachmentStoreButton, UVWAttachmentStoreButton::StaticClass, TEXT("UVWAttachmentStoreButton"), &Z_Registration_Info_UClass_UVWAttachmentStoreButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWAttachmentStoreButton), 854554093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentStoreButton_h_1649276335(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentStoreButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentStoreButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
