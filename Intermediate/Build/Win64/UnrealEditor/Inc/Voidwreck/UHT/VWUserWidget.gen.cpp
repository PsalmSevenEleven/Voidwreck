// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/UI/VWUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWUserWidget() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVWUserWidget::execBackOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackOut();
		P_NATIVE_END;
	}
	void UVWUserWidget::StaticRegisterNativesUVWUserWidget()
	{
		UClass* Class = UVWUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackOut", &UVWUserWidget::execBackOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWUserWidget_BackOut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWUserWidget_BackOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/VWUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWUserWidget_BackOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWUserWidget, nullptr, "BackOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWUserWidget_BackOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWUserWidget_BackOut_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVWUserWidget_BackOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWUserWidget_BackOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWUserWidget);
	UClass* Z_Construct_UClass_UVWUserWidget_NoRegister()
	{
		return UVWUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVWUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWUserWidget_BackOut, "BackOut" }, // 2807101969
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/VWUserWidget.h" },
		{ "ModuleRelativePath", "Private/UI/VWUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWUserWidget_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "VWUserWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//A reference to the parent widget, typically for easy access when backing out of this one\n" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Private/UI/VWUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A reference to the parent widget, typically for easy access when backing out of this one" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVWUserWidget_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x001100000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWUserWidget, Parent), Z_Construct_UClass_UVWUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWUserWidget_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_UVWUserWidget_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWUserWidget_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWUserWidget_Statics::ClassParams = {
		&UVWUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWUserWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWUserWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWUserWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWUserWidget()
	{
		if (!Z_Registration_Info_UClass_UVWUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWUserWidget.OuterSingleton, Z_Construct_UClass_UVWUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWUserWidget.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWUserWidget>()
	{
		return UVWUserWidget::StaticClass();
	}
	UVWUserWidget::UVWUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWUserWidget);
	UVWUserWidget::~UVWUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWUserWidget, UVWUserWidget::StaticClass, TEXT("UVWUserWidget"), &Z_Registration_Info_UClass_UVWUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWUserWidget), 3185932261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWUserWidget_h_3602567627(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_UI_VWUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
