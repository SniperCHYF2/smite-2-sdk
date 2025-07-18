﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_EndOfMatchHUD

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_EndOfMatchHUD.WBP_G_V2_EndOfMatchHUD_C.GetCanvasPanels
// 0x0020 (0x0020 - 0x0000)
struct WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels final
{
public:
	TArray<class UHWCanvasPanel*>                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UHWCanvasPanel*>                 K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels) == 0x000008, "Wrong alignment on WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels");
static_assert(sizeof(WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels) == 0x000020, "Wrong size on WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels");
static_assert(offsetof(WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels, ReturnValue) == 0x000000, "Member 'WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_G_V2_EndOfMatchHUD_C_GetCanvasPanels::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_G_V2_EndOfMatchHUD.WBP_G_V2_EndOfMatchHUD_C.GetScreenAlertManager
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager final
{
public:
	class UHWScreenAlertManager*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager) == 0x000008, "Wrong alignment on WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager");
static_assert(sizeof(WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager) == 0x000008, "Wrong size on WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager");
static_assert(offsetof(WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager, ReturnValue) == 0x000000, "Member 'WBP_G_V2_EndOfMatchHUD_C_GetScreenAlertManager::ReturnValue' has a wrong offset!");

// Function WBP_G_V2_EndOfMatchHUD.WBP_G_V2_EndOfMatchHUD_C.GetStickyWidgetsData
// 0x0030 (0x0030 - 0x0000)
struct WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData final
{
public:
	TArray<struct FStickyWidgetData>              ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	struct FStickyWidgetData                      K2Node_MakeStruct_StickyWidgetData;                // 0x0010(0x0010)(NoDestructor, ContainsInstancedReference)
	TArray<struct FStickyWidgetData>              K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData) == 0x000008, "Wrong alignment on WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData");
static_assert(sizeof(WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData) == 0x000030, "Wrong size on WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData");
static_assert(offsetof(WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData, ReturnValue) == 0x000000, "Member 'WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData, K2Node_MakeStruct_StickyWidgetData) == 0x000010, "Member 'WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData::K2Node_MakeStruct_StickyWidgetData' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData, K2Node_MakeArray_Array) == 0x000020, "Member 'WBP_G_V2_EndOfMatchHUD_C_GetStickyWidgetsData::K2Node_MakeArray_Array' has a wrong offset!");

}

