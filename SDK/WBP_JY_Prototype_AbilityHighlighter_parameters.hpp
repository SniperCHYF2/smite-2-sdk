﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_JY_Prototype_AbilityHighlighter

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_JY_Prototype_AbilityHighlighter.WBP_JY_Prototype_AbilityHighlighter_C.HighlightAbility
// 0x0030 (0x0030 - 0x0000)
struct WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility final
{
public:
	int32                                         Pulse_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility) == 0x000008, "Wrong alignment on WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility");
static_assert(sizeof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility) == 0x000030, "Wrong size on WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility, Pulse_0) == 0x000000, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility::Pulse_0' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility, CallFunc_GetEndTime_ReturnValue) == 0x000018, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_HighlightAbility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_JY_Prototype_AbilityHighlighter.WBP_JY_Prototype_AbilityHighlighter_C.PointDownAbility
// 0x0050 (0x0050 - 0x0000)
struct WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility final
{
public:
	int32                                         LoopCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility) == 0x000008, "Wrong alignment on WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility");
static_assert(sizeof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility) == 0x000050, "Wrong size on WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, LoopCount) == 0x000000, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::LoopCount' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000018, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_GetEndTime_ReturnValue) == 0x000020, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000038, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000048, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PointDownAbility::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function WBP_JY_Prototype_AbilityHighlighter.WBP_JY_Prototype_AbilityHighlighter_C.PulseAbilityHighlighter
// 0x0048 (0x0048 - 0x0000)
struct WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter final
{
public:
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter) == 0x000008, "Wrong alignment on WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter");
static_assert(sizeof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter) == 0x000048, "Wrong size on WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000000, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_GetEndTime_ReturnValue) == 0x000008, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000038, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000040, "Member 'WBP_JY_Prototype_AbilityHighlighter_C_PulseAbilityHighlighter::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}

