﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PrecompiledShaderWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_PrecompiledShaderWidget.WBP_S_PrecompiledShaderWidget_C.UpdateTaskCount
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount final
{
public:
	int32                                         CompletedTaskCount;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalTasks;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount) == 0x000008, "Wrong alignment on WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount");
static_assert(sizeof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount) == 0x0000C0, "Wrong size on WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CompletedTaskCount) == 0x000000, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CompletedTaskCount' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, TotalTasks) == 0x000004, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::TotalTasks' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_Conv_IntToDouble_ReturnValue) == 0x000008, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_Conv_IntToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_Conv_IntToDouble_ReturnValue_1) == 0x000010, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_Conv_IntToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_Conv_DoubleToText_ReturnValue) == 0x000028, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_Conv_DoubleToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, K2Node_MakeArray_Array) == 0x000090, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0000B8, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_S_PrecompiledShaderWidget.WBP_S_PrecompiledShaderWidget_C.UpdatePrecompiledState
// 0x0001 (0x0001 - 0x0000)
struct WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState final
{
public:
	EHWPrecompiledShaderState                     NewState;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState) == 0x000001, "Wrong alignment on WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState");
static_assert(sizeof(WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState) == 0x000001, "Wrong size on WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState, NewState) == 0x000000, "Member 'WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState::NewState' has a wrong offset!");

// Function WBP_S_PrecompiledShaderWidget.WBP_S_PrecompiledShaderWidget_C.ExecuteUbergraph_WBP_S_PrecompiledShaderWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHWPrecompiledShaderState                     K2Node_Event_NewState;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget) == 0x000004, "Wrong alignment on WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget");
static_assert(sizeof(WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget) == 0x000008, "Wrong size on WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget, EntryPoint) == 0x000000, "Member 'WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget, K2Node_Event_NewState) == 0x000004, "Member 'WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget::K2Node_Event_NewState' has a wrong offset!");
static_assert(offsetof(WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

