// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/Character/FirstPersonCharacter.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	VOIDWRECK_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_AFirstPersonPlayerController_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_AVWPlayerState_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAbilitySet_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerAttributeSet_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWPlayerInterface_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFirstPersonCharacter::execSetCurrentWidget_Implementation)
	{
		P_GET_OBJECT(UVWUserWidget,Z_Param_NewWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentWidget_Implementation(Z_Param_NewWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execGetCurrentWidget_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVWUserWidget**)Z_Param__Result=P_THIS->GetCurrentWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execGetAbilitySystemComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execActivateGASAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateGASAbility(Z_Param_Index,Z_Param_bOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFirstPersonCharacter::execServer_RequestAbilities)
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
	struct FirstPersonCharacter_eventServer_RequestAbilities_Parms
	{
		TSoftObjectPtr<UVWAbilitySet> AbilitySet;
	};
	static FName NAME_AFirstPersonCharacter_Server_RequestAbilities = FName(TEXT("Server_RequestAbilities"));
	void AFirstPersonCharacter::Server_RequestAbilities(TSoftObjectPtr<UVWAbilitySet> const& AbilitySet)
	{
		FirstPersonCharacter_eventServer_RequestAbilities_Parms Parms;
		Parms.AbilitySet=AbilitySet;
		ProcessEvent(FindFunctionChecked(NAME_AFirstPersonCharacter_Server_RequestAbilities),&Parms);
	}
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
		UClass* Class = AFirstPersonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGASAbility", &AFirstPersonCharacter::execActivateGASAbility },
			{ "GetAbilitySystemComponent", &AFirstPersonCharacter::execGetAbilitySystemComponent },
			{ "GetCurrentWidget_Implementation", &AFirstPersonCharacter::execGetCurrentWidget_Implementation },
			{ "Server_RequestAbilities", &AFirstPersonCharacter::execServer_RequestAbilities },
			{ "SetCurrentWidget_Implementation", &AFirstPersonCharacter::execSetCurrentWidget_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics
	{
		struct FirstPersonCharacter_eventActivateGASAbility_Parms
		{
			int32 Index;
			bool bOn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventActivateGASAbility_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::NewProp_bOn_SetBit(void* Obj)
	{
		((FirstPersonCharacter_eventActivateGASAbility_Parms*)Obj)->bOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::NewProp_bOn = { "bOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FirstPersonCharacter_eventActivateGASAbility_Parms), &Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::NewProp_bOn_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::NewProp_bOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "ActivateGASAbility", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::FirstPersonCharacter_eventActivateGASAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::FirstPersonCharacter_eventActivateGASAbility_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics
	{
		struct FirstPersonCharacter_eventGetAbilitySystemComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ability System Interface\n" },
#endif
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::FirstPersonCharacter_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::FirstPersonCharacter_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics
	{
		struct FirstPersonCharacter_eventGetCurrentWidget_Implementation_Parms
		{
			UVWUserWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventGetCurrentWidget_Implementation_Parms, ReturnValue), Z_Construct_UClass_UVWUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "GetCurrentWidget_Implementation", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::FirstPersonCharacter_eventGetCurrentWidget_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::FirstPersonCharacter_eventGetCurrentWidget_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::NewProp_AbilitySet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::NewProp_AbilitySet = { "AbilitySet", nullptr, (EPropertyFlags)0x0014000008000082, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventServer_RequestAbilities_Parms, AbilitySet), Z_Construct_UClass_UVWAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::NewProp_AbilitySet_MetaData), Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::NewProp_AbilitySet_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::NewProp_AbilitySet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "Server_RequestAbilities", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::PropPointers), sizeof(FirstPersonCharacter_eventServer_RequestAbilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(FirstPersonCharacter_eventServer_RequestAbilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics
	{
		struct FirstPersonCharacter_eventSetCurrentWidget_Implementation_Parms
		{
			UVWUserWidget* NewWidget;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FirstPersonCharacter_eventSetCurrentWidget_Implementation_Parms, NewWidget), Z_Construct_UClass_UVWUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::NewProp_NewWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "SetCurrentWidget_Implementation", nullptr, nullptr, Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::FirstPersonCharacter_eventSetCurrentWidget_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::FirstPersonCharacter_eventSetCurrentWidget_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonCharacter);
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VWPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VWPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonPlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonPlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacter_ActivateGASAbility, "ActivateGASAbility" }, // 3018488445
		{ &Z_Construct_UFunction_AFirstPersonCharacter_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 1164799256
		{ &Z_Construct_UFunction_AFirstPersonCharacter_GetCurrentWidget_Implementation, "GetCurrentWidget_Implementation" }, // 595489181
		{ &Z_Construct_UFunction_AFirstPersonCharacter_Server_RequestAbilities, "Server_RequestAbilities" }, // 1612493686
		{ &Z_Construct_UFunction_AFirstPersonCharacter_SetCurrentWidget_Implementation, "SetCurrentWidget_Implementation" }, // 1058383524
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Character/FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_VWPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_VWPlayerState = { "VWPlayerState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, VWPlayerState), Z_Construct_UClass_AVWPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_VWPlayerState_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_VWPlayerState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, AttributeSet), Z_Construct_UClass_UVWPlayerAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FirstPersonPlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FirstPersonPlayerController = { "FirstPersonPlayerController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, FirstPersonPlayerController), Z_Construct_UClass_AFirstPersonPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FirstPersonPlayerController_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FirstPersonPlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DefaultAbilities_MetaData[] = {
		{ "Category", "FirstPersonCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Abilities that all player characters have by default; firing, switching equipment, etc. \n" },
#endif
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities that all player characters have by default; firing, switching equipment, etc." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DefaultAbilities = { "DefaultAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, DefaultAbilities), Z_Construct_UClass_UVWAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DefaultAbilities_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DefaultAbilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Private/Player/Character/FirstPersonCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFirstPersonCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_VWPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_FirstPersonPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_DefaultAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_LookAction,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFirstPersonCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AFirstPersonCharacter, IAbilitySystemInterface), false },  // 3195502011
			{ Z_Construct_UClass_UVWPlayerInterface_NoRegister, (int32)VTABLE_OFFSET(AFirstPersonCharacter, IVWPlayerInterface), false },  // 1991718331
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonCharacter.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
	AFirstPersonCharacter::~AFirstPersonCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Character_FirstPersonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Character_FirstPersonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonCharacter, AFirstPersonCharacter::StaticClass, TEXT("AFirstPersonCharacter"), &Z_Registration_Info_UClass_AFirstPersonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonCharacter), 1027483069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Character_FirstPersonCharacter_h_2963838861(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Character_FirstPersonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Character_FirstPersonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
