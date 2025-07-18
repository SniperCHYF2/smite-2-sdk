﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PortalPurchaseConfirmationDisplay

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_S_PortalPurchaseConfirmationDisplay.WBP_S_PortalPurchaseConfirmationDisplay_C.BP_OnHandleBackAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction");
static_assert(sizeof(WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction) == 0x000001, "Wrong size on WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction");
static_assert(offsetof(WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'WBP_S_PortalPurchaseConfirmationDisplay_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");

// Function WBP_S_PortalPurchaseConfirmationDisplay.WBP_S_PortalPurchaseConfirmationDisplay_C.DisplayPortalOffer
// 0x0010 (0x0010 - 0x0000)
struct WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer final
{
public:
	class URHPortalOffer*                         InPortalOffer;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer) == 0x000008, "Wrong alignment on WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer");
static_assert(sizeof(WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer) == 0x000010, "Wrong size on WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer");
static_assert(offsetof(WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer, InPortalOffer) == 0x000000, "Member 'WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer::InPortalOffer' has a wrong offset!");
static_assert(offsetof(WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_S_PortalPurchaseConfirmationDisplay_C_DisplayPortalOffer::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_S_PortalPurchaseConfirmationDisplay.WBP_S_PortalPurchaseConfirmationDisplay_C.ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay
// 0x0004 (0x0004 - 0x0000)
struct WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay) == 0x000004, "Wrong alignment on WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay");
static_assert(sizeof(WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay) == 0x000004, "Wrong size on WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay");
static_assert(offsetof(WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay, EntryPoint) == 0x000000, "Member 'WBP_S_PortalPurchaseConfirmationDisplay_C_ExecuteUbergraph_WBP_S_PortalPurchaseConfirmationDisplay::EntryPoint' has a wrong offset!");

}

