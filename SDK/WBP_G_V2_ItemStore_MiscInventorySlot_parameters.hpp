﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_ItemStore_MiscInventorySlot

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_ItemStore_MiscInventorySlot.WBP_G_V2_ItemStore_MiscInventorySlot_C.EquipmentWidgetAdded
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded final
{
public:
	class UHWInventoryEquipmentWidget*            AddedEquipmentWidget;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded");
static_assert(sizeof(WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded) == 0x000008, "Wrong size on WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded, AddedEquipmentWidget) == 0x000000, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetAdded::AddedEquipmentWidget' has a wrong offset!");

// Function WBP_G_V2_ItemStore_MiscInventorySlot.WBP_G_V2_ItemStore_MiscInventorySlot_C.EquipmentWidgetRemoved
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved final
{
public:
	class UHWInventoryEquipmentWidget*            RemovedEquipmentWidget;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved");
static_assert(sizeof(WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved) == 0x000008, "Wrong size on WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved, RemovedEquipmentWidget) == 0x000000, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_EquipmentWidgetRemoved::RemovedEquipmentWidget' has a wrong offset!");

// Function WBP_G_V2_ItemStore_MiscInventorySlot.WBP_G_V2_ItemStore_MiscInventorySlot_C.BP_GetDesiredFocusTarget
// 0x0028 (0x0028 - 0x0000)
struct WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*               K2Node_DynamicCast_AsCommon_Activatable_Widget;    // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget) == 0x000028, "Wrong size on WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget, K2Node_DynamicCast_AsCommon_Activatable_Widget) == 0x000010, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget::K2Node_DynamicCast_AsCommon_Activatable_Widget' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget, CallFunc_GetDesiredFocusTarget_ReturnValue) == 0x000020, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_BP_GetDesiredFocusTarget::CallFunc_GetDesiredFocusTarget_ReturnValue' has a wrong offset!");

// Function WBP_G_V2_ItemStore_MiscInventorySlot.WBP_G_V2_ItemStore_MiscInventorySlot_C.GetNavigationStitchEntry
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry final
{
public:
	class UPanelWidget*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry");
static_assert(sizeof(WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry) == 0x000008, "Wrong size on WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry");
static_assert(offsetof(WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry, ReturnValue) == 0x000000, "Member 'WBP_G_V2_ItemStore_MiscInventorySlot_C_GetNavigationStitchEntry::ReturnValue' has a wrong offset!");

}

