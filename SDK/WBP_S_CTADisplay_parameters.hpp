﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_CTADisplay

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "HemingwayUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_CTADisplay.WBP_S_CTADisplay_C.CTAStateUpdated
// 0x0018 (0x0018 - 0x0000)
struct WBP_S_CTADisplay_C_CTAStateUpdated final
{
public:
	bool                                          bIsCTAActive;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHWCallToActionListenType                     Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCTAActive_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_CTADisplay_C_CTAStateUpdated) == 0x000008, "Wrong alignment on WBP_S_CTADisplay_C_CTAStateUpdated");
static_assert(sizeof(WBP_S_CTADisplay_C_CTAStateUpdated) == 0x000018, "Wrong size on WBP_S_CTADisplay_C_CTAStateUpdated");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, bIsCTAActive) == 0x000000, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::bIsCTAActive' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_byte_Variable) == 0x000001, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_byte_Variable_2) == 0x000003, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_byte_Variable_3) == 0x000004, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_bool_Variable) == 0x000005, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_byte_Variable_4) == 0x000006, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, Temp_byte_Variable_5) == 0x000007, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, K2Node_Select_Default) == 0x000008, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, K2Node_Select_Default_1) == 0x000009, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, CallFunc_IsCTAActive_ReturnValue) == 0x00000B, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::CallFunc_IsCTAActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, CallFunc_BooleanAND_ReturnValue) == 0x00000C, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_CTAStateUpdated, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_S_CTADisplay_C_CTAStateUpdated::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_S_CTADisplay.WBP_S_CTADisplay_C.HandleCTAActiveChildrenCountChanged
// 0x0028 (0x0028 - 0x0000)
struct WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged final
{
public:
	int32                                         ActiveChildrenCount;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged) == 0x000008, "Wrong alignment on WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged");
static_assert(sizeof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged) == 0x000028, "Wrong size on WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, ActiveChildrenCount) == 0x000000, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::ActiveChildrenCount' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, Temp_bool_Variable) == 0x000004, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, Temp_byte_Variable) == 0x000020, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, Temp_byte_Variable_1) == 0x000021, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, CallFunc_Greater_IntInt_ReturnValue) == 0x000022, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged, K2Node_Select_Default) == 0x000023, "Member 'WBP_S_CTADisplay_C_HandleCTAActiveChildrenCountChanged::K2Node_Select_Default' has a wrong offset!");

}

