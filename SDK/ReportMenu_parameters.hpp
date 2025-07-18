﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "RallyHereStart_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ReportMenu.ReportMenu_C.BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'ReportMenu_C_BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.BP_OnHandleBackAction
// 0x0001 (0x0001 - 0x0000)
struct ReportMenu_C_BP_OnHandleBackAction final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportMenu_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on ReportMenu_C_BP_OnHandleBackAction");
static_assert(sizeof(ReportMenu_C_BP_OnHandleBackAction) == 0x000001, "Wrong size on ReportMenu_C_BP_OnHandleBackAction");
static_assert(offsetof(ReportMenu_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'ReportMenu_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
// 0x0120 (0x0120 - 0x0000)
struct ReportMenu_C_ExecuteUbergraph_ReportMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FReportPlayerParams                    K2Node_CustomEvent_Report;                         // 0x0008(0x0068)(ConstParm)
	class UWidget*                                K2Node_ComponentBoundEvent_Widget;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0080(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0098(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00F8(0x0018)()
	class AHWClientHUD*                           K2Node_DynamicCast_AsHWClient_HUD;                 // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportMenu_C_ExecuteUbergraph_ReportMenu) == 0x000008, "Wrong alignment on ReportMenu_C_ExecuteUbergraph_ReportMenu");
static_assert(sizeof(ReportMenu_C_ExecuteUbergraph_ReportMenu) == 0x000120, "Wrong size on ReportMenu_C_ExecuteUbergraph_ReportMenu");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, EntryPoint) == 0x000000, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, K2Node_CustomEvent_Report) == 0x000008, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::K2Node_CustomEvent_Report' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, K2Node_ComponentBoundEvent_Widget) == 0x000070, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, CallFunc_GetVisibility_ReturnValue) == 0x000078, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000079, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, CallFunc_Conv_StringToText_ReturnValue) == 0x000080, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, K2Node_MakeStruct_FormatArgumentData) == 0x000098, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, K2Node_MakeArray_Array) == 0x0000E8, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, CallFunc_Format_ReturnValue) == 0x0000F8, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, K2Node_DynamicCast_AsHWClient_HUD) == 0x000110, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::K2Node_DynamicCast_AsHWClient_HUD' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ExecuteUbergraph_ReportMenu, K2Node_DynamicCast_bSuccess) == 0x000118, "Member 'ReportMenu_C_ExecuteUbergraph_ReportMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.GetNavigationWidgets
// 0x0020 (0x0020 - 0x0000)
struct ReportMenu_C_GetNavigationWidgets final
{
public:
	TArray<class URHWidget*>                      Return_Value;                                      // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class URHWidget*>                      K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(ReportMenu_C_GetNavigationWidgets) == 0x000008, "Wrong alignment on ReportMenu_C_GetNavigationWidgets");
static_assert(sizeof(ReportMenu_C_GetNavigationWidgets) == 0x000020, "Wrong size on ReportMenu_C_GetNavigationWidgets");
static_assert(offsetof(ReportMenu_C_GetNavigationWidgets, Return_Value) == 0x000000, "Member 'ReportMenu_C_GetNavigationWidgets::Return_Value' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_GetNavigationWidgets, K2Node_MakeArray_Array) == 0x000010, "Member 'ReportMenu_C_GetNavigationWidgets::K2Node_MakeArray_Array' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.OnOpenReportScreen
// 0x0068 (0x0068 - 0x0000)
struct ReportMenu_C_OnOpenReportScreen final
{
public:
	struct FReportPlayerParams                    Report;                                            // 0x0000(0x0068)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ReportMenu_C_OnOpenReportScreen) == 0x000008, "Wrong alignment on ReportMenu_C_OnOpenReportScreen");
static_assert(sizeof(ReportMenu_C_OnOpenReportScreen) == 0x000068, "Wrong size on ReportMenu_C_OnOpenReportScreen");
static_assert(offsetof(ReportMenu_C_OnOpenReportScreen, Report) == 0x000000, "Member 'ReportMenu_C_OnOpenReportScreen::Report' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.ReportPlayer
// 0x0038 (0x0038 - 0x0000)
struct ReportMenu_C_ReportPlayer final
{
public:
	EReportPlayerReason                           ReportReason;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_Return_Value;                     // 0x0008(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_UIX_ReportPlayer_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportMenu_C_ReportPlayer) == 0x000008, "Wrong alignment on ReportMenu_C_ReportPlayer");
static_assert(sizeof(ReportMenu_C_ReportPlayer) == 0x000038, "Wrong size on ReportMenu_C_ReportPlayer");
static_assert(offsetof(ReportMenu_C_ReportPlayer, ReportReason) == 0x000000, "Member 'ReportMenu_C_ReportPlayer::ReportReason' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ReportPlayer, CallFunc_GetText_Return_Value) == 0x000008, "Member 'ReportMenu_C_ReportPlayer::CallFunc_GetText_Return_Value' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ReportPlayer, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'ReportMenu_C_ReportPlayer::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ReportPlayer, CallFunc_UIX_ReportPlayer_ReturnValue) == 0x000030, "Member 'ReportMenu_C_ReportPlayer::CallFunc_UIX_ReportPlayer_ReturnValue' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.SelectReason
// 0x0108 (0x0108 - 0x0000)
struct ReportMenu_C_SelectReason final
{
public:
	EReportPlayerReason                           ReportReason;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x00B0(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_8;                              // 0x00D0(0x0018)()
	EReportPlayerReason                           Temp_byte_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00F0(0x0018)()
};
static_assert(alignof(ReportMenu_C_SelectReason) == 0x000008, "Wrong alignment on ReportMenu_C_SelectReason");
static_assert(sizeof(ReportMenu_C_SelectReason) == 0x000108, "Wrong size on ReportMenu_C_SelectReason");
static_assert(offsetof(ReportMenu_C_SelectReason, ReportReason) == 0x000000, "Member 'ReportMenu_C_SelectReason::ReportReason' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable) == 0x000008, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_1) == 0x000020, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_2) == 0x000038, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_3) == 0x000050, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_4) == 0x000068, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_5) == 0x000080, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_6) == 0x000098, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_7) == 0x0000B0, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C8, "Member 'ReportMenu_C_SelectReason::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_text_Variable_8) == 0x0000D0, "Member 'ReportMenu_C_SelectReason::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, Temp_byte_Variable) == 0x0000E8, "Member 'ReportMenu_C_SelectReason::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_SelectReason, K2Node_Select_Default) == 0x0000F0, "Member 'ReportMenu_C_SelectReason::K2Node_Select_Default' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.ShowReportPlayer
// 0x0090 (0x0090 - 0x0000)
struct ReportMenu_C_ShowReportPlayer final
{
public:
	struct FGuid                                  PlayerId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARHGameState*                           CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FReportPlayerParams                    CallFunc_SetupReportPlayerFromGameState_ReturnValue; // 0x0018(0x0068)()
	class UWidget*                                CallFunc_SetFocusToThis_ReturnValue;               // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanReportPlayer_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportMenu_C_ShowReportPlayer) == 0x000008, "Wrong alignment on ReportMenu_C_ShowReportPlayer");
static_assert(sizeof(ReportMenu_C_ShowReportPlayer) == 0x000090, "Wrong size on ReportMenu_C_ShowReportPlayer");
static_assert(offsetof(ReportMenu_C_ShowReportPlayer, PlayerId) == 0x000000, "Member 'ReportMenu_C_ShowReportPlayer::PlayerId' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ShowReportPlayer, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'ReportMenu_C_ShowReportPlayer::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ShowReportPlayer, CallFunc_SetupReportPlayerFromGameState_ReturnValue) == 0x000018, "Member 'ReportMenu_C_ShowReportPlayer::CallFunc_SetupReportPlayerFromGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ShowReportPlayer, CallFunc_SetFocusToThis_ReturnValue) == 0x000080, "Member 'ReportMenu_C_ShowReportPlayer::CallFunc_SetFocusToThis_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_ShowReportPlayer, CallFunc_CanReportPlayer_ReturnValue) == 0x000088, "Member 'ReportMenu_C_ShowReportPlayer::CallFunc_CanReportPlayer_ReturnValue' has a wrong offset!");

// Function ReportMenu.ReportMenu_C.BP_GetDesiredFocusTarget
// 0x0010 (0x0010 - 0x0000)
struct ReportMenu_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetDesiredFocusTarget_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReportMenu_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on ReportMenu_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(ReportMenu_C_BP_GetDesiredFocusTarget) == 0x000010, "Wrong size on ReportMenu_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(ReportMenu_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'ReportMenu_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");
static_assert(offsetof(ReportMenu_C_BP_GetDesiredFocusTarget, CallFunc_GetDesiredFocusTarget_ReturnValue) == 0x000008, "Member 'ReportMenu_C_BP_GetDesiredFocusTarget::CallFunc_GetDesiredFocusTarget_ReturnValue' has a wrong offset!");

}

