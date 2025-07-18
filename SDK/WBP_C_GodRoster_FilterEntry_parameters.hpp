﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodRoster_FilterEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "HemingwayUI_structs.hpp"


namespace SDK::Params
{

// Function WBP_C_GodRoster_FilterEntry.WBP_C_GodRoster_FilterEntry_C.ExecuteUbergraph_WBP_C_GodRoster_FilterEntry
// 0x0008 (0x0008 - 0x0000)
struct WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry) == 0x000004, "Wrong alignment on WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry");
static_assert(sizeof(WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry) == 0x000008, "Wrong size on WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry, EntryPoint) == 0x000000, "Member 'WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_C_GodRoster_FilterEntry_C_ExecuteUbergraph_WBP_C_GodRoster_FilterEntry::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_C_GodRoster_FilterEntry.WBP_C_GodRoster_FilterEntry_C.RefreshEntryDisplay
// 0x0BE0 (0x0BE0 - 0x0000)
struct WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWIconSubsystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCheckBoxStyle                         K2Node_Select_Default;                             // 0x0010(0x0AD0)()
	const class UHWDataDisplay_Keywords*          CallFunc_GetKeywordsDataDisplay_ReturnValue;       // 0x0AE0(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHWDataDisplay_Keyword                 CallFunc_GetKeywordDisplayData_OutDisplayData;     // 0x0AE8(0x00F0)()
	bool                                          CallFunc_GetKeywordDisplayData_ReturnValue;        // 0x0BD8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0BD9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0BDA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay) == 0x000010, "Wrong alignment on WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay");
static_assert(sizeof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay) == 0x000BE0, "Wrong size on WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, Temp_bool_Variable) == 0x000000, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, Temp_bool_Variable_1) == 0x000001, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, Temp_byte_Variable) == 0x000002, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, K2Node_Select_Default) == 0x000010, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, CallFunc_GetKeywordsDataDisplay_ReturnValue) == 0x000AE0, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::CallFunc_GetKeywordsDataDisplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, CallFunc_GetKeywordDisplayData_OutDisplayData) == 0x000AE8, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::CallFunc_GetKeywordDisplayData_OutDisplayData' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, CallFunc_GetKeywordDisplayData_ReturnValue) == 0x000BD8, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::CallFunc_GetKeywordDisplayData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000BD9, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay, K2Node_Select_Default_1) == 0x000BDA, "Member 'WBP_C_GodRoster_FilterEntry_C_RefreshEntryDisplay::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_C_GodRoster_FilterEntry.WBP_C_GodRoster_FilterEntry_C.SetIsSelected
// 0x0005 (0x0005 - 0x0000)
struct WBP_C_GodRoster_FilterEntry_C_SetIsSelected final
{
public:
	bool                                          bIsSelected_0;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected) == 0x000001, "Wrong alignment on WBP_C_GodRoster_FilterEntry_C_SetIsSelected");
static_assert(sizeof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected) == 0x000005, "Wrong size on WBP_C_GodRoster_FilterEntry_C_SetIsSelected");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected, bIsSelected_0) == 0x000000, "Member 'WBP_C_GodRoster_FilterEntry_C_SetIsSelected::bIsSelected_0' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected, Temp_bool_Variable) == 0x000001, "Member 'WBP_C_GodRoster_FilterEntry_C_SetIsSelected::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected, Temp_byte_Variable) == 0x000002, "Member 'WBP_C_GodRoster_FilterEntry_C_SetIsSelected::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_C_GodRoster_FilterEntry_C_SetIsSelected::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_C_GodRoster_FilterEntry_C_SetIsSelected, K2Node_Select_Default) == 0x000004, "Member 'WBP_C_GodRoster_FilterEntry_C_SetIsSelected::K2Node_Select_Default' has a wrong offset!");

}

