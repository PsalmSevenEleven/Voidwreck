// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voidwreck/Private/Background_Infrastructure/VWSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Voidwreck();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWSaveGame();
	VOIDWRECK_API UClass* Z_Construct_UClass_UVWSaveGame_NoRegister();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentOptions();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FLoadout();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FSavedAttachmentOptions();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FSavedEquipmentOptions();
	VOIDWRECK_API UScriptStruct* Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedAttachmentOptions;
class UScriptStruct* FSavedAttachmentOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedAttachmentOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedAttachmentOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedAttachmentOptions, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("SavedAttachmentOptions"));
	}
	return Z_Registration_Info_UScriptStruct_SavedAttachmentOptions.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FSavedAttachmentOptions>()
{
	return FSavedAttachmentOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Words cannot express how much I hate having this many structs, but I have to wrap them this way to allow me to save them to a file.\n//Each represents a level of a 4d array, which I'll explain more in-depth later.\n//The one benefit of having to declare each layer as its own struct is that initialization is much easier\n" },
#endif
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Words cannot express how much I hate having this many structs, but I have to wrap them this way to allow me to save them to a file.\nEach represents a level of a 4d array, which I'll explain more in-depth later.\nThe one benefit of having to declare each layer as its own struct is that initialization is much easier" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedAttachmentOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options_MetaData[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedAttachmentOptions, Options), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options_MetaData), Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"SavedAttachmentOptions",
		Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::PropPointers),
		sizeof(FSavedAttachmentOptions),
		alignof(FSavedAttachmentOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSavedAttachmentOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_SavedAttachmentOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedAttachmentOptions.InnerSingleton, Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SavedAttachmentOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions;
class UScriptStruct* FSavedAttachmentSlotOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("SavedAttachmentSlotOptions"));
	}
	return Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FSavedAttachmentSlotOptions>()
{
	return FSavedAttachmentSlotOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attachment_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attachment_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attachment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedAttachmentSlotOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment_Inner = { "Attachment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedAttachmentOptions, METADATA_PARAMS(0, nullptr) }; // 1936707846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment_MetaData[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment = { "Attachment", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedAttachmentSlotOptions, Attachment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment_MetaData), Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment_MetaData) }; // 1936707846
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewProp_Attachment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"SavedAttachmentSlotOptions",
		Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::PropPointers),
		sizeof(FSavedAttachmentSlotOptions),
		alignof(FSavedAttachmentSlotOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions.InnerSingleton, Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedEquipmentOptions;
class UScriptStruct* FSavedEquipmentOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedEquipmentOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedEquipmentOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedEquipmentOptions, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("SavedEquipmentOptions"));
	}
	return Z_Registration_Info_UScriptStruct_SavedEquipmentOptions.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FSavedEquipmentOptions>()
{
	return FSavedEquipmentOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedEquipmentOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot_Inner = { "Slot", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions, METADATA_PARAMS(0, nullptr) }; // 3235687538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot_MetaData[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedEquipmentOptions, Slot), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot_MetaData), Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot_MetaData) }; // 3235687538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewProp_Slot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"SavedEquipmentOptions",
		Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::PropPointers),
		sizeof(FSavedEquipmentOptions),
		alignof(FSavedEquipmentOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSavedEquipmentOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_SavedEquipmentOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedEquipmentOptions.InnerSingleton, Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SavedEquipmentOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions;
class UScriptStruct* FSavedEquipmentSlotOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("SavedEquipmentSlotOptions"));
	}
	return Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FSavedEquipmentSlotOptions>()
{
	return FSavedEquipmentSlotOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Equipment_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Equipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedEquipmentSlotOptions>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment_Inner = { "Equipment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedEquipmentOptions, METADATA_PARAMS(0, nullptr) }; // 983181335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment_MetaData[] = {
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedEquipmentSlotOptions, Equipment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment_MetaData), Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment_MetaData) }; // 983181335
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewProp_Equipment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"SavedEquipmentSlotOptions",
		Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::PropPointers),
		sizeof(FSavedEquipmentSlotOptions),
		alignof(FSavedEquipmentSlotOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions.InnerSingleton, Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EquipmentOptions;
class UScriptStruct* FEquipmentOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EquipmentOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EquipmentOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEquipmentOptions, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("EquipmentOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EquipmentOptions.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FEquipmentOptions>()
{
	return FEquipmentOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEquipmentOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EquipmentIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachmentIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedAttachmentOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedAttachmentOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEquipmentOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_EquipmentIndex_MetaData[] = {
		{ "Category", "EquipmentOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This stores the index of the equipment that currently occupies this slot\n" },
#endif
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This stores the index of the equipment that currently occupies this slot" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_EquipmentIndex = { "EquipmentIndex", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentOptions, EquipmentIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_EquipmentIndex_MetaData), Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_EquipmentIndex_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices_Inner = { "AttachmentIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This stores the indices of the attachments to use in each slot on the equipment\n" },
#endif
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This stores the indices of the attachments to use in each slot on the equipment" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices = { "AttachmentIndices", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentOptions, AttachmentIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices_MetaData), Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_SavedAttachmentOptions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//We use this system to make sure that any customization the player has done in the attachment screen (colors, locations, etc) doesn't need to be redone\n//every time a player reselects an attachment.\n//Hopefully, this over-engineered solution will reduce later tech debt and make adding new content a breeze\n" },
#endif
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We use this system to make sure that any customization the player has done in the attachment screen (colors, locations, etc) doesn't need to be redone\nevery time a player reselects an attachment.\nHopefully, this over-engineered solution will reduce later tech debt and make adding new content a breeze" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_SavedAttachmentOptions = { "SavedAttachmentOptions", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEquipmentOptions, SavedAttachmentOptions), Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_SavedAttachmentOptions_MetaData), Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_SavedAttachmentOptions_MetaData) }; // 1014637470
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEquipmentOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_EquipmentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_AttachmentIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewProp_SavedAttachmentOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEquipmentOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"EquipmentOptions",
		Z_Construct_UScriptStruct_FEquipmentOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentOptions_Statics::PropPointers),
		sizeof(FEquipmentOptions),
		alignof(FEquipmentOptions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEquipmentOptions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEquipmentOptions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEquipmentOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_EquipmentOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EquipmentOptions.InnerSingleton, Z_Construct_UScriptStruct_FEquipmentOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EquipmentOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Loadout;
class UScriptStruct* FLoadout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Loadout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Loadout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoadout, (UObject*)Z_Construct_UPackage__Script_Voidwreck(), TEXT("Loadout"));
	}
	return Z_Registration_Info_UScriptStruct_Loadout.OuterSingleton;
}
template<> VOIDWRECK_API UScriptStruct* StaticStruct<FLoadout>()
{
	return FLoadout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoadout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Equipment_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equipment_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Equipment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoadout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoadout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Loadout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is better for the player than 'Loadout 1', 'Loadout 2', etc.\n" },
#endif
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is better for the player than 'Loadout 1', 'Loadout 2', etc." },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadout, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_DisplayName_MetaData), Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_DisplayName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment_Inner = { "Equipment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FEquipmentOptions, METADATA_PARAMS(0, nullptr) }; // 36386593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment_MetaData[] = {
		{ "Category", "Loadout" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Each index represents an equipment slot, corresponding to the elements of EEquipmentSlot\n" },
#endif
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each index represents an equipment slot, corresponding to the elements of EEquipmentSlot" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLoadout, Equipment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment_MetaData), Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment_MetaData) }; // 36386593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoadout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoadout_Statics::NewProp_Equipment,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoadout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
		nullptr,
		&NewStructOps,
		"Loadout",
		Z_Construct_UScriptStruct_FLoadout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadout_Statics::PropPointers),
		sizeof(FLoadout),
		alignof(FLoadout),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLoadout_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoadout_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLoadout()
	{
		if (!Z_Registration_Info_UScriptStruct_Loadout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Loadout.InnerSingleton, Z_Construct_UScriptStruct_FLoadout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Loadout.InnerSingleton;
	}
	void UVWSaveGame::StaticRegisterNativesUVWSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWSaveGame);
	UClass* Z_Construct_UClass_UVWSaveGame_NoRegister()
	{
		return UVWSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UVWSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AccountLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLoadout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedLoadout;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Loadouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loadouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Loadouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVWSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Voidwreck,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Background_Infrastructure/VWSaveGame.h" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWSaveGame_Statics::NewProp_AccountLevel_MetaData[] = {
		{ "Category", "VWSaveGame" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWSaveGame_Statics::NewProp_AccountLevel = { "AccountLevel", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWSaveGame, AccountLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::NewProp_AccountLevel_MetaData), Z_Construct_UClass_UVWSaveGame_Statics::NewProp_AccountLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWSaveGame_Statics::NewProp_XP_MetaData[] = {
		{ "Category", "VWSaveGame" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWSaveGame_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWSaveGame, XP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::NewProp_XP_MetaData), Z_Construct_UClass_UVWSaveGame_Statics::NewProp_XP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWSaveGame_Statics::NewProp_SelectedLoadout_MetaData[] = {
		{ "Category", "VWSaveGame" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVWSaveGame_Statics::NewProp_SelectedLoadout = { "SelectedLoadout", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWSaveGame, SelectedLoadout), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::NewProp_SelectedLoadout_MetaData), Z_Construct_UClass_UVWSaveGame_Statics::NewProp_SelectedLoadout_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts_Inner = { "Loadouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLoadout, METADATA_PARAMS(0, nullptr) }; // 2405654126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts_MetaData[] = {
		{ "Category", "VWSaveGame" },
		{ "ModuleRelativePath", "Private/Background_Infrastructure/VWSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts = { "Loadouts", nullptr, (EPropertyFlags)0x0010000001000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWSaveGame, Loadouts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts_MetaData), Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts_MetaData) }; // 2405654126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWSaveGame_Statics::NewProp_AccountLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWSaveGame_Statics::NewProp_XP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWSaveGame_Statics::NewProp_SelectedLoadout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWSaveGame_Statics::NewProp_Loadouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVWSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWSaveGame_Statics::ClassParams = {
		&UVWSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVWSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVWSaveGame()
	{
		if (!Z_Registration_Info_UClass_UVWSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWSaveGame.OuterSingleton, Z_Construct_UClass_UVWSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVWSaveGame.OuterSingleton;
	}
	template<> VOIDWRECK_API UClass* StaticClass<UVWSaveGame>()
	{
		return UVWSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVWSaveGame);
	UVWSaveGame::~UVWSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics::ScriptStructInfo[] = {
		{ FSavedAttachmentOptions::StaticStruct, Z_Construct_UScriptStruct_FSavedAttachmentOptions_Statics::NewStructOps, TEXT("SavedAttachmentOptions"), &Z_Registration_Info_UScriptStruct_SavedAttachmentOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedAttachmentOptions), 1936707846U) },
		{ FSavedAttachmentSlotOptions::StaticStruct, Z_Construct_UScriptStruct_FSavedAttachmentSlotOptions_Statics::NewStructOps, TEXT("SavedAttachmentSlotOptions"), &Z_Registration_Info_UScriptStruct_SavedAttachmentSlotOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedAttachmentSlotOptions), 3235687538U) },
		{ FSavedEquipmentOptions::StaticStruct, Z_Construct_UScriptStruct_FSavedEquipmentOptions_Statics::NewStructOps, TEXT("SavedEquipmentOptions"), &Z_Registration_Info_UScriptStruct_SavedEquipmentOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedEquipmentOptions), 983181335U) },
		{ FSavedEquipmentSlotOptions::StaticStruct, Z_Construct_UScriptStruct_FSavedEquipmentSlotOptions_Statics::NewStructOps, TEXT("SavedEquipmentSlotOptions"), &Z_Registration_Info_UScriptStruct_SavedEquipmentSlotOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedEquipmentSlotOptions), 1014637470U) },
		{ FEquipmentOptions::StaticStruct, Z_Construct_UScriptStruct_FEquipmentOptions_Statics::NewStructOps, TEXT("EquipmentOptions"), &Z_Registration_Info_UScriptStruct_EquipmentOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEquipmentOptions), 36386593U) },
		{ FLoadout::StaticStruct, Z_Construct_UScriptStruct_FLoadout_Statics::NewStructOps, TEXT("Loadout"), &Z_Registration_Info_UScriptStruct_Loadout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoadout), 2405654126U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVWSaveGame, UVWSaveGame::StaticClass, TEXT("UVWSaveGame"), &Z_Registration_Info_UClass_UVWSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWSaveGame), 4057973257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_200471223(TEXT("/Script/Voidwreck"),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caleb_Documents_Unreal_Projects_Voidwreck_Voidwreck_Source_Voidwreck_Private_Background_Infrastructure_VWSaveGame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
