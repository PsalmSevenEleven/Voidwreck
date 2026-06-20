// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Interfaces/VWPlayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWPlayerInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerInterface();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerInterface_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVWPlayerInterface::execSetHudVisibility)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_Visibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudVisibility_Implementation(ESlateVisibility(Z_Param_Visibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVWPlayerInterface::execSetCurrentWidget)
	{
		P_GET_OBJECT(UVWUserWidget,Z_Param_NewWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentWidget_Implementation(Z_Param_NewWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVWPlayerInterface::execGetCurrentWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVWUserWidget**)Z_Param__Result=P_THIS->GetCurrentWidget_Implementation();
		P_NATIVE_END;
	}
	struct VWPlayerInterface_eventGetCurrentWidget_Parms
	{
		UVWUserWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		VWPlayerInterface_eventGetCurrentWidget_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct VWPlayerInterface_eventSetCurrentWidget_Parms
	{
		UVWUserWidget* NewWidget;
	};
	struct VWPlayerInterface_eventSetHudVisibility_Parms
	{
		ESlateVisibility Visibility;
	};
	UVWUserWidget* IVWPlayerInterface::GetCurrentWidget() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentWidget instead.");
		VWPlayerInterface_eventGetCurrentWidget_Parms Parms;
		return Parms.ReturnValue;
	}
	void IVWPlayerInterface::SetCurrentWidget(UVWUserWidget* NewWidget)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentWidget instead.");
	}
	void IVWPlayerInterface::SetHudVisibility(ESlateVisibility Visibility)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHudVisibility instead.");
	}
	void UVWPlayerInterface::StaticRegisterNativesUVWPlayerInterface()
	{
		UClass* Class = UVWPlayerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWidget", &IVWPlayerInterface::execGetCurrentWidget },
			{ "SetCurrentWidget", &IVWPlayerInterface::execSetCurrentWidget },
			{ "SetHudVisibility", &IVWPlayerInterface::execSetHudVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWPlayerInterface_eventGetCurrentWidget_Parms, ReturnValue), Z_Construct_UClass_UVWUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Interfaces/VWPlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWPlayerInterface, nullptr, "GetCurrentWidget", nullptr, nullptr, Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::PropPointers), sizeof(VWPlayerInterface_eventGetCurrentWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(VWPlayerInterface_eventGetCurrentWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWPlayerInterface_eventSetCurrentWidget_Parms, NewWidget), Z_Construct_UClass_UVWUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::NewProp_NewWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Interfaces/VWPlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWPlayerInterface, nullptr, "SetCurrentWidget", nullptr, nullptr, Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::PropPointers), sizeof(VWPlayerInterface_eventSetCurrentWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(VWPlayerInterface_eventSetCurrentWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWPlayerInterface_eventSetHudVisibility_Parms, Visibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 1295612096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::NewProp_Visibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Interfaces/VWPlayerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWPlayerInterface, nullptr, "SetHudVisibility", nullptr, nullptr, Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::PropPointers), sizeof(VWPlayerInterface_eventSetHudVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::PropPointers) < 2048);
	static_assert(sizeof(VWPlayerInterface_eventSetHudVisibility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWPlayerInterface);
	UClass* Z_Construct_UClass_UVWPlayerInterface_NoRegister()
	{
		return UVWPlayerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVWPlayerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWPlayerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWPlayerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWPlayerInterface_GetCurrentWidget, "GetCurrentWidget" }, // 685285603
		{ &Z_Construct_UFunction_UVWPlayerInterface_SetCurrentWidget, "SetCurrentWidget" }, // 2085884525
		{ &Z_Construct_UFunction_UVWPlayerInterface_SetHudVisibility, "SetHudVisibility" }, // 2282027109
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWPlayerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Interfaces/VWPlayerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWPlayerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVWPlayerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWPlayerInterface_Statics::ClassParams = {
		&UVWPlayerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWPlayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWPlayerInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVWPlayerInterface()
	{
		if (!Z_Registration_Info_UClass_UVWPlayerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWPlayerInterface.OuterSingleton, Z_Construct_UClass_UVWPlayerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWPlayerInterface.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWPlayerInterface>()
	{
		return UVWPlayerInterface::StaticClass();
	}
	UVWPlayerInterface::UVWPlayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWPlayerInterface);
	UVWPlayerInterface::~UVWPlayerInterface() {}
	static FName NAME_UVWPlayerInterface_GetCurrentWidget = FName(TEXT("GetCurrentWidget"));
	UVWUserWidget* IVWPlayerInterface::Execute_GetCurrentWidget(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVWPlayerInterface::StaticClass()));
		VWPlayerInterface_eventGetCurrentWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVWPlayerInterface_GetCurrentWidget);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IVWPlayerInterface*)(O->GetNativeInterfaceAddress(UVWPlayerInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurrentWidget_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVWPlayerInterface_SetCurrentWidget = FName(TEXT("SetCurrentWidget"));
	void IVWPlayerInterface::Execute_SetCurrentWidget(UObject* O, UVWUserWidget* NewWidget)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVWPlayerInterface::StaticClass()));
		VWPlayerInterface_eventSetCurrentWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVWPlayerInterface_SetCurrentWidget);
		if (Func)
		{
			Parms.NewWidget=NewWidget;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVWPlayerInterface*)(O->GetNativeInterfaceAddress(UVWPlayerInterface::StaticClass())))
		{
			I->SetCurrentWidget_Implementation(NewWidget);
		}
	}
	static FName NAME_UVWPlayerInterface_SetHudVisibility = FName(TEXT("SetHudVisibility"));
	void IVWPlayerInterface::Execute_SetHudVisibility(UObject* O, ESlateVisibility Visibility)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVWPlayerInterface::StaticClass()));
		VWPlayerInterface_eventSetHudVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVWPlayerInterface_SetHudVisibility);
		if (Func)
		{
			Parms.Visibility=Visibility;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVWPlayerInterface*)(O->GetNativeInterfaceAddress(UVWPlayerInterface::StaticClass())))
		{
			I->SetHudVisibility_Implementation(Visibility);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWPlayerInterface, UVWPlayerInterface::StaticClass, TEXT("UVWPlayerInterface"), &Z_Registration_Info_UClass_UVWPlayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWPlayerInterface), 1991718331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_3498937342(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Interfaces_VWPlayerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
