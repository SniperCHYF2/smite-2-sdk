﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Spec_HUDScoreboard

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_G_Spec_HUDScoreboard.WBP_G_Spec_HUDScoreboard_C.ExecuteUbergraph_WBP_G_Spec_HUDScoreboard
// 0x0030 (0x0030 - 0x0000)
struct WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWScoreboardTeamWidget*                CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUniformGridSlot*                       CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard) == 0x000008, "Wrong alignment on WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard");
static_assert(sizeof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard) == 0x000030, "Wrong size on WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, EntryPoint) == 0x000000, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, Temp_int_Variable) == 0x000008, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, CallFunc_AddChildToUniformGrid_ReturnValue) == 0x000020, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::CallFunc_AddChildToUniformGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_G_Spec_HUDScoreboard_C_ExecuteUbergraph_WBP_G_Spec_HUDScoreboard::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_G_Spec_HUDScoreboard.WBP_G_Spec_HUDScoreboard_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_G_Spec_HUDScoreboard_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Spec_HUDScoreboard_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_G_Spec_HUDScoreboard_C_PreConstruct");
static_assert(sizeof(WBP_G_Spec_HUDScoreboard_C_PreConstruct) == 0x000001, "Wrong size on WBP_G_Spec_HUDScoreboard_C_PreConstruct");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_G_Spec_HUDScoreboard_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_G_Spec_HUDScoreboard.WBP_G_Spec_HUDScoreboard_C.BP_GetDesiredFocusTarget
// 0x0030 (0x0030 - 0x0000)
struct WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonActivatableWidget*               K2Node_DynamicCast_AsCommon_Activatable_Widget;    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget) == 0x000030, "Wrong size on WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget, CallFunc_HasAnyChildren_ReturnValue) == 0x000010, "Member 'WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget, K2Node_DynamicCast_AsCommon_Activatable_Widget) == 0x000018, "Member 'WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget::K2Node_DynamicCast_AsCommon_Activatable_Widget' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget, CallFunc_GetDesiredFocusTarget_ReturnValue) == 0x000028, "Member 'WBP_G_Spec_HUDScoreboard_C_BP_GetDesiredFocusTarget::CallFunc_GetDesiredFocusTarget_ReturnValue' has a wrong offset!");

}

