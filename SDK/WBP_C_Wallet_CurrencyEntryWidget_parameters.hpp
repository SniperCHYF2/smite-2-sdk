﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_Wallet_CurrencyEntryWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_C_Wallet_CurrencyEntryWidget.WBP_C_Wallet_CurrencyEntryWidget_C.DisplayBoost
// 0x0030 (0x0030 - 0x0000)
struct WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost final
{
public:
	const class UHWCollectionItem*                Boost;                                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLoading;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0010(0x0018)()
	class UIconInfo*                              CallFunc_GetItemIconInfo_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost) == 0x000008, "Wrong alignment on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost");
static_assert(sizeof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost) == 0x000030, "Wrong size on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost, Boost) == 0x000000, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost::Boost' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost, bIsLoading) == 0x000008, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost::bIsLoading' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost, CallFunc_GetItemName_ReturnValue) == 0x000010, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost, CallFunc_GetItemIconInfo_ReturnValue) == 0x000028, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoost::CallFunc_GetItemIconInfo_ReturnValue' has a wrong offset!");

// Function WBP_C_Wallet_CurrencyEntryWidget.WBP_C_Wallet_CurrencyEntryWidget_C.DisplayBoostDuration
// 0x0030 (0x0030 - 0x0000)
struct WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration final
{
public:
	struct FDateTime                              ExpirationDate;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetFormattedTimeSpanFirstValue_Text;      // 0x0018(0x0018)()
};
static_assert(alignof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration) == 0x000008, "Wrong alignment on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration");
static_assert(sizeof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration) == 0x000030, "Wrong size on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration, ExpirationDate) == 0x000000, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration::ExpirationDate' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration, CallFunc_UtcNow_ReturnValue) == 0x000008, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000010, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration, CallFunc_GetFormattedTimeSpanFirstValue_Text) == 0x000018, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayBoostDuration::CallFunc_GetFormattedTimeSpanFirstValue_Text' has a wrong offset!");

// Function WBP_C_Wallet_CurrencyEntryWidget.WBP_C_Wallet_CurrencyEntryWidget_C.DisplayCurrency
// 0x0030 (0x0030 - 0x0000)
struct WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency final
{
public:
	const class URHCurrency*                      CURRENCY;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLoading;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetItemName_ReturnValue;                  // 0x0010(0x0018)()
	class UIconInfo*                              CallFunc_GetItemIconInfo_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency) == 0x000008, "Wrong alignment on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency");
static_assert(sizeof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency) == 0x000030, "Wrong size on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency, CURRENCY) == 0x000000, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency::CURRENCY' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency, bIsLoading) == 0x000008, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency::bIsLoading' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency, CallFunc_GetItemName_ReturnValue) == 0x000010, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency::CallFunc_GetItemName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency, CallFunc_GetItemIconInfo_ReturnValue) == 0x000028, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrency::CallFunc_GetItemIconInfo_ReturnValue' has a wrong offset!");

// Function WBP_C_Wallet_CurrencyEntryWidget.WBP_C_Wallet_CurrencyEntryWidget_C.DisplayCurrencyAmount
// 0x0020 (0x0020 - 0x0000)
struct WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount final
{
public:
	int32                                         NewAmount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLessThanOwned;                                  // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount) == 0x000008, "Wrong alignment on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount");
static_assert(sizeof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount) == 0x000020, "Wrong size on WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount, NewAmount) == 0x000000, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount::NewAmount' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount, bIsLessThanOwned) == 0x000004, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount::bIsLessThanOwned' has a wrong offset!");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_DisplayCurrencyAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_C_Wallet_CurrencyEntryWidget.WBP_C_Wallet_CurrencyEntryWidget_C.ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget
// 0x0004 (0x0004 - 0x0000)
struct WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget) == 0x000004, "Wrong alignment on WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget");
static_assert(sizeof(WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget) == 0x000004, "Wrong size on WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget, EntryPoint) == 0x000000, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_ExecuteUbergraph_WBP_C_Wallet_CurrencyEntryWidget::EntryPoint' has a wrong offset!");

// Function WBP_C_Wallet_CurrencyEntryWidget.WBP_C_Wallet_CurrencyEntryWidget_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_C_Wallet_CurrencyEntryWidget_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

