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
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWEquipmentMenuViewer_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget();
// End Cross Module References
	void UVWEquipmentMenu::StaticRegisterNativesUVWEquipmentMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWEquipmentMenu);
	UClass* Z_Construct_UClass_UVWEquipmentMenu_NoRegister()
	{
		return UVWEquipmentMenu::StaticClass();
	}
	struct Z_Construct_UClass_UVWEquipmentMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentMenuViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipmentMenuViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWEquipmentMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVWUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/UI/Loadout/VWEquipmentMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentMenu, ScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_ScrollBox_MetaData), Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_ScrollBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_EquipmentMenuViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentMenu_Statics::NewProp_ScrollBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEquipmentMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEquipmentMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEquipmentMenu_Statics::ClassParams = {
		&UVWEquipmentMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWEquipmentMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UVWEquipmentMenu, UVWEquipmentMenu::StaticClass, TEXT("UVWEquipmentMenu"), &Z_Registration_Info_UClass_UVWEquipmentMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEquipmentMenu), 2669539443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_4194056429(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_Loadout_VWEquipmentMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
