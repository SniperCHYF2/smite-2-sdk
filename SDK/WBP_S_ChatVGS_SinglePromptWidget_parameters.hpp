﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_ChatVGS_SinglePromptWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_S_ChatVGS_SinglePromptWidget.WBP_S_ChatVGS_SinglePromptWidget_C.DisplayIconOnly
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly final
{
public:
	struct FSlateBrush                            Brush;                                             // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly) == 0x000010, "Wrong alignment on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly");
static_assert(sizeof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly) == 0x0000E0, "Wrong size on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly, Brush) == 0x000000, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly::Brush' has a wrong offset!");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x0000D0, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayIconOnly::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

// Function WBP_S_ChatVGS_SinglePromptWidget.WBP_S_ChatVGS_SinglePromptWidget_C.DisplayKeyPressed
// 0x0001 (0x0001 - 0x0000)
struct WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed final
{
public:
	bool                                          bIsPressed;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed) == 0x000001, "Wrong alignment on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed");
static_assert(sizeof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed) == 0x000001, "Wrong size on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed, bIsPressed) == 0x000000, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyPressed::bIsPressed' has a wrong offset!");

// Function WBP_S_ChatVGS_SinglePromptWidget.WBP_S_ChatVGS_SinglePromptWidget_C.DisplayKeyTextOnly
// 0x0030 (0x0030 - 0x0000)
struct WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly final
{
public:
	class FText                                   Label;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0018(0x0018)()
};
static_assert(alignof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly) == 0x000008, "Wrong alignment on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly");
static_assert(sizeof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly) == 0x000030, "Wrong size on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly, Label) == 0x000000, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly::Label' has a wrong offset!");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly, CallFunc_TextToUpper_ReturnValue) == 0x000018, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyTextOnly::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function WBP_S_ChatVGS_SinglePromptWidget.WBP_S_ChatVGS_SinglePromptWidget_C.DisplayKeyWithBackground
// 0x0100 (0x0100 - 0x0000)
struct WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground final
{
public:
	struct FSlateBrush                            Brush;                                             // 0x0000(0x00D0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Label;                                             // 0x00D0(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00E8(0x0018)()
};
static_assert(alignof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground) == 0x000010, "Wrong alignment on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground");
static_assert(sizeof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground) == 0x000100, "Wrong size on WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground, Brush) == 0x000000, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground::Brush' has a wrong offset!");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground, Label) == 0x0000D0, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground::Label' has a wrong offset!");
static_assert(offsetof(WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground, CallFunc_TextToUpper_ReturnValue) == 0x0000E8, "Member 'WBP_S_ChatVGS_SinglePromptWidget_C_DisplayKeyWithBackground::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

}

