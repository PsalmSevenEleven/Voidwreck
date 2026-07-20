// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/VWUserWidget.h"
#include "VWEquipmentMenu.generated.h"

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

	UPROPERTY(meta = (BindWidget))
	UScrollBox* ScrollBox;
	
};
