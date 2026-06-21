// Fill out your copyright notice in the Description page of Project Settings.


#include "VWUserWidget.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/PlayerState.h"

void UVWUserWidget::BackOut()
{
	//If there isn't a parent widget we know that this is the top of the hierarchy,
	//so we back out of the menu entirely
	if(!Parent)
	{
		
		UAbilitySystemBlueprintLibrary::RemoveLooseGameplayTags(GetOwningPlayer()->GetPlayerState<APlayerState>(), FGameplayTagContainer(FGameplayTag::RequestGameplayTag("Player.Status.Menu")));
		GetOwningPlayer()->SetInputMode(FInputModeGameOnly());
		GetOwningPlayer()->SetShowMouseCursor(false);
	}
	//Otherwise we show the parent
	else
	{
		Parent->SetVisibility(ESlateVisibility::Visible);
	}

	//TODO - likely going to change this from destroying to just hiding the widget,
	//I'm 90% sure it's more expensive to create/destroy a widget than to show/hide one
	RemoveFromParent();
}
