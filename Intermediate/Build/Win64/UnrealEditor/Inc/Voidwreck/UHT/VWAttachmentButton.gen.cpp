// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWAttachmentButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWAttachmentButton() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentButton();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAttachmentButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVWAttachmentButton::execOpenAttachmentStore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAttachmentStore();
		P_NATIVE_END;
	}
	void UVWAttachmentButton::StaticRegisterNativesUVWAttachmentButton()
	{
		UClass* Class = UVWAttachmentButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenAttachmentStore", &UVWAttachmentButton::execOpenAttachmentStore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWAttachmentButton, nullptr, "OpenAttachmentStore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWAttachmentButton);
	UClass* Z_Construct_UClass_UVWAttachmentButton_NoRegister()
	{
		return UVWAttachmentButton::StaticClass();
	}
	struct Z_Construct_UClass_UVWAttachmentButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttachmentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWAttachmentButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWAttachmentButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWAttachmentButton_OpenAttachmentStore, "OpenAttachmentStore" }, // 4032369162
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentButton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Loadout/VWAttachmentButton.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_EquipmentMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_EquipmentMenu = { "EquipmentMenu", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentButton, EquipmentMenu), Z_Construct_UClass_UVWEquipmentMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_EquipmentMenu_MetaData), Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_EquipmentMenu_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentButton, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_Button_MetaData), Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_Button_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_TextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentButton, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_TextBlock_MetaData), Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_TextBlock_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_AttachmentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWAttachmentButton.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_AttachmentIndex = { "AttachmentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWAttachmentButton, AttachmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_AttachmentIndex_MetaData), Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_AttachmentIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWAttachmentButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_EquipmentMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_TextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWAttachmentButton_Statics::NewProp_AttachmentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWAttachmentButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWAttachmentButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWAttachmentButton_Statics::ClassParams = {
		&UVWAttachmentButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWAttachmentButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWAttachmentButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWAttachmentButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWAttachmentButton()
	{
		if (!Z_Registration_Info_UClass_UVWAttachmentButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWAttachmentButton.OuterSingleton, Z_Construct_UClass_UVWAttachmentButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWAttachmentButton.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWAttachmentButton>()
	{
		return UVWAttachmentButton::StaticClass();
	}
	UVWAttachmentButton::UVWAttachmentButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWAttachmentButton);
	UVWAttachmentButton::~UVWAttachmentButton() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWAttachmentButton, UVWAttachmentButton::StaticClass, TEXT("UVWAttachmentButton"), &Z_Registration_Info_UClass_UVWAttachmentButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWAttachmentButton), 935521072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentButton_h_3783874758(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWAttachmentButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
