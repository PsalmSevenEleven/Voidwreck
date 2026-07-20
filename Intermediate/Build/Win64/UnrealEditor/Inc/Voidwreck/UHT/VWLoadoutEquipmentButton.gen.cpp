// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/Loadout/VWLoadoutEquipmentButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWLoadoutEquipmentButton() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutEquipmentButton();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWLoadoutWidget_NoRegister();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EEquipmentSlot();
// End Cross Module References
	DEFINE_FUNCTION(UVWLoadoutEquipmentButton::execSendLoadoutWidgetToEquipmentMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendLoadoutWidgetToEquipmentMenu();
		P_NATIVE_END;
	}
	void UVWLoadoutEquipmentButton::StaticRegisterNativesUVWLoadoutEquipmentButton()
	{
		UClass* Class = UVWLoadoutEquipmentButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendLoadoutWidgetToEquipmentMenu", &UVWLoadoutEquipmentButton::execSendLoadoutWidgetToEquipmentMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutEquipmentButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWLoadoutEquipmentButton, nullptr, "SendLoadoutWidgetToEquipmentMenu", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWLoadoutEquipmentButton);
	UClass* Z_Construct_UClass_UVWLoadoutEquipmentButton_NoRegister()
	{
		return UVWLoadoutEquipmentButton::StaticClass();
	}
	struct Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EquipmentSlot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EquipmentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadoutWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadoutWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWLoadoutEquipmentButton_SendLoadoutWidgetToEquipmentMenu, "SendLoadoutWidgetToEquipmentMenu" }, // 1684132586
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Loadout/VWLoadoutEquipmentButton.h" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutEquipmentButton.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot_MetaData[] = {
		{ "Category", "VWLoadoutEquipmentButton" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutEquipmentButton.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot = { "EquipmentSlot", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutEquipmentButton, EquipmentSlot), Z_Construct_UEnum_Voidwreck_EEquipmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot_MetaData), Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot_MetaData) }; // 2384897542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_LoadoutWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutEquipmentButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_LoadoutWidget = { "LoadoutWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutEquipmentButton, LoadoutWidget), Z_Construct_UClass_UVWLoadoutWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_LoadoutWidget_MetaData), Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_LoadoutWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "VWLoadoutEquipmentButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutEquipmentButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutEquipmentButton, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_Button_MetaData), Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_Button_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_TextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWLoadoutEquipmentButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWLoadoutEquipmentButton, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_TextBlock_MetaData), Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_TextBlock_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_EquipmentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_LoadoutWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::NewProp_TextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWLoadoutEquipmentButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::ClassParams = {
		&UVWLoadoutEquipmentButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWLoadoutEquipmentButton()
	{
		if (!Z_Registration_Info_UClass_UVWLoadoutEquipmentButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWLoadoutEquipmentButton.OuterSingleton, Z_Construct_UClass_UVWLoadoutEquipmentButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWLoadoutEquipmentButton.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWLoadoutEquipmentButton>()
	{
		return UVWLoadoutEquipmentButton::StaticClass();
	}
	UVWLoadoutEquipmentButton::UVWLoadoutEquipmentButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWLoadoutEquipmentButton);
	UVWLoadoutEquipmentButton::~UVWLoadoutEquipmentButton() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutEquipmentButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutEquipmentButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWLoadoutEquipmentButton, UVWLoadoutEquipmentButton::StaticClass, TEXT("UVWLoadoutEquipmentButton"), &Z_Registration_Info_UClass_UVWLoadoutEquipmentButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWLoadoutEquipmentButton), 49967225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutEquipmentButton_h_2459610554(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutEquipmentButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWLoadoutEquipmentButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
