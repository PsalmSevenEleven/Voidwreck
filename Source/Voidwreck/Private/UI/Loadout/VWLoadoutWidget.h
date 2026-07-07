// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VWLoadoutEquipmentList.h"
#include "Background_Infrastructure/VWSaveGame.h"
#include "Player/Equipment/VWEquipment.h"
#include "UI/VWUserWidget.h"
#include "VWLoadoutWidget.generated.h"


class UVWSaveGame;
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

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UThrobber* LoadingThrobber;
	
#pragma endregion

	//Which of the saved loadouts we're currently editing
	UPROPERTY(BlueprintReadWrite)
	FLoadout CurrentLoadout;
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UVWLoadoutEquipmentList* EquipmentDA; 

	int CharacterViewerMeshIndex = 0;
	
	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	AVWCharacterMenuViewer* CharacterMenuViewer;

	UPROPERTY(BlueprintReadWrite, meta = (ExposeOnSpawn))
	AVWEquipmentMenuViewer* EquipmentMenuViewer;

	UFUNCTION(BlueprintCallable)
	void LoadLoadout();

	void UpdateCharacterViewer();

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	virtual void LoadEquipmentCallback(FPrimaryAssetId AssetId);

public:

	UFUNCTION(BlueprintCallable)
	virtual void InitMenu();

	UPROPERTY(BlueprintReadWrite)
	UVWSaveGame* SaveGame;
};
