﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomMassInviteEntry

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.ExecuteUbergraph_WBP_CustomMassInviteEntry
// 0x01E8 (0x01E8 - 0x0000)
struct WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_RHFriendAndPlatformFriend*          K2Node_DynamicCast_AsRH_RHFriend_and_Platform_Friend; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable;                                // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          Temp_byte_Variable_1;                              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63[0x5];                                       // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Selected;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetEndTime_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0080(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00B8(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0130(0x0078)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          K2Node_Select_Default;                             // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AA[0x6];                                      // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;              // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Max_ImplicitCast;                  // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Max_ImplicitCast_1;                // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_Value_ImplicitCast;                // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;   // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1; // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry) == 0x000008, "Wrong alignment on WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry) == 0x0001E8, "Wrong size on WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, EntryPoint) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000010, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_GetEndTime_ReturnValue_1) == 0x000014, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000018, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_GetAnimationCurrentTime_ReturnValue_1) == 0x00001C, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_GetAnimationCurrentTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_FClamp_ReturnValue_1) == 0x000030, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_ReturnValue_2) == 0x000040, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Event_bIsSelected) == 0x000048, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Event_bIsExpanded) == 0x000049, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Event_ListItemObject) == 0x000050, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_DynamicCast_AsRH_RHFriend_and_Platform_Friend) == 0x000058, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_DynamicCast_AsRH_RHFriend_and_Platform_Friend' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, Temp_byte_Variable) == 0x000061, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, Temp_byte_Variable_1) == 0x000062, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_ReturnValue_3) == 0x000068, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_ReturnValue_4) == 0x000070, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_CustomEvent_Selected) == 0x000078, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_GetEndTime_ReturnValue_2) == 0x00007C, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_GetEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Event_MyGeometry) == 0x000080, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Event_MouseEvent_1) == 0x0000B8, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Event_MouseEvent) == 0x000130, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, Temp_bool_Variable) == 0x0001A8, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, K2Node_Select_Default) == 0x0001A9, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_ReturnValue_5) == 0x0001B0, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_FClamp_Max_ImplicitCast) == 0x0001B8, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_FClamp_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_FClamp_Max_ImplicitCast_1) == 0x0001C0, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_FClamp_Max_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0001C8, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0001D0, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_FClamp_Value_ImplicitCast) == 0x0001D8, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_FClamp_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0001E0, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x0001E4, "Member 'WBP_CustomMassInviteEntry_C_ExecuteUbergraph_WBP_CustomMassInviteEntry::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.GetPlayerInfo
// 0x0008 (0x0008 - 0x0000)
struct WBP_CustomMassInviteEntry_C_GetPlayerInfo final
{
public:
	class URH_PlayerInfo*                         PlayerInfo;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_GetPlayerInfo) == 0x000008, "Wrong alignment on WBP_CustomMassInviteEntry_C_GetPlayerInfo");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_GetPlayerInfo) == 0x000008, "Wrong size on WBP_CustomMassInviteEntry_C_GetPlayerInfo");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_GetPlayerInfo, PlayerInfo) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_GetPlayerInfo::PlayerInfo' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_CustomMassInviteEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_CustomMassInviteEntry_C_OnListItemObjectSet");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_CustomMassInviteEntry_C_OnListItemObjectSet");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_CustomMassInviteEntry_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_CustomMassInviteEntry_C_OnMouseEnter");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_CustomMassInviteEntry_C_OnMouseEnter");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_CustomMassInviteEntry_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_CustomMassInviteEntry_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_CustomMassInviteEntry_C_OnMouseLeave");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_CustomMassInviteEntry_C_OnMouseLeave");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_CustomMassInviteEntry.WBP_CustomMassInviteEntry_C.SetSelected
// 0x0001 (0x0001 - 0x0000)
struct WBP_CustomMassInviteEntry_C_SetSelected final
{
public:
	bool                                          Selected_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CustomMassInviteEntry_C_SetSelected) == 0x000001, "Wrong alignment on WBP_CustomMassInviteEntry_C_SetSelected");
static_assert(sizeof(WBP_CustomMassInviteEntry_C_SetSelected) == 0x000001, "Wrong size on WBP_CustomMassInviteEntry_C_SetSelected");
static_assert(offsetof(WBP_CustomMassInviteEntry_C_SetSelected, Selected_0) == 0x000000, "Member 'WBP_CustomMassInviteEntry_C_SetSelected::Selected_0' has a wrong offset!");

}

