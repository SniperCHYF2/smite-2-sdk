﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_MatchHistoryScreen

#include "Basic.hpp"

#include "HemingwayUI_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Hemingway_structs.hpp"


namespace SDK::Params
{

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.BP_OnHandleBackAction
// 0x0002 (0x0002 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction) == 0x000002, "Wrong size on WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WBP_C_MatchHistoryScreen_C_BP_OnHandleBackAction::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.BP_OnHandleSelectAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction) == 0x000001, "Wrong alignment on WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction) == 0x000001, "Wrong size on WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction, ReturnValue) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_BP_OnHandleSelectAction::ReturnValue' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.ExecuteUbergraph_WBP_C_MatchHistoryScreen
// 0x0018 (0x0018 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsLoading;                           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen) == 0x000004, "Wrong alignment on WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen) == 0x000018, "Wrong size on WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen, EntryPoint) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen, Temp_bool_Variable) == 0x000004, "Member 'WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen, Temp_int_Variable) == 0x000008, "Member 'WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen, K2Node_Event_bIsLoading) == 0x000010, "Member 'WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen::K2Node_Event_bIsLoading' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen, K2Node_Select_Default) == 0x000014, "Member 'WBP_C_MatchHistoryScreen_C_ExecuteUbergraph_WBP_C_MatchHistoryScreen::K2Node_Select_Default' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.OnGamemodeChanged
// 0x0118 (0x0118 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_OnGamemodeChanged final
{
public:
	struct FGameplayTag                           GameModeInfoTag;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWGameModeInfoSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHWGameModeInfo                        CallFunc_GetGameModeInfoByTag_OutInfo;             // 0x0018(0x00F8)()
	bool                                          CallFunc_GetGameModeInfoByTag_ReturnValue;         // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged) == 0x000008, "Wrong alignment on WBP_C_MatchHistoryScreen_C_OnGamemodeChanged");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged) == 0x000118, "Wrong size on WBP_C_MatchHistoryScreen_C_OnGamemodeChanged");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged, GameModeInfoTag) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_OnGamemodeChanged::GameModeInfoTag' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged, CallFunc_MatchesTag_ReturnValue) == 0x000008, "Member 'WBP_C_MatchHistoryScreen_C_OnGamemodeChanged::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'WBP_C_MatchHistoryScreen_C_OnGamemodeChanged::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged, CallFunc_GetGameModeInfoByTag_OutInfo) == 0x000018, "Member 'WBP_C_MatchHistoryScreen_C_OnGamemodeChanged::CallFunc_GetGameModeInfoByTag_OutInfo' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnGamemodeChanged, CallFunc_GetGameModeInfoByTag_ReturnValue) == 0x000110, "Member 'WBP_C_MatchHistoryScreen_C_OnGamemodeChanged::CallFunc_GetGameModeInfoByTag_ReturnValue' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.OnTimespanChanged
// 0x0080 (0x0080 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_OnTimespanChanged final
{
public:
	EHWSupportedTimespans                         NewTimespan;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHWSupportedTimespans                         Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0050(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0068(0x0018)()
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged) == 0x000008, "Wrong alignment on WBP_C_MatchHistoryScreen_C_OnTimespanChanged");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged) == 0x000080, "Wrong size on WBP_C_MatchHistoryScreen_C_OnTimespanChanged");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, NewTimespan) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::NewTimespan' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, Temp_byte_Variable) == 0x000001, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, Temp_text_Variable) == 0x000008, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, Temp_text_Variable_1) == 0x000020, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, Temp_text_Variable_2) == 0x000038, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, Temp_text_Variable_3) == 0x000050, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_OnTimespanChanged, K2Node_Select_Default) == 0x000068, "Member 'WBP_C_MatchHistoryScreen_C_OnTimespanChanged::K2Node_Select_Default' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.PreConstruct
// 0x0020 (0x0020 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_C_MatchHistoryScreen_Entry_C*      CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_PreConstruct) == 0x000008, "Wrong alignment on WBP_C_MatchHistoryScreen_C_PreConstruct");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_PreConstruct) == 0x000020, "Wrong size on WBP_C_MatchHistoryScreen_C_PreConstruct");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_PreConstruct::IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_PreConstruct, Temp_int_Variable) == 0x000004, "Member 'WBP_C_MatchHistoryScreen_C_PreConstruct::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_PreConstruct, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WBP_C_MatchHistoryScreen_C_PreConstruct::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_PreConstruct, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'WBP_C_MatchHistoryScreen_C_PreConstruct::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_PreConstruct, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_C_MatchHistoryScreen_C_PreConstruct::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_PreConstruct, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000018, "Member 'WBP_C_MatchHistoryScreen_C_PreConstruct::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.SetIsLoading
// 0x0001 (0x0001 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_SetIsLoading final
{
public:
	bool                                          bIsLoading;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_SetIsLoading) == 0x000001, "Wrong alignment on WBP_C_MatchHistoryScreen_C_SetIsLoading");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_SetIsLoading) == 0x000001, "Wrong size on WBP_C_MatchHistoryScreen_C_SetIsLoading");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_SetIsLoading, bIsLoading) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_SetIsLoading::bIsLoading' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetContainerDesiredFocusTarget_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget, CallFunc_GetContainerDesiredFocusTarget_ReturnValue) == 0x000008, "Member 'WBP_C_MatchHistoryScreen_C_BP_GetDesiredFocusTarget::CallFunc_GetContainerDesiredFocusTarget_ReturnValue' has a wrong offset!");

// Function WBP_C_MatchHistoryScreen.WBP_C_MatchHistoryScreen_C.GetViewRedirectOnBackTag
// 0x0008 (0x0008 - 0x0000)
struct WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag final
{
public:
	struct FGameplayTag                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag) == 0x000004, "Wrong alignment on WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag");
static_assert(sizeof(WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag) == 0x000008, "Wrong size on WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag");
static_assert(offsetof(WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag, ReturnValue) == 0x000000, "Member 'WBP_C_MatchHistoryScreen_C_GetViewRedirectOnBackTag::ReturnValue' has a wrong offset!");

}

