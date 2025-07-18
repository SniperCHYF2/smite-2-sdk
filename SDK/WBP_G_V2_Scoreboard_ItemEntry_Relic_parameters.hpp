﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_Scoreboard_ItemEntry_Relic

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_Scoreboard_ItemEntry_Relic.WBP_G_V2_Scoreboard_ItemEntry_Relic_C.DisplayAmmo
// 0x000C (0x000C - 0x0000)
struct WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo final
{
public:
	int32                                         AmmoCount;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasEnough;                                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxCount;                                          // 0x0008(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo) == 0x000004, "Wrong alignment on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo");
static_assert(sizeof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo) == 0x00000C, "Wrong size on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo, AmmoCount) == 0x000000, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo::AmmoCount' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo, bHasEnough) == 0x000004, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo::bHasEnough' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo, MaxCount) == 0x000008, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayAmmo::MaxCount' has a wrong offset!");

// Function WBP_G_V2_Scoreboard_ItemEntry_Relic.WBP_G_V2_Scoreboard_ItemEntry_Relic_C.DisplayEquipment
// 0x0018 (0x0018 - 0x0000)
struct WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment final
{
public:
	const class UHWEquipmentItem*                 EquipmentInfo;                                     // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment) == 0x000008, "Wrong alignment on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment");
static_assert(sizeof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment) == 0x000018, "Wrong size on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment, EquipmentInfo) == 0x000000, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment::EquipmentInfo' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayEquipment::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function WBP_G_V2_Scoreboard_ItemEntry_Relic.WBP_G_V2_Scoreboard_ItemEntry_Relic_C.DisplayStackCount
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount final
{
public:
	int32                                         StackCount;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxStackCount;                                     // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount) == 0x000004, "Wrong alignment on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount");
static_assert(sizeof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount) == 0x000008, "Wrong size on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount, StackCount) == 0x000000, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount::StackCount' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount, MaxStackCount) == 0x000004, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_DisplayStackCount::MaxStackCount' has a wrong offset!");

// Function WBP_G_V2_Scoreboard_ItemEntry_Relic.WBP_G_V2_Scoreboard_ItemEntry_Relic_C.ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_AmmoCount;                            // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bHasEnough;                           // 0x0008(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MaxCount;                             // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	int32                                         K2Node_Event_StackCount;                           // 0x00A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_MaxStackCount;                        // 0x00AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00B8(0x0018)()
};
static_assert(alignof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic) == 0x000008, "Wrong alignment on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic");
static_assert(sizeof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic) == 0x0000D0, "Wrong size on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, EntryPoint) == 0x000000, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_Event_AmmoCount) == 0x000004, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_Event_AmmoCount' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_Event_bHasEnough) == 0x000008, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_Event_bHasEnough' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_Event_MaxCount) == 0x00000C, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_Event_MaxCount' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_MakeArray_Array) == 0x000080, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, CallFunc_Format_ReturnValue) == 0x000090, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_Event_StackCount) == 0x0000A8, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_Event_StackCount' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, K2Node_Event_MaxStackCount) == 0x0000AC, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::K2Node_Event_MaxStackCount' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000B0, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000B8, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_ItemEntry_Relic::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");

// Function WBP_G_V2_Scoreboard_ItemEntry_Relic.WBP_G_V2_Scoreboard_ItemEntry_Relic_C.HoverStyling
// 0x0009 (0x0009 - 0x0000)
struct WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling final
{
public:
	bool                                          bHovered;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling) == 0x000001, "Wrong alignment on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling");
static_assert(sizeof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling) == 0x000009, "Wrong size on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, bHovered) == 0x000000, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::bHovered' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, Temp_byte_Variable) == 0x000001, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, Temp_bool_Variable) == 0x000003, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, Temp_byte_Variable_2) == 0x000004, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, Temp_byte_Variable_3) == 0x000005, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, Temp_bool_Variable_1) == 0x000006, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, K2Node_Select_Default) == 0x000007, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling, K2Node_Select_Default_1) == 0x000008, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_HoverStyling::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_G_V2_Scoreboard_ItemEntry_Relic.WBP_G_V2_Scoreboard_ItemEntry_Relic_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_G_V2_Scoreboard_ItemEntry_Relic_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

