﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_SeasonShop_RichText

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.PreConstruct
// 0x0008 (0x0008 - 0x0000)
struct WBP_C_SeasonShop_RichText_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_SeasonShop_RichText_C_PreConstruct) == 0x000004, "Wrong alignment on WBP_C_SeasonShop_RichText_C_PreConstruct");
static_assert(sizeof(WBP_C_SeasonShop_RichText_C_PreConstruct) == 0x000008, "Wrong size on WBP_C_SeasonShop_RichText_C_PreConstruct");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_C_SeasonShop_RichText_C_PreConstruct::IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_PreConstruct, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000004, "Member 'WBP_C_SeasonShop_RichText_C_PreConstruct::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.SetIcon
// 0x0028 (0x0028 - 0x0000)
struct WBP_C_SeasonShop_RichText_C_SetIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon_0;                                            // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_SeasonShop_RichText_C_SetIcon) == 0x000008, "Wrong alignment on WBP_C_SeasonShop_RichText_C_SetIcon");
static_assert(sizeof(WBP_C_SeasonShop_RichText_C_SetIcon) == 0x000028, "Wrong size on WBP_C_SeasonShop_RichText_C_SetIcon");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_SetIcon, Icon_0) == 0x000000, "Member 'WBP_C_SeasonShop_RichText_C_SetIcon::Icon_0' has a wrong offset!");

// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_C_SeasonShop_RichText_C_SetText final
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_C_SeasonShop_RichText_C_SetText) == 0x000008, "Wrong alignment on WBP_C_SeasonShop_RichText_C_SetText");
static_assert(sizeof(WBP_C_SeasonShop_RichText_C_SetText) == 0x000018, "Wrong size on WBP_C_SeasonShop_RichText_C_SetText");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_SetText, NewText) == 0x000000, "Member 'WBP_C_SeasonShop_RichText_C_SetText::NewText' has a wrong offset!");

// Function WBP_C_SeasonShop_RichText.WBP_C_SeasonShop_RichText_C.ShowDiamond
// 0x0005 (0x0005 - 0x0000)
struct WBP_C_SeasonShop_RichText_C_ShowDiamond final
{
public:
	bool                                          Show;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_SeasonShop_RichText_C_ShowDiamond) == 0x000001, "Wrong alignment on WBP_C_SeasonShop_RichText_C_ShowDiamond");
static_assert(sizeof(WBP_C_SeasonShop_RichText_C_ShowDiamond) == 0x000005, "Wrong size on WBP_C_SeasonShop_RichText_C_ShowDiamond");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_ShowDiamond, Show) == 0x000000, "Member 'WBP_C_SeasonShop_RichText_C_ShowDiamond::Show' has a wrong offset!");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_ShowDiamond, Temp_bool_Variable) == 0x000001, "Member 'WBP_C_SeasonShop_RichText_C_ShowDiamond::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_ShowDiamond, Temp_byte_Variable) == 0x000002, "Member 'WBP_C_SeasonShop_RichText_C_ShowDiamond::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_ShowDiamond, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_C_SeasonShop_RichText_C_ShowDiamond::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_C_SeasonShop_RichText_C_ShowDiamond, K2Node_Select_Default) == 0x000004, "Member 'WBP_C_SeasonShop_RichText_C_ShowDiamond::K2Node_Select_Default' has a wrong offset!");

}

