﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_ItemStore_FilterEntry

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "HemingwayUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "RallyHereStart_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.DisplayCharacterStatEntry
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry final
{
public:
	struct FHWDataDisplay_CharacterStat           CharacterStatData;                                 // 0x0000(0x00A0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry) == 0x0000A0, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry, CharacterStatData) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_DisplayCharacterStatEntry::CharacterStatData' has a wrong offset!");

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.DisplayKeywordEntry
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry final
{
public:
	struct FHWDataDisplay_Keyword                 KeywordData;                                       // 0x0000(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry) == 0x0000F0, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry, KeywordData) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_DisplayKeywordEntry::KeywordData' has a wrong offset!");

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry
// 0x0070 (0x0070 - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsSelected_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x000C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0020(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0034(0x0014)()
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ARHHUDCommon*                           CallFunc_GetLocalHUDAsRHCommon_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               CallFunc_GetCurrentInputState_ReturnValue;         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default_2;                           // 0x005C(0x0014)()
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry) == 0x000070, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, EntryPoint) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_byte_Variable) == 0x000004, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_bool_Variable) == 0x000006, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_byte_Variable_2) == 0x000007, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_byte_Variable_3) == 0x000008, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, CallFunc_GetIsSelected_ReturnValue) == 0x000009, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::CallFunc_GetIsSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_MakeStruct_SlateColor) == 0x00000C, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_MakeStruct_SlateColor_1) == 0x000020, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_MakeStruct_SlateColor_2) == 0x000034, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_bool_Variable_1) == 0x000048, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_Select_Default) == 0x000049, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_Select_Default_1) == 0x00004A, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, CallFunc_GetLocalHUDAsRHCommon_ReturnValue) == 0x000050, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::CallFunc_GetLocalHUDAsRHCommon_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, CallFunc_GetCurrentInputState_ReturnValue) == 0x000059, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::CallFunc_GetCurrentInputState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_SwitchEnum_CmpSuccess) == 0x00005A, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, Temp_bool_Variable_2) == 0x00005B, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry, K2Node_Select_Default_2) == 0x00005C, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_ExecuteUbergraph_WBP_G_V2_ItemStore_FilterEntry::K2Node_Select_Default_2' has a wrong offset!");

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.SetFilterEnabled
// 0x0014 (0x0014 - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled final
{
public:
	bool                                          bFilterEnabled;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_real_Variable;                                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled) == 0x000004, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled) == 0x000014, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled, bFilterEnabled) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled::bFilterEnabled' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled, Temp_real_Variable) == 0x000004, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled, Temp_real_Variable_1) == 0x000008, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled, Temp_bool_Variable) == 0x00000C, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled, K2Node_Select_Default) == 0x000010, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_SetFilterEnabled::K2Node_Select_Default' has a wrong offset!");

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.UpdateLayout
// 0x0058 (0x0058 - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout final
{
public:
	EHWItemStoreLayoutType                        Layout;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHWItemStoreLayoutType                        Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          K2Node_Select_Default;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_2;                           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1; // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1; // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout) == 0x000058, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Layout) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Layout' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_byte_Variable) == 0x000001, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_bool_Variable) == 0x000003, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_byte_Variable_2) == 0x000004, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_byte_Variable_3) == 0x000005, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_byte_Variable_4) == 0x000006, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_bool_Variable_1) == 0x000007, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_bool_Variable_2) == 0x000008, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_bool_Variable_3) == 0x000009, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_bool_Variable_4) == 0x00000A, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000010, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SelectFloat_ReturnValue_1) == 0x000020, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SelectFloat_ReturnValue_2) == 0x000028, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, Temp_bool_Variable_5) == 0x000030, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, K2Node_Select_Default) == 0x000031, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SelectFloat_ReturnValue_3) == 0x000038, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, K2Node_Select_Default_1) == 0x000040, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, K2Node_Select_Default_2) == 0x000041, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000044, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x000048, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1) == 0x00004C, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1) == 0x000050, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x000054, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateLayout::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.UpdateSelectedIndicator
// 0x005C (0x005C - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0004(0x0014)()
	bool                                          CallFunc_IsHovered_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x001C(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0030(0x0014)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0044(0x0014)()
	bool                                          CallFunc_GetIsSelected_ReturnValue;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator) == 0x000004, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator) == 0x00005C, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, Temp_byte_Variable) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, Temp_bool_Variable) == 0x000002, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, Temp_bool_Variable_1) == 0x000003, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, K2Node_MakeStruct_SlateColor) == 0x000004, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, CallFunc_IsHovered_ReturnValue) == 0x000018, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, K2Node_MakeStruct_SlateColor_1) == 0x00001C, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, K2Node_MakeStruct_SlateColor_2) == 0x000030, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, K2Node_Select_Default) == 0x000044, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, CallFunc_GetIsSelected_ReturnValue) == 0x000058, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::CallFunc_GetIsSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator, K2Node_Select_Default_1) == 0x000059, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_UpdateSelectedIndicator::K2Node_Select_Default_1' has a wrong offset!");

// Function WBP_G_V2_ItemStore_FilterEntry.WBP_G_V2_ItemStore_FilterEntry_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_G_V2_ItemStore_FilterEntry_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

