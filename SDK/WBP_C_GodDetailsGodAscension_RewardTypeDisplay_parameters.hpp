﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodDetailsGodAscension_RewardTypeDisplay

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function WBP_C_GodDetailsGodAscension_RewardTypeDisplay.WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C.SetDisplayItem
// 0x0018 (0x0018 - 0x0000)
struct WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem final
{
public:
	class UHWInventoryItem*                       InventoryItem;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWCollectionItem*                      K2Node_DynamicCast_AsHWCollection_Item;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem) == 0x000008, "Wrong alignment on WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem");
static_assert(sizeof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem) == 0x000018, "Wrong size on WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem");
static_assert(offsetof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem, InventoryItem) == 0x000000, "Member 'WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem::InventoryItem' has a wrong offset!");
static_assert(offsetof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem, K2Node_DynamicCast_AsHWCollection_Item) == 0x000008, "Member 'WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem::K2Node_DynamicCast_AsHWCollection_Item' has a wrong offset!");
static_assert(offsetof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_C_GodDetailsGodAscension_RewardTypeDisplay.WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C.SetDisplayRarity
// 0x0008 (0x0008 - 0x0000)
struct WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity final
{
public:
	struct FGameplayTag                           RarityTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity) == 0x000004, "Wrong alignment on WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity");
static_assert(sizeof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity) == 0x000008, "Wrong size on WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity");
static_assert(offsetof(WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity, RarityTag) == 0x000000, "Member 'WBP_C_GodDetailsGodAscension_RewardTypeDisplay_C_SetDisplayRarity::RarityTag' has a wrong offset!");

}

