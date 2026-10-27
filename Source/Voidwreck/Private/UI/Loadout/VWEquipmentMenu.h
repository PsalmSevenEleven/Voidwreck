// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VWAttachmentOptionsWidget.h"
#include "UI/VWUserWidget.h"
#include "VWEquipmentMenu.generated.h"

class UVWEquipmentAttachment;
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

	UPROPERTY(meta = (BindWidget))
	UScrollBox* AttachmentOptionsScrollBox;

	UFUNCTION()
	void SetupAttachmentButtons();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentButton> AttachmentButtonClass;

	UFUNCTION()
	void OpenAttachmentStore(int32 AttachmentSlotIndex);

	UPROPERTY()
	uint8 CurrentAttachmentSlotIndex;

	TArray<FPrimaryAssetId> StoreAttachmentsToLoad;
	
	UFUNCTION()
	void AttachmentStoreLoadedCallback(int32 SlotIndex);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentStoreButton> AttachmentStoreButtonClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UVWAttachmentOptionsWidget> AttachmentOptionWidgetClass;

	UFUNCTION()
	void SelectAttachment(int32 AttachmentSlot, int32 AttachmentIndex, UVWEquipmentAttachment* Attachment);

	UFUNCTION()
	void ScalarValueChanged(uint8 Value, uint8 StartIndex);

	UFUNCTION()
	void Vector2ValueChanged(FVector2D Value, uint8 StartIndex);

	UFUNCTION()
	void Vector3ValueChanged(FVector Value, uint8 StartIndex);

	UFUNCTION()
	void AssetListSelectonChanged(uint8 Selection, uint8 StartIndex);
	
};
