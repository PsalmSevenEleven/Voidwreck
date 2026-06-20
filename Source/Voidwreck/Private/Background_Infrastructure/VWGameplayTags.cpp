// Fill out your copyright notice in the Description page of Project Settings.


#include "VWGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG(TAG_None, "None")

UE_DEFINE_GAMEPLAY_TAG(TAG_Player, "Player")
#pragma region Player Status

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status, "Player.Status")

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Dead, "Player.Status.Dead")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Downed, "Player.Status.Downed")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Status_Menu, "Player.Status.Menu")

#pragma endregion
#pragma region Player Injuries
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury, "Player.Injury")

UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury_RightArm, "Player.Injury.RightArm")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury_LeftArm, "Player.Injury.LeftArm")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury_RightLeg, "Player.Injury.RightLeg")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury_LeftLeg, "Player.Injury.LeftLeg")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury_Torso, "Player.Injury.Torso")
UE_DEFINE_GAMEPLAY_TAG(TAG_Player_Injury_Head, "Player.Injury.Head")
#pragma endregion

UE_DEFINE_GAMEPLAY_TAG(TAG_Effect, "Effect")
#pragma region Effects

UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Damage, "Effect.Damage")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Heal, "Effect.Heal")
UE_DEFINE_GAMEPLAY_TAG(TAG_Effect_Stun, "Effect.Stun")

#pragma endregion

UE_DEFINE_GAMEPLAY_TAG(TAG_Ability, "Ability")
#pragma region Ability Tags

UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_Firing, "Ability.Firing")
UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_Reload, "Ability.Reload")

#pragma endregion

UE_DEFINE_GAMEPLAY_TAG(TAG_GameMode, "GameMode")
#pragma region GameMode Tags

UE_DEFINE_GAMEPLAY_TAG(TAG_GameMode_Lobby, "GameMode.Lobby")
UE_DEFINE_GAMEPLAY_TAG(TAG_GameMode_Mission, "GameMode.Mission")
UE_DEFINE_GAMEPLAY_TAG(TAG_GameMode_Standby, "GameMode.Standby")

#pragma endregion