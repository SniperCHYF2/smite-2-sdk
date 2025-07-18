﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_TPFX

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABP_TPFX.ABP_TPFX_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_TPFX_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_TPFX_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_TPFX_C_AnimGraph");
static_assert(sizeof(ABP_TPFX_C_AnimGraph) == 0x000010, "Wrong size on ABP_TPFX_C_AnimGraph");
static_assert(offsetof(ABP_TPFX_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_TPFX_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.BlueprintThreadSafeUpdateAnimation
// 0x0028 (0x0028 - 0x0000)
struct ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_CalcElapsedTime_DeltaTime_ImplicitCast;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CalcLean_DeltaTime_ImplicitCast;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_CalcRoll_DeltaTime_ImplicitCast;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Calc_Jet_Flight_Controls_DeltaTime_ImplicitCast; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation) == 0x000008, "Wrong alignment on ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation");
static_assert(sizeof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation) == 0x000028, "Wrong size on ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation");
static_assert(offsetof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation, DeltaTime) == 0x000000, "Member 'ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation, CallFunc_CalcElapsedTime_DeltaTime_ImplicitCast) == 0x000008, "Member 'ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation::CallFunc_CalcElapsedTime_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation, CallFunc_CalcLean_DeltaTime_ImplicitCast) == 0x000010, "Member 'ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation::CallFunc_CalcLean_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation, CallFunc_CalcRoll_DeltaTime_ImplicitCast) == 0x000018, "Member 'ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation::CallFunc_CalcRoll_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation, CallFunc_Calc_Jet_Flight_Controls_DeltaTime_ImplicitCast) == 0x000020, "Member 'ABP_TPFX_C_BlueprintThreadSafeUpdateAnimation::CallFunc_Calc_Jet_Flight_Controls_DeltaTime_ImplicitCast' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ABP_TPFX_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ABP_TPFX_C_BlueprintUpdateAnimation");
static_assert(sizeof(ABP_TPFX_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ABP_TPFX_C_BlueprintUpdateAnimation");
static_assert(offsetof(ABP_TPFX_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ABP_TPFX_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.Calc Jet Flight Controls
// 0x0040 (0x0040 - 0x0000)
struct ABP_TPFX_C_Calc_Jet_Flight_Controls final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue;   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Target_ImplicitCast;            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_JetYaw_ImplicitCast;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_Calc_Jet_Flight_Controls) == 0x000008, "Wrong alignment on ABP_TPFX_C_Calc_Jet_Flight_Controls");
static_assert(sizeof(ABP_TPFX_C_Calc_Jet_Flight_Controls) == 0x000040, "Wrong size on ABP_TPFX_C_Calc_Jet_Flight_Controls");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, DeltaTime) == 0x000000, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, CallFunc_FInterpTo_ReturnValue) == 0x000008, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue) == 0x000010, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::CallFunc_K2_MakePerlinNoiseAndRemap_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000018, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, CallFunc_FInterpTo_Target_ImplicitCast) == 0x000020, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::CallFunc_FInterpTo_Target_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast) == 0x000028, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::CallFunc_K2_MakePerlinNoiseAndRemap_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_Calc_Jet_Flight_Controls, K2Node_VariableSet_JetYaw_ImplicitCast) == 0x000038, "Member 'ABP_TPFX_C_Calc_Jet_Flight_Controls::K2Node_VariableSet_JetYaw_ImplicitCast' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.CalcElapsedTime
// 0x0010 (0x0010 - 0x0000)
struct ABP_TPFX_C_CalcElapsedTime final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_CalcElapsedTime) == 0x000008, "Wrong alignment on ABP_TPFX_C_CalcElapsedTime");
static_assert(sizeof(ABP_TPFX_C_CalcElapsedTime) == 0x000010, "Wrong size on ABP_TPFX_C_CalcElapsedTime");
static_assert(offsetof(ABP_TPFX_C_CalcElapsedTime, DeltaTime) == 0x000000, "Member 'ABP_TPFX_C_CalcElapsedTime::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcElapsedTime, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000008, "Member 'ABP_TPFX_C_CalcElapsedTime::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.CalcLean
// 0x0080 (0x0080 - 0x0000)
struct ABP_TPFX_C_CalcLean final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_FClamp_Value_ImplicitCast;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_CalcLean) == 0x000008, "Wrong alignment on ABP_TPFX_C_CalcLean");
static_assert(sizeof(ABP_TPFX_C_CalcLean) == 0x000080, "Wrong size on ABP_TPFX_C_CalcLean");
static_assert(offsetof(ABP_TPFX_C_CalcLean, DeltaTime) == 0x000000, "Member 'ABP_TPFX_C_CalcLean::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_BreakRotator_Roll) == 0x000008, "Member 'ABP_TPFX_C_CalcLean::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_BreakRotator_Pitch) == 0x00000C, "Member 'ABP_TPFX_C_CalcLean::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_BreakRotator_Yaw) == 0x000010, "Member 'ABP_TPFX_C_CalcLean::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'ABP_TPFX_C_CalcLean::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_FInterpTo_ReturnValue) == 0x000020, "Member 'ABP_TPFX_C_CalcLean::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_MakeRotator_ReturnValue) == 0x000028, "Member 'ABP_TPFX_C_CalcLean::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x000040, "Member 'ABP_TPFX_C_CalcLean::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_ComposeRotators_ReturnValue) == 0x000058, "Member 'ABP_TPFX_C_CalcLean::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_FClamp_Value_ImplicitCast) == 0x000070, "Member 'ABP_TPFX_C_CalcLean::CallFunc_FClamp_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcLean, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000078, "Member 'ABP_TPFX_C_CalcLean::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.CalcRoll
// 0x0068 (0x0068 - 0x0000)
struct ABP_TPFX_C_CalcRoll final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_HeadingAngle_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Vector_HeadingAngle_ReturnValue_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue;                    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_ReturnValue_1;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Current_ImplicitCast;           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Abs_A_ImplicitCast;                       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_RootRoll_ImplicitCast;          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_CalcRoll) == 0x000008, "Wrong alignment on ABP_TPFX_C_CalcRoll");
static_assert(sizeof(ABP_TPFX_C_CalcRoll) == 0x000068, "Wrong size on ABP_TPFX_C_CalcRoll");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, DeltaTime) == 0x000000, "Member 'ABP_TPFX_C_CalcRoll::DeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_Vector_HeadingAngle_ReturnValue) == 0x000008, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_Vector_HeadingAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_Abs_ReturnValue) == 0x000010, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_MapRangeClamped_ReturnValue) == 0x000018, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_Vector_HeadingAngle_ReturnValue_1) == 0x000020, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_Vector_HeadingAngle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_FInterpTo_ReturnValue) == 0x000028, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000038, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_MapRangeClamped_ReturnValue_1) == 0x000040, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_MapRangeClamped_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_FInterpTo_ReturnValue_1) == 0x000048, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_FInterpTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_FInterpTo_Current_ImplicitCast) == 0x000050, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_FInterpTo_Current_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, CallFunc_Abs_A_ImplicitCast) == 0x000058, "Member 'ABP_TPFX_C_CalcRoll::CallFunc_Abs_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_CalcRoll, K2Node_VariableSet_RootRoll_ImplicitCast) == 0x000060, "Member 'ABP_TPFX_C_CalcRoll::K2Node_VariableSet_RootRoll_ImplicitCast' has a wrong offset!");

// Function ABP_TPFX.ABP_TPFX_C.ExecuteUbergraph_ABP_TPFX
// 0x0008 (0x0008 - 0x0000)
struct ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX) == 0x000004, "Wrong alignment on ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX");
static_assert(sizeof(ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX) == 0x000008, "Wrong size on ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX");
static_assert(offsetof(ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX, EntryPoint) == 0x000000, "Member 'ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ABP_TPFX_C_ExecuteUbergraph_ABP_TPFX::K2Node_Event_DeltaTimeX' has a wrong offset!");

}

