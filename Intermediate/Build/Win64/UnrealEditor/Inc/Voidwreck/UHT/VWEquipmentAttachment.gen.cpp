// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/Equipment/VWEquipmentAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWEquipmentAttachment() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentAttachment();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipmentAttachment_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWGameplayAbility_NoRegister();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EAttachmentOptionType();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FAttachmentCustomizationOption();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttachmentOptionType;
	static UEnum* EAttachmentOptionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentOptionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttachmentOptionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voidwreck_EAttachmentOptionType, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("EAttachmentOptionType"));
		}
		return Z_Registration_Info_UEnum_EAttachmentOptionType.OuterSingleton;
	}
	template<> VOIDWRECK_API UEnum* StaticEnum<EAttachmentOptionType>()
	{
		return EAttachmentOptionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::Enumerators[] = {
		{ "Scalar", (int64)Scalar },
		{ "Vector2", (int64)Vector2 },
		{ "Vector3", (int64)Vector3 },
		{ "AssetList", (int64)AssetList },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::Enum_MetaDataParams[] = {
		{ "AssetList.Comment", "/**\n * \n */" },
		{ "AssetList.DisplayName", "Asset List" },
		{ "AssetList.Name", "AssetList" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
		{ "Scalar.Comment", "/**\n * \n */" },
		{ "Scalar.DisplayName", "Scalar" },
		{ "Scalar.Name", "Scalar" },
		{ "Vector2.Comment", "/**\n * \n */" },
		{ "Vector2.DisplayName", "2D Vector" },
		{ "Vector2.Name", "Vector2" },
		{ "Vector3.Comment", "/**\n * \n */" },
		{ "Vector3.DisplayName", "3D Vector" },
		{ "Vector3.Name", "Vector3" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		"EAttachmentOptionType",
		"EAttachmentOptionType",
		Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Voidwreck_EAttachmentOptionType()
	{
		if (!Z_Registration_Info_UEnum_EAttachmentOptionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttachmentOptionType.InnerSingleton, Z_Construct_UEnum_Voidwreck_EAttachmentOptionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttachmentOptionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption;
class UScriptStruct* FAttachmentCustomizationOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachmentCustomizationOption, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("AttachmentCustomizationOption"));
	}
	return Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FAttachmentCustomizationOption>()
{
	return FAttachmentCustomizationOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultZ_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultZ;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachmentCustomizationOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Tooltip_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Tooltip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, Type), Z_Construct_UEnum_Voidwreck_EAttachmentOptionType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Type_MetaData) }; // 3267708936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "EditCondition", "Type != EAttachmentOptionType::AssetList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, MinValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MinValue_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "EditCondition", "Type != EAttachmentOptionType::AssetList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, MaxValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MaxValue_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "DisplayName", "Default Value" },
		{ "EditCondition", "Type == EAttachmentOptionType::Scalar" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, DefaultValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultValue_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultX_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "DisplayName", "Default Value X" },
		{ "EditCondition", "Type == EAttachmentOptionType::Vector2 || Type == EAttachmentOptionType::Vector3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultX = { "DefaultX", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, DefaultX), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultX_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultY_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "DisplayName", "Default Value Y" },
		{ "EditCondition", "Type == EAttachmentOptionType::Vector2 || Type == EAttachmentOptionType::Vector3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultY = { "DefaultY", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, DefaultY), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultY_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultZ_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
		{ "DisplayName", "Default Value Z" },
		{ "EditCondition", "Type == EAttachmentOptionType::Vector3" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultZ = { "DefaultZ", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, DefaultZ), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultZ_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultZ_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets_MetaData[] = {
		{ "Category", "AttachmentCustomizationOption" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When populating this array, make sure that all of the items are the same class or they won't show up in-game\n" },
#endif
		{ "EditCondition", "Type == EAttachmentOptionType::AssetList" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When populating this array, make sure that all of the items are the same class or they won't show up in-game" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachmentCustomizationOption, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets_MetaData), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_DefaultZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewProp_Assets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"AttachmentCustomizationOption",
		Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::PropPointers),
		sizeof(FAttachmentCustomizationOption),
		alignof(FAttachmentCustomizationOption),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAttachmentCustomizationOption()
	{
		if (!Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption.InnerSingleton, Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption.InnerSingleton;
	}
	DEFINE_FUNCTION(UVWEquipmentAttachment::execInitializeOptions)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_SavedOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeOptions(Z_Param_MeshComponent,Z_Param_Out_SavedOptions);
		P_NATIVE_END;
	}
	void UVWEquipmentAttachment::StaticRegisterNativesUVWEquipmentAttachment()
	{
		UClass* Class = UVWEquipmentAttachment::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeOptions", &UVWEquipmentAttachment::execInitializeOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics
	{
		struct VWEquipmentAttachment_eventInitializeOptions_Parms
		{
			USkeletalMeshComponent* MeshComponent;
			TArray<uint8> SavedOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentAttachment_eventInitializeOptions_Parms, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_MeshComponent_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions_Inner = { "SavedOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions = { "SavedOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWEquipmentAttachment_eventInitializeOptions_Parms, SavedOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions_MetaData), Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::NewProp_SavedOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This function is meant to be overridden by al child classes to allow them to parse options with their own individual formats\n//For this to work, all attachment types (ironsight, optic, underbarrel, etc) must have their own standardized order in which the options appear\n//Any unused option is to be skipped. for example, if there is no need to customize the rear glow of an ironsight,\n//that option is simply never added and the function should continue to the next one.\n" },
#endif
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This function is meant to be overridden by al child classes to allow them to parse options with their own individual formats\nFor this to work, all attachment types (ironsight, optic, underbarrel, etc) must have their own standardized order in which the options appear\nAny unused option is to be skipped. for example, if there is no need to customize the rear glow of an ironsight,\nthat option is simply never added and the function should continue to the next one." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWEquipmentAttachment, nullptr, "InitializeOptions", nullptr, nullptr, Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::VWEquipmentAttachment_eventInitializeOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::VWEquipmentAttachment_eventInitializeOptions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWEquipmentAttachment);
	UClass* Z_Construct_UClass_UVWEquipmentAttachment_NoRegister()
	{
		return UVWEquipmentAttachment::StaticClass();
	}
	struct Z_Construct_UClass_UVWEquipmentAttachment_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PassiveEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassiveEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PassiveEffects;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrantedAbilities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWEquipmentAttachment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVWEquipmentAttachment_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWEquipmentAttachment_InitializeOptions, "InitializeOptions" }, // 333880717
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Equipment/VWEquipmentAttachment.h" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, Thumbnail), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_DisplayName_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_Inner = { "PassiveEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects = { "PassiveEffects", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, PassiveEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_Inner = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVWGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, GrantedAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAttachmentCustomizationOption, METADATA_PARAMS(0, nullptr) }; // 2129584959
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "VWEquipmentAttachment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipmentAttachment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipmentAttachment, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options_MetaData), Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options_MetaData) }; // 2129584959
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_PassiveEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipmentAttachment_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEquipmentAttachment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEquipmentAttachment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEquipmentAttachment_Statics::ClassParams = {
		&UVWEquipmentAttachment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWEquipmentAttachment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipmentAttachment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWEquipmentAttachment()
	{
		if (!Z_Registration_Info_UClass_UVWEquipmentAttachment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWEquipmentAttachment.OuterSingleton, Z_Construct_UClass_UVWEquipmentAttachment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWEquipmentAttachment.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWEquipmentAttachment>()
	{
		return UVWEquipmentAttachment::StaticClass();
	}
	UVWEquipmentAttachment::UVWEquipmentAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWEquipmentAttachment);
	UVWEquipmentAttachment::~UVWEquipmentAttachment() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::EnumInfo[] = {
		{ EAttachmentOptionType_StaticEnum, TEXT("EAttachmentOptionType"), &Z_Registration_Info_UEnum_EAttachmentOptionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3267708936U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ScriptStructInfo[] = {
		{ FAttachmentCustomizationOption::StaticStruct, Z_Construct_UScriptStruct_FAttachmentCustomizationOption_Statics::NewStructOps, TEXT("AttachmentCustomizationOption"), &Z_Registration_Info_UScriptStruct_AttachmentCustomizationOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachmentCustomizationOption), 2129584959U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWEquipmentAttachment, UVWEquipmentAttachment::StaticClass, TEXT("UVWEquipmentAttachment"), &Z_Registration_Info_UClass_UVWEquipmentAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEquipmentAttachment), 473925171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_3729615046(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipmentAttachment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
