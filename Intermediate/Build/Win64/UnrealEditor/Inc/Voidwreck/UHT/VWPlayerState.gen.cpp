// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/VWPlayerState.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWPlayerState();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWPlayerState_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAbilitySet_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerAttributeSet_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVWPlayerState::execServer_RequestAbilities)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UVWAbilitySet>,Z_Param_AbilitySet);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_RequestAbilities_Validate(Z_Param_AbilitySet))
		{
			RPC_ValidateFailed(TEXT("Server_RequestAbilities_Validate"));
			return;
		}
		P_THIS->Server_RequestAbilities_Implementation(Z_Param_AbilitySet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVWPlayerState::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
		P_NATIVE_END;
	}
	struct VWPlayerState_eventServer_RequestAbilities_Parms
	{
		TSoftObjectPtr<UVWAbilitySet> AbilitySet;
	};
	static FName NAME_AVWPlayerState_Server_RequestAbilities = FName(TEXT("Server_RequestAbilities"));
	void AVWPlayerState::Server_RequestAbilities(TSoftObjectPtr<UVWAbilitySet> const& AbilitySet)
	{
		VWPlayerState_eventServer_RequestAbilities_Parms Parms;
		Parms.AbilitySet=AbilitySet;
		ProcessEvent(FindFunctionChecked(NAME_AVWPlayerState_Server_RequestAbilities),&Parms);
	}
	void AVWPlayerState::StaticRegisterNativesAVWPlayerState()
	{
		UClass* Class = AVWPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAbilitySystemComponent", &AVWPlayerState::execGetAbilitySystemComponent },
			{ "Server_RequestAbilities", &AVWPlayerState::execServer_RequestAbilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics
	{
		struct VWPlayerState_eventGetAbilitySystemComponent_Parms
		{
			UAbilitySystemComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWPlayerState_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/VWPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVWPlayerState, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::VWPlayerState_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::VWPlayerState_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySet_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AbilitySet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::NewProp_AbilitySet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::NewProp_AbilitySet = { "AbilitySet", nullptr, (EPropertyFlags)0x0014000008000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWPlayerState_eventServer_RequestAbilities_Parms, AbilitySet), Z_Construct_UClass_UVWAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::NewProp_AbilitySet_MetaData), Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::NewProp_AbilitySet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::NewProp_AbilitySet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/VWPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVWPlayerState, nullptr, "Server_RequestAbilities", nullptr, nullptr, Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::PropPointers), sizeof(VWPlayerState_eventServer_RequestAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(VWPlayerState_eventServer_RequestAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVWPlayerState);
	UClass* Z_Construct_UClass_AVWPlayerState_NoRegister()
	{
		return AVWPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AVWPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVWPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AVWPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVWPlayerState_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 3055234293
		{ &Z_Construct_UFunction_AVWPlayerState_Server_RequestAbilities, "Server_RequestAbilities" }, // 1019992904
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/VWPlayerState.h" },
		{ "ModuleRelativePath", "Private/Player/VWPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Player/VWPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0020080000080028, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Player/VWPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVWPlayerState, AttributeSet), Z_Construct_UClass_UVWPlayerAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AttributeSet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVWPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVWPlayerState_Statics::NewProp_AttributeSet,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVWPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AVWPlayerState, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UVWPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AVWPlayerState, IVWPlayerInterface), false },  // 1991718331
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVWPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVWPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVWPlayerState_Statics::ClassParams = {
		&AVWPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVWPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AVWPlayerState_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWPlayerState_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AVWPlayerState()
	{
		if (!Z_Registration_Info_UClass_AVWPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVWPlayerState.OuterSingleton, Z_Construct_UClass_AVWPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVWPlayerState.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<AVWPlayerState>()
	{
		return AVWPlayerState::StaticClass();
	}

	void AVWPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_AbilitySystemComponent(TEXT("AbilitySystemComponent"));

		const bool bIsValid = true
			&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AVWPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVWPlayerState);
	AVWPlayerState::~AVWPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVWPlayerState, AVWPlayerState::StaticClass, TEXT("AVWPlayerState"), &Z_Registration_Info_UClass_AVWPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVWPlayerState), 3172815980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_3135737565(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_VWPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
