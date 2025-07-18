﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_GodBuilder_BuildDisplay_Aspect

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_GodBuilder_BuildDisplay_Aspect.WBP_S_GodBuilder_BuildDisplay_Aspect_C.DisplayInventoryItem
// 0x0018 (0x0018 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem final
{
public:
	const class UHWInventoryItem*                 InventoryItem;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWEquipmentItem*                       K2Node_DynamicCast_AsHWEquipment_Item;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem) == 0x000018, "Wrong size on WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem, InventoryItem) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem::InventoryItem' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem, K2Node_DynamicCast_AsHWEquipment_Item) == 0x000008, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem::K2Node_DynamicCast_AsHWEquipment_Item' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_DisplayInventoryItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay_Aspect.WBP_S_GodBuilder_BuildDisplay_Aspect_C.EquippedStateUpdated
// 0x0028 (0x0028 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated final
{
public:
	bool                                          bIsEquipped;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated) == 0x000028, "Wrong size on WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated, bIsEquipped) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated::bIsEquipped' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated, CallFunc_SelectColor_ReturnValue) == 0x000008, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000020, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_EquippedStateUpdated::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay_Aspect.WBP_S_GodBuilder_BuildDisplay_Aspect_C.ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect) == 0x000004, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect) == 0x000008, "Wrong size on WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect, EntryPoint) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_ExecuteUbergraph_WBP_S_GodBuilder_BuildDisplay_Aspect::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay_Aspect.WBP_S_GodBuilder_BuildDisplay_Aspect_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct) == 0x000001, "Wrong size on WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_S_GodBuilder_BuildDisplay_Aspect.WBP_S_GodBuilder_BuildDisplay_Aspect_C.SetShowAspectName
// 0x0005 (0x0005 - 0x0000)
struct WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName final
{
public:
	bool                                          bInShowAspectName;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName) == 0x000001, "Wrong alignment on WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName");
static_assert(sizeof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName) == 0x000005, "Wrong size on WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName, bInShowAspectName) == 0x000000, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName::bInShowAspectName' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName, Temp_bool_Variable) == 0x000001, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName, Temp_byte_Variable) == 0x000002, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName, K2Node_Select_Default) == 0x000004, "Member 'WBP_S_GodBuilder_BuildDisplay_Aspect_C_SetShowAspectName::K2Node_Select_Default' has a wrong offset!");

}

