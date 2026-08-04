// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/VWUserWidget.h"
#include "VWEquipmentMenu.generated.h"

class UVWAttachmentStoreButton;
class UVWEquipment;
class UVWAttachmentButton;
class UScrollBox;
/**
 * 
 */
UCLASS()
class UVWEquipmentMenu : public UVWUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY()
	class AVWEquipmentMenuViewer* EquipmentMenuViewer;

	UPROPERTY()
	UVWEquipment* CurrentEquipment;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* AttachmentScrollBox;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* AttachmentStoreScrollBox;

	UFUNCTION()
	void SetupAttachmentButtons();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentButton> AttachmentButtonClass;

	UFUNCTION()
	void OpenAttachmentStore(int32 AttachmentIndex);

	TArray<FPrimaryAssetId> StoreAttachmentsToLoad;
	
	UFUNCTION()
	void AttachmentStoreLoadedCallback();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentStoreButton> AttachmentStoreButtonClass;
	
};
