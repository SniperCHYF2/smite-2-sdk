﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_GodBuilder_AbilitiesList

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_S_GodBuilder_AbilitiesList.WBP_S_GodBuilder_AbilitiesList_C.AddInitialAbilityEntries
// 0x0030 (0x0030 - 0x0000)
struct WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWGodBuilderAbilitiesListEntryWidget*  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries");
static_assert(sizeof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries) == 0x000030, "Wrong size on WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, Temp_int_Variable) == 0x000008, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, CallFunc_Create_ReturnValue) == 0x000010, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000018, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_S_GodBuilder_AbilitiesList_C_AddInitialAbilityEntries::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_S_GodBuilder_AbilitiesList.WBP_S_GodBuilder_AbilitiesList_C.ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList
// 0x0008 (0x0008 - 0x0000)
struct WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList) == 0x000004, "Wrong alignment on WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList");
static_assert(sizeof(WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList) == 0x000008, "Wrong size on WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList, EntryPoint) == 0x000000, "Member 'WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_S_GodBuilder_AbilitiesList_C_ExecuteUbergraph_WBP_S_GodBuilder_AbilitiesList::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_S_GodBuilder_AbilitiesList.WBP_S_GodBuilder_AbilitiesList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_S_GodBuilder_AbilitiesList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_AbilitiesList_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_S_GodBuilder_AbilitiesList_C_PreConstruct");
static_assert(sizeof(WBP_S_GodBuilder_AbilitiesList_C_PreConstruct) == 0x000001, "Wrong size on WBP_S_GodBuilder_AbilitiesList_C_PreConstruct");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_S_GodBuilder_AbilitiesList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_S_GodBuilder_AbilitiesList.WBP_S_GodBuilder_AbilitiesList_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetContainerDesiredFocusTarget_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget, CallFunc_GetContainerDesiredFocusTarget_ReturnValue) == 0x000008, "Member 'WBP_S_GodBuilder_AbilitiesList_C_BP_GetDesiredFocusTarget::CallFunc_GetContainerDesiredFocusTarget_ReturnValue' has a wrong offset!");

}

