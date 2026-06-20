// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Voidwreck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoidwreck() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAbilityInputID;
	static UEnum* EPlayerAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("EPlayerAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_EPlayerAbilityInputID.OuterSingleton;
	}
	template<> VOIDWRECK_API UEnum* StaticEnum<EPlayerAbilityInputID>()
	{
		return EPlayerAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::Enumerators[] = {
		{ "EPlayerAbilityInputID::None", (int64)EPlayerAbilityInputID::None },
		{ "EPlayerAbilityInputID::Confirm", (int64)EPlayerAbilityInputID::Confirm },
		{ "EPlayerAbilityInputID::Cancel", (int64)EPlayerAbilityInputID::Cancel },
		{ "EPlayerAbilityInputID::Move", (int64)EPlayerAbilityInputID::Move },
		{ "EPlayerAbilityInputID::Look", (int64)EPlayerAbilityInputID::Look },
		{ "EPlayerAbilityInputID::Jump", (int64)EPlayerAbilityInputID::Jump },
		{ "EPlayerAbilityInputID::Pause", (int64)EPlayerAbilityInputID::Pause },
		{ "EPlayerAbilityInputID::Interact", (int64)EPlayerAbilityInputID::Interact },
		{ "EPlayerAbilityInputID::Reload", (int64)EPlayerAbilityInputID::Reload },
		{ "EPlayerAbilityInputID::Fire", (int64)EPlayerAbilityInputID::Fire },
		{ "EPlayerAbilityInputID::AimDownSights", (int64)EPlayerAbilityInputID::AimDownSights },
		{ "EPlayerAbilityInputID::SwitchFireMode", (int64)EPlayerAbilityInputID::SwitchFireMode },
		{ "EPlayerAbilityInputID::NextItem", (int64)EPlayerAbilityInputID::NextItem },
		{ "EPlayerAbilityInputID::PreviousItem", (int64)EPlayerAbilityInputID::PreviousItem },
		{ "EPlayerAbilityInputID::SelectPrimary", (int64)EPlayerAbilityInputID::SelectPrimary },
		{ "EPlayerAbilityInputID::SelectSecondary", (int64)EPlayerAbilityInputID::SelectSecondary },
		{ "EPlayerAbilityInputID::Ping", (int64)EPlayerAbilityInputID::Ping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "AimDownSights.DisplayName", "Aim Down Sights" },
		{ "AimDownSights.Name", "EPlayerAbilityInputID::AimDownSights" },
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "EPlayerAbilityInputID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "EPlayerAbilityInputID::Confirm" },
		{ "Fire.DisplayName", "Fire" },
		{ "Fire.Name", "EPlayerAbilityInputID::Fire" },
		{ "Interact.DisplayName", "Interact" },
		{ "Interact.Name", "EPlayerAbilityInputID::Interact" },
		{ "IsBlueprintBase", "true" },
		{ "Jump.DisplayName", "Jump" },
		{ "Jump.Name", "EPlayerAbilityInputID::Jump" },
		{ "Look.DisplayName", "Look" },
		{ "Look.Name", "EPlayerAbilityInputID::Look" },
		{ "ModuleRelativePath", "Voidwreck.h" },
		{ "Move.DisplayName", "Move" },
		{ "Move.Name", "EPlayerAbilityInputID::Move" },
		{ "NextItem.DisplayName", "Select Next Item" },
		{ "NextItem.Name", "EPlayerAbilityInputID::NextItem" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EPlayerAbilityInputID::None" },
		{ "Pause.DisplayName", "Pause" },
		{ "Pause.Name", "EPlayerAbilityInputID::Pause" },
		{ "Ping.DisplayName", "Ping" },
		{ "Ping.Name", "EPlayerAbilityInputID::Ping" },
		{ "PreviousItem.DisplayName", "Select Previous Item" },
		{ "PreviousItem.Name", "EPlayerAbilityInputID::PreviousItem" },
		{ "Reload.DisplayName", "Reload" },
		{ "Reload.Name", "EPlayerAbilityInputID::Reload" },
		{ "SelectPrimary.DisplayName", "Select Primary" },
		{ "SelectPrimary.Name", "EPlayerAbilityInputID::SelectPrimary" },
		{ "SelectSecondary.DisplayName", "Select Secondary" },
		{ "SelectSecondary.Name", "EPlayerAbilityInputID::SelectSecondary" },
		{ "SwitchFireMode.DisplayName", "Switch Fire Mode" },
		{ "SwitchFireMode.Name", "EPlayerAbilityInputID::SwitchFireMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		"EPlayerAbilityInputID",
		"EPlayerAbilityInputID",
		Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAbilityInputID.InnerSingleton, Z_Construct_UEnum_Voidwreck_EPlayerAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerAbilityInputID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Voidwreck_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Voidwreck_h_Statics::EnumInfo[] = {
		{ EPlayerAbilityInputID_StaticEnum, TEXT("EPlayerAbilityInputID"), &Z_Registration_Info_UEnum_EPlayerAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3207570583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Voidwreck_h_3695969434(TEXT("/Script/Voidwreck"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Voidwreck_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Voidwreck_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
