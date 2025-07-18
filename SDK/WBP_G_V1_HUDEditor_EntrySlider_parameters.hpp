﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V1_HUDEditor_EntrySlider

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_BndEvt__WBP_G_V1_HUDEditor_EntrySlider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.DisplayFieldName
// 0x0018 (0x0018 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName final
{
public:
	class FText                                   FieldName;                                         // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName) == 0x000018, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName, FieldName) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplayFieldName::FieldName' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.DisplaySliderLimits
// 0x0040 (0x0040 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits final
{
public:
	float                                         Min;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_MaxVal_ImplicitCast;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Option_0_ImplicitCast;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_VariableSet_MinVal_ImplicitCast;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits) == 0x000040, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, Min) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::Min' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, Max) == 0x000004, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::Max' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, Temp_bool_Variable) == 0x000008, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, Temp_real_Variable) == 0x00000C, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, K2Node_Select_Default) == 0x000024, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, K2Node_VariableSet_MaxVal_ImplicitCast) == 0x000028, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::K2Node_VariableSet_MaxVal_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, K2Node_Select_Option_0_ImplicitCast) == 0x000030, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits, K2Node_VariableSet_MinVal_ImplicitCast) == 0x000038, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderLimits::K2Node_VariableSet_MinVal_ImplicitCast' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.DisplaySliderValue
// 0x0040 (0x0040 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Option_0_ImplicitCast;               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue) == 0x000040, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, Value) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::Value' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, Temp_real_Variable) == 0x000004, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, Temp_bool_Variable) == 0x000008, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, K2Node_Select_Default) == 0x000028, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue, K2Node_Select_Option_0_ImplicitCast) == 0x000038, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_DisplaySliderValue::K2Node_Select_Option_0_ImplicitCast' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider
// 0x0030 (0x0030 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetCustomFieldValue_Value_ImplicitCast;   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider) == 0x000030, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, EntryPoint) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, K2Node_ComponentBoundEvent_Value) == 0x000004, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000018, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider, CallFunc_SetCustomFieldValue_Value_ImplicitCast) == 0x000028, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_ExecuteUbergraph_WBP_G_V1_HUDEditor_EntrySlider::CallFunc_SetCustomFieldValue_Value_ImplicitCast' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.HandleSliderNavigation
// 0x0060 (0x0060 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EUINavigation                                 Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Max_ImplicitCast;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Min_ImplicitCast;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetValue_InValue_ImplicitCast;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation) == 0x000060, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Navigation_0) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, ReturnValue) == 0x000008, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_byte_Variable) == 0x000010, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable) == 0x000011, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable_1) == 0x000012, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable_2) == 0x000013, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable_3) == 0x000014, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable_4) == 0x000015, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable_5) == 0x000016, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, Temp_bool_Variable_6) == 0x000017, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, K2Node_Select_Default) == 0x000018, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_GetValue_ReturnValue) == 0x000028, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_FClamp_ReturnValue) == 0x000038, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_FClamp_Max_ImplicitCast) == 0x000040, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_FClamp_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000048, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_FClamp_Min_ImplicitCast) == 0x000050, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_FClamp_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation, CallFunc_SetValue_InValue_ImplicitCast) == 0x000058, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_HandleSliderNavigation::CallFunc_SetValue_InValue_ImplicitCast' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_G_V1_HUDEditor_EntrySlider.WBP_G_V1_HUDEditor_EntrySlider_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_G_V1_HUDEditor_EntrySlider_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

