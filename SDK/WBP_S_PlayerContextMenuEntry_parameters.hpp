﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PlayerContextMenuEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_PlayerContextMenuEntry.WBP_S_PlayerContextMenuEntry_C.ExecuteUbergraph_WBP_S_PlayerContextMenuEntry
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry) == 0x000004, "Wrong alignment on WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry");
static_assert(sizeof(WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry) == 0x000008, "Wrong size on WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry, EntryPoint) == 0x000000, "Member 'WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_S_PlayerContextMenuEntry_C_ExecuteUbergraph_WBP_S_PlayerContextMenuEntry::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_S_PlayerContextMenuEntry.WBP_S_PlayerContextMenuEntry_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_S_PlayerContextMenuEntry_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PlayerContextMenuEntry_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_S_PlayerContextMenuEntry_C_PreConstruct");
static_assert(sizeof(WBP_S_PlayerContextMenuEntry_C_PreConstruct) == 0x000001, "Wrong size on WBP_S_PlayerContextMenuEntry_C_PreConstruct");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_S_PlayerContextMenuEntry_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_S_PlayerContextMenuEntry.WBP_S_PlayerContextMenuEntry_C.SetBackgroundColor
// 0x0520 (0x0520 - 0x0000)
struct WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor final
{
public:
	struct FSlateColor                            BackgroundColor;                                   // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                            NewColor;                                          // 0x0014(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0028(0x0014)()
	bool                                          CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue; // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0040(0x0014)()
	uint8                                         Pad_54[0xC];                                       // 0x0054(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0060(0x00D0)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0130(0x03F0)()
};
static_assert(alignof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor) == 0x000010, "Wrong alignment on WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor");
static_assert(sizeof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor) == 0x000520, "Wrong size on WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, BackgroundColor) == 0x000000, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::BackgroundColor' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, NewColor) == 0x000014, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::NewColor' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, K2Node_MakeStruct_SlateColor) == 0x000028, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue) == 0x00003C, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, Temp_bool_Variable) == 0x00003D, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, K2Node_Select_Default) == 0x000040, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, K2Node_MakeStruct_SlateBrush) == 0x000060, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor, K2Node_MakeStruct_ButtonStyle) == 0x000130, "Member 'WBP_S_PlayerContextMenuEntry_C_SetBackgroundColor::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");

// Function WBP_S_PlayerContextMenuEntry.WBP_S_PlayerContextMenuEntry_C.SetDisplayedText
// 0x0018 (0x0018 - 0x0000)
struct WBP_S_PlayerContextMenuEntry_C_SetDisplayedText final
{
public:
	class FText                                   DisplayedText_0;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_S_PlayerContextMenuEntry_C_SetDisplayedText) == 0x000008, "Wrong alignment on WBP_S_PlayerContextMenuEntry_C_SetDisplayedText");
static_assert(sizeof(WBP_S_PlayerContextMenuEntry_C_SetDisplayedText) == 0x000018, "Wrong size on WBP_S_PlayerContextMenuEntry_C_SetDisplayedText");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_SetDisplayedText, DisplayedText_0) == 0x000000, "Member 'WBP_S_PlayerContextMenuEntry_C_SetDisplayedText::DisplayedText_0' has a wrong offset!");

// Function WBP_S_PlayerContextMenuEntry.WBP_S_PlayerContextMenuEntry_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_S_PlayerContextMenuEntry_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

