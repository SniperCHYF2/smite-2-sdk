﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NPE_Waypoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Hemingway_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_NPE_Waypoint.BP_NPE_Waypoint_C.ExecuteUbergraph_BP_NPE_Waypoint
// 0x0018 (0x0018 - 0x0000)
struct BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharacterRole                                K2Node_CustomEvent_NewRole;                        // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_CustomEvent_NewTargetMatchTime;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGenericTeamId                         K2Node_MakeStruct_GenericTeamId;                   // 0x0011(0x0001)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint) == 0x000008, "Wrong alignment on BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint");
static_assert(sizeof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint) == 0x000018, "Wrong size on BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, EntryPoint) == 0x000000, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, Temp_bool_Variable) == 0x000004, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, K2Node_CustomEvent_NewRole) == 0x000006, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::K2Node_CustomEvent_NewRole' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, CallFunc_Not_PreBool_ReturnValue_1) == 0x000007, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, K2Node_CustomEvent_NewTargetMatchTime) == 0x000008, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::K2Node_CustomEvent_NewTargetMatchTime' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint, K2Node_MakeStruct_GenericTeamId) == 0x000011, "Member 'BP_NPE_Waypoint_C_ExecuteUbergraph_BP_NPE_Waypoint::K2Node_MakeStruct_GenericTeamId' has a wrong offset!");

// Function BP_NPE_Waypoint.BP_NPE_Waypoint_C.RestartTimer
// 0x0008 (0x0008 - 0x0000)
struct BP_NPE_Waypoint_C_RestartTimer final
{
public:
	double                                        NewTargetMatchTime;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPE_Waypoint_C_RestartTimer) == 0x000008, "Wrong alignment on BP_NPE_Waypoint_C_RestartTimer");
static_assert(sizeof(BP_NPE_Waypoint_C_RestartTimer) == 0x000008, "Wrong size on BP_NPE_Waypoint_C_RestartTimer");
static_assert(offsetof(BP_NPE_Waypoint_C_RestartTimer, NewTargetMatchTime) == 0x000000, "Member 'BP_NPE_Waypoint_C_RestartTimer::NewTargetMatchTime' has a wrong offset!");

// Function BP_NPE_Waypoint.BP_NPE_Waypoint_C.SetWaypointRole
// 0x0001 (0x0001 - 0x0000)
struct BP_NPE_Waypoint_C_SetWaypointRole final
{
public:
	ECharacterRole                                NewRole;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPE_Waypoint_C_SetWaypointRole) == 0x000001, "Wrong alignment on BP_NPE_Waypoint_C_SetWaypointRole");
static_assert(sizeof(BP_NPE_Waypoint_C_SetWaypointRole) == 0x000001, "Wrong size on BP_NPE_Waypoint_C_SetWaypointRole");
static_assert(offsetof(BP_NPE_Waypoint_C_SetWaypointRole, NewRole) == 0x000000, "Member 'BP_NPE_Waypoint_C_SetWaypointRole::NewRole' has a wrong offset!");

// Function BP_NPE_Waypoint.BP_NPE_Waypoint_C.TickTimer
// 0x00C8 (0x00C8 - 0x0000)
struct BP_NPE_Waypoint_C_TickTimer final
{
public:
	double                                        CurrentSetupTime;                                  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AHWGameState*                           CallFunc_GetHWGameState_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWGameState*                           CallFunc_GetHWGameState_ReturnValue_1;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPhaseDuration_ReturnValue;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetCurrentGamePhaseTag_ReturnValue;       // 0x0034(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCurrentPhaseElapsedTime_ReturnValue;   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWGameState*                           CallFunc_GetHWGameState_ReturnValue_2;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPhaseElapsedTime_ReturnValue_1; // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2;   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NPE_Waypoint_C_TickTimer) == 0x000008, "Wrong alignment on BP_NPE_Waypoint_C_TickTimer");
static_assert(sizeof(BP_NPE_Waypoint_C_TickTimer) == 0x0000C8, "Wrong size on BP_NPE_Waypoint_C_TickTimer");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CurrentSetupTime) == 0x000000, "Member 'BP_NPE_Waypoint_C_TickTimer::CurrentSetupTime' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_NPE_Waypoint_C_TickTimer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetHWGameState_ReturnValue) == 0x000020, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetHWGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetHWGameState_ReturnValue_1) == 0x000028, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetHWGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetCurrentPhaseDuration_ReturnValue) == 0x000030, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetCurrentPhaseDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetCurrentGamePhaseTag_ReturnValue) == 0x000034, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetCurrentGamePhaseTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000048, "Member 'BP_NPE_Waypoint_C_TickTimer::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetCurrentPhaseElapsedTime_ReturnValue) == 0x00004C, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetCurrentPhaseElapsedTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'BP_NPE_Waypoint_C_TickTimer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000060, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000068, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000070, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetHWGameState_ReturnValue_2) == 0x000080, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetHWGameState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_GetCurrentPhaseElapsedTime_ReturnValue_1) == 0x000088, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_GetCurrentPhaseElapsedTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x000090, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000098, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0000A0, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0000A8, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0000B0, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0000B8, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_NPE_Waypoint_C_TickTimer, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2) == 0x0000C0, "Member 'BP_NPE_Waypoint_C_TickTimer::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");

}

