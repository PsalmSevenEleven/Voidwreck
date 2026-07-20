// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VWLoadoutEquipmentList.h"
#include "Background_Infrastructure/VWSaveGame.h"
#include "Player/Equipment/VWEquipment.h"
#include "UI/VWUserWidget.h"
#include "VWLoadoutWidget.generated.h"



class UVWSaveGame;
class UVWLoadoutEquipmentButton;
class UThrobber;
class AVWCharacterMenuViewer;
class AVWEquipmentMenuViewer;
/**
 * 
 */


UCLASS()
class UVWLoadoutWidget : public UVWUserWidget
{
	GENERATED_BODY()

protected:
#pragma region UI Elements

#pragma region Depot Buttons
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* HeadSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* EyesSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* FaceSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* TorsoSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* ArmsSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* LegsSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* FeetSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* BackSlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* PrimarySlotButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVWLoadoutEquipmentButton* SecondarySlotButton;
	
#pragma endregion
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UThrobber* LoadingThrobber;
	
#pragma endregion

	//Which of the saved loadouts we're currently editing
	UPROPERTY(BlueprintReadWrite)
	FLoadout CurrentLoadout;

	TArray<FPrimaryAssetId> EquipmentToLoad;
	TArray<FPrimaryAssetId> AttachmentsToLoad;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UVWLoadoutEquipmentList* EquipmentDA; 
	
	
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	AVWCharacterMenuViewer* CharacterMenuViewer;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	AVWEquipmentMenuViewer* EquipmentMenuViewer;
	
	TArray<FPrimaryAssetId> AttachmentsForEquipmentViewer;
	
	UFUNCTION()
	void SetupEquipmentMenuViewer(EEquipmentSlot InEquipmentSlot);

	void EquipmentViewerAttachmentsLoadedCallback();

	
	

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	UFUNCTION(BlueprintCallable)
	void LoadLoadout();

	virtual void LoadoutEquipmentLoadedCallback();

	virtual void LoadoutAttachmentsLoadedCallback();

public:

	UFUNCTION(BlueprintCallable)
	virtual void InitMenu();

	void ShowEquipmentListForSlot(const EEquipmentSlot& InEquipmentSlot);

	UPROPERTY(BlueprintReadWrite)
	UVWSaveGame* SaveGame;
};
