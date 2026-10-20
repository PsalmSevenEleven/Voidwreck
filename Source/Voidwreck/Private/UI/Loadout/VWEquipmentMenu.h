// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/VWUserWidget.h"
#include "VWEquipmentMenu.generated.h"

class UVWLoadoutWidget;
class UVWSaveGame;
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
	UVWLoadoutWidget* LoadoutWidget;

	UPROPERTY()
	int32 CurrentLoadoutIndex;

	UPROPERTY()
	UVWEquipment* CurrentEquipment;

	UPROPERTY()
	class AVWEquipmentMenuViewer* EquipmentMenuViewer;

	

	UPROPERTY(meta = (BindWidget))
	UScrollBox* AttachmentScrollBox;

	UPROPERTY(meta = (BindWidget))
	UScrollBox* AttachmentStoreScrollBox;

	UFUNCTION()
	void SetupAttachmentButtons();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentButton> AttachmentButtonClass;

	UFUNCTION()
	void OpenAttachmentStore(int32 AttachmentSlotIndex);

	TArray<FPrimaryAssetId> StoreAttachmentsToLoad;
	
	UFUNCTION()
	void AttachmentStoreLoadedCallback(int32 SlotIndex);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentStoreButton> AttachmentStoreButtonClass;

	UFUNCTION()
	void SelectAttachment(int32 AttachmentSlot, int32 AttachmentIndex);
	
};
