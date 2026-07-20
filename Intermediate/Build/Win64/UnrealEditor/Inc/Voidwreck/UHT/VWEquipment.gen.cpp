// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Player/Equipment/VWEquipment.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWEquipment() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWAbilitySet_NoRegister();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipment();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWEquipment_NoRegister();
	VOIDWRECK_API UEnum* Z_Construct_UEnum_Voidwreck_EEquipmentSlot();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAttachmentSlot();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FVWPrimaryAssetID();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEquipmentSlot;
	static UEnum* EEquipmentSlot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Voidwreck_EEquipmentSlot, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("EEquipmentSlot"));
		}
		return Z_Registration_Info_UEnum_EEquipmentSlot.OuterSingleton;
	}
	template<> VOIDWRECK_API UEnum* StaticEnum<EEquipmentSlot>()
	{
		return EEquipmentSlot_StaticEnum();
	}
	struct Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::Enumerators[] = {
		{ "EEquipmentSlot::Head", (int64)EEquipmentSlot::Head },
		{ "EEquipmentSlot::Eyes", (int64)EEquipmentSlot::Eyes },
		{ "EEquipmentSlot::Face", (int64)EEquipmentSlot::Face },
		{ "EEquipmentSlot::Torso", (int64)EEquipmentSlot::Torso },
		{ "EEquipmentSlot::Arms", (int64)EEquipmentSlot::Arms },
		{ "EEquipmentSlot::Legs", (int64)EEquipmentSlot::Legs },
		{ "EEquipmentSlot::Feet", (int64)EEquipmentSlot::Feet },
		{ "EEquipmentSlot::Back", (int64)EEquipmentSlot::Back },
		{ "EEquipmentSlot::Primary", (int64)EEquipmentSlot::Primary },
		{ "EEquipmentSlot::Secondary", (int64)EEquipmentSlot::Secondary },
		{ "EEquipmentSlot::Count", (int64)EEquipmentSlot::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::Enum_MetaDataParams[] = {
		{ "Arms.DisplayName", "Arm" },
		{ "Arms.Name", "EEquipmentSlot::Arms" },
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "EEquipmentSlot::Back" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n *///WARNING - Do not change the enum int values\n" },
#endif
		{ "Count.Comment", "//Insert any new slots above this line ^^^^^\n//This last one allows me to iterate over my slots.\n//It will not be used in editor or available as an option, and is only here to give me a way of checking the size of the enum.\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EEquipmentSlot::Count" },
		{ "Count.ToolTip", "Insert any new slots above this line ^^^^^\nThis last one allows me to iterate over my slots.\nIt will not be used in editor or available as an option, and is only here to give me a way of checking the size of the enum." },
		{ "Eyes.DisplayName", "Eyes" },
		{ "Eyes.Name", "EEquipmentSlot::Eyes" },
		{ "Face.DisplayName", "Face" },
		{ "Face.Name", "EEquipmentSlot::Face" },
		{ "Feet.DisplayName", "Feet" },
		{ "Feet.Name", "EEquipmentSlot::Feet" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "EEquipmentSlot::Head" },
		{ "Legs.DisplayName", "Legs" },
		{ "Legs.Name", "EEquipmentSlot::Legs" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
		{ "Primary.DisplayName", "Primary" },
		{ "Primary.Name", "EEquipmentSlot::Primary" },
		{ "Secondary.DisplayName", "Secondary" },
		{ "Secondary.Name", "EEquipmentSlot::Secondary" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//WARNING - Do not change the enum int values" },
#endif
		{ "Torso.DisplayName", "Torso" },
		{ "Torso.Name", "EEquipmentSlot::Torso" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		"EEquipmentSlot",
		"EEquipmentSlot",
		Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Voidwreck_EEquipmentSlot()
	{
		if (!Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton, Z_Construct_UEnum_Voidwreck_EEquipmentSlot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEquipmentSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VWPrimaryAssetID;
class UScriptStruct* FVWPrimaryAssetID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VWPrimaryAssetID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VWPrimaryAssetID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVWPrimaryAssetID, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("VWPrimaryAssetID"));
	}
	return Z_Registration_Info_UScriptStruct_VWPrimaryAssetID.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FVWPrimaryAssetID>()
{
	return FVWPrimaryAssetID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAssetId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAssetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This struct primarily exists to let me access a display name without having to load stuff\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This struct primarily exists to let me access a display name without having to load stuff" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVWPrimaryAssetID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "VWPrimaryAssetID" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Display name for loadout screen, localizable\n" },
#endif
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name for loadout screen, localizable" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVWPrimaryAssetID, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_PrimaryAssetId_MetaData[] = {
		{ "Category", "VWPrimaryAssetID" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_PrimaryAssetId = { "PrimaryAssetId", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVWPrimaryAssetID, PrimaryAssetId), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_PrimaryAssetId_MetaData), Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_PrimaryAssetId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewProp_PrimaryAssetId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"VWPrimaryAssetID",
		Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::PropPointers),
		sizeof(FVWPrimaryAssetID),
		alignof(FVWPrimaryAssetID),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FVWPrimaryAssetID()
	{
		if (!Z_Registration_Info_UScriptStruct_VWPrimaryAssetID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VWPrimaryAssetID.InnerSingleton, Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VWPrimaryAssetID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot;
class UScriptStruct* FEquipmentAttachmentSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("EquipmentAttachmentSlot"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FEquipmentAttachmentSlot>()
{
	return FEquipmentAttachmentSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableAttachments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAttachments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableAttachments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentAttachmentSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "EquipmentAttachmentSlot" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAttachmentSlot, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "EquipmentAttachmentSlot" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAttachmentSlot, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_SocketName_MetaData), Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_SocketName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments_Inner = { "AvailableAttachments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments_MetaData[] = {
		{ "Category", "EquipmentAttachmentSlot" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments = { "AvailableAttachments", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentAttachmentSlot, AvailableAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments_MetaData), Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewProp_AvailableAttachments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"EquipmentAttachmentSlot",
		Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::PropPointers),
		sizeof(FEquipmentAttachmentSlot),
		alignof(FEquipmentAttachmentSlot),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentAttachmentSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot.InnerSingleton;
	}
	void UVWEquipment::StaticRegisterNativesUVWEquipment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWEquipment);
	UClass* Z_Construct_UClass_UVWEquipment_NoRegister()
	{
		return UVWEquipment::StaticClass();
	}
	struct Z_Construct_UClass_UVWEquipment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Slot_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedAbilities_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GrantedAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrantedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrantedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachmentSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWEquipment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/Equipment/VWEquipment.h" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, Slot), Z_Construct_UEnum_Voidwreck_EEquipmentSlot, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot_MetaData) }; // 2384897542
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, Weight), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_Weight_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_Weight_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_Cost_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_Cost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedAbilities_MetaData[] = {
		{ "AssetBundles", "MissionOnly" },
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedAbilities = { "GrantedAbilities", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, GrantedAbilities), Z_Construct_UClass_UVWAbilitySet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedAbilities_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedAbilities_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedTags_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedTags = { "GrantedTags", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, GrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedTags_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, Thumbnail), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_Thumbnail_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_Thumbnail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_Mesh_MetaData[] = {
		{ "AssetBundles", "HubAndMission" },
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots_Inner = { "AttachmentSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentAttachmentSlot, METADATA_PARAMS(0, nullptr) }; // 2612340630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots_MetaData[] = {
		{ "Category", "VWEquipment" },
		{ "ModuleRelativePath", "Private/Player/Equipment/VWEquipment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots = { "AttachmentSlots", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWEquipment, AttachmentSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots_MetaData), Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots_MetaData) }; // 2612340630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWEquipment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_GrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWEquipment_Statics::NewProp_AttachmentSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWEquipment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWEquipment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWEquipment_Statics::ClassParams = {
		&UVWEquipment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWEquipment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWEquipment_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWEquipment_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWEquipment()
	{
		if (!Z_Registration_Info_UClass_UVWEquipment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWEquipment.OuterSingleton, Z_Construct_UClass_UVWEquipment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWEquipment.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWEquipment>()
	{
		return UVWEquipment::StaticClass();
	}
	UVWEquipment::UVWEquipment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWEquipment);
	UVWEquipment::~UVWEquipment() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::EnumInfo[] = {
		{ EEquipmentSlot_StaticEnum, TEXT("EEquipmentSlot"), &Z_Registration_Info_UEnum_EEquipmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2384897542U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::ScriptStructInfo[] = {
		{ FVWPrimaryAssetID::StaticStruct, Z_Construct_UScriptStruct_FVWPrimaryAssetID_Statics::NewStructOps, TEXT("VWPrimaryAssetID"), &Z_Registration_Info_UScriptStruct_VWPrimaryAssetID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVWPrimaryAssetID), 2668140360U) },
		{ FEquipmentAttachmentSlot::StaticStruct, Z_Construct_UScriptStruct_FEquipmentAttachmentSlot_Statics::NewStructOps, TEXT("EquipmentAttachmentSlot"), &Z_Registration_Info_UScriptStruct_EquipmentAttachmentSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentAttachmentSlot), 2612340630U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWEquipment, UVWEquipment::StaticClass, TEXT("UVWEquipment"), &Z_Registration_Info_UClass_UVWEquipment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWEquipment), 3559499175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_2273541190(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Player_Equipment_VWEquipment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
