// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/AbilitySystem/Abilities/VWGA_Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWGA_Interact() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGA_Interact();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGA_Interact_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameplayAbility();
// End Cross Module References
	DEFINE_FUNCTION(UVWGA_Interact::execOnInputReleased)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeHeld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputReleased(Z_Param_TimeHeld);
		P_NATIVE_END;
	}
	void UVWGA_Interact::StaticRegisterNativesUVWGA_Interact()
	{
		UClass* Class = UVWGA_Interact::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInputReleased", &UVWGA_Interact::execOnInputReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics
	{
		struct VWGA_Interact_eventOnInputReleased_Parms
		{
			float TimeHeld;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHeld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::NewProp_TimeHeld = { "TimeHeld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWGA_Interact_eventOnInputReleased_Parms, TimeHeld), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::NewProp_TimeHeld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/Abilities/VWGA_Interact.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWGA_Interact, nullptr, "OnInputReleased", nullptr, nullptr, Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::VWGA_Interact_eventOnInputReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::VWGA_Interact_eventOnInputReleased_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWGA_Interact_OnInputReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWGA_Interact_OnInputReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWGA_Interact);
	UClass* Z_Construct_UClass_UVWGA_Interact_NoRegister()
	{
		return UVWGA_Interact::StaticClass();
	}
	struct Z_Construct_UClass_UVWGA_Interact_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWGA_Interact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVWGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGA_Interact_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWGA_Interact_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWGA_Interact_OnInputReleased, "OnInputReleased" }, // 1824998748
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGA_Interact_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWGA_Interact_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/AbilitySystem/Abilities/VWGA_Interact.h" },
		{ "ModuleRelativePath", "Private/Player/AbilitySystem/Abilities/VWGA_Interact.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWGA_Interact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWGA_Interact>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWGA_Interact_Statics::ClassParams = {
		&UVWGA_Interact::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWGA_Interact_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWGA_Interact_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVWGA_Interact()
	{
		if (!Z_Registration_Info_UClass_UVWGA_Interact.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWGA_Interact.OuterSingleton, Z_Construct_UClass_UVWGA_Interact_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWGA_Interact.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWGA_Interact>()
	{
		return UVWGA_Interact::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWGA_Interact);
	UVWGA_Interact::~UVWGA_Interact() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_Abilities_VWGA_Interact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_Abilities_VWGA_Interact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWGA_Interact, UVWGA_Interact::StaticClass, TEXT("UVWGA_Interact"), &Z_Registration_Info_UClass_UVWGA_Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWGA_Interact), 1525832920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_Abilities_VWGA_Interact_h_1810791633(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_Abilities_VWGA_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_AbilitySystem_Abilities_VWGA_Interact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
