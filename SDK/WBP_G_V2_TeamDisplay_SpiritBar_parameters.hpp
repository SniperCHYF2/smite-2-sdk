﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_TeamDisplay_SpiritBar

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_TeamDisplay_SpiritBar.WBP_G_V2_TeamDisplay_SpiritBar_C.AttributeValueChanged
// 0x0060 (0x0060 - 0x0000)
struct WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	float                                         OldValue;                                          // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewValue;                                          // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged) == 0x000008, "Wrong alignment on WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged");
static_assert(sizeof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged) == 0x000060, "Wrong size on WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, Attribute) == 0x000000, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::Attribute' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, OldValue) == 0x000038, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::OldValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, NewValue) == 0x00003C, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::NewValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000040, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue) == 0x000048, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000058, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_AttributeValueChanged::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

// Function WBP_G_V2_TeamDisplay_SpiritBar.WBP_G_V2_TeamDisplay_SpiritBar_C.ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar
// 0x0004 (0x0004 - 0x0000)
struct WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar) == 0x000004, "Wrong alignment on WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar");
static_assert(sizeof(WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar) == 0x000004, "Wrong size on WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar");
static_assert(offsetof(WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar, EntryPoint) == 0x000000, "Member 'WBP_G_V2_TeamDisplay_SpiritBar_C_ExecuteUbergraph_WBP_G_V2_TeamDisplay_SpiritBar::EntryPoint' has a wrong offset!");

}

