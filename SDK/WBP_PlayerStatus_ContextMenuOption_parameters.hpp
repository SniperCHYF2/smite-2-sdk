﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerStatus_ContextMenuOption

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "RallyHereStart_structs.hpp"
#include "EPlayerStatusOption_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature final
{
public:
	bool                                          IsGamepad;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature) == 0x000001, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature, IsGamepad) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature::IsGamepad' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption
// 0x0090 (0x0090 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ERH_INPUT_STATE InputState)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPlayerStatusOption                           Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsActive;                       // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0040(0x0018)()
	struct FKey                                   CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x0058(0x0018)(HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetIconForGamepadButton_Icon;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               K2Node_CustomEvent_InputState;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               CallFunc_GetCurrentInputState_ReturnValue;         // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsGamepad;              // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption) == 0x000008, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption) == 0x000090, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, EntryPoint) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, Temp_byte_Variable) == 0x000018, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, Temp_text_Variable) == 0x000020, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, K2Node_Event_IsDesignTime) == 0x000038, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, K2Node_CustomEvent_IsActive) == 0x000039, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::K2Node_CustomEvent_IsActive' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, K2Node_Select_Default) == 0x000040, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_GetGamepadConfirmButton_ReturnValue) == 0x000058, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_GetGamepadConfirmButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_GetIconForGamepadButton_Icon) == 0x000070, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_GetIconForGamepadButton_Icon' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, K2Node_CustomEvent_InputState) == 0x000078, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::K2Node_CustomEvent_InputState' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_GetCurrentInputState_ReturnValue) == 0x00007A, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_GetCurrentInputState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, K2Node_ComponentBoundEvent_IsGamepad) == 0x00007B, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::K2Node_ComponentBoundEvent_IsGamepad' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x00007C, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_PlayAnimation_ReturnValue) == 0x000080, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption, CallFunc_PlayAnimation_ReturnValue_1) == 0x000088, "Member 'WBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Handle Input State Changed
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed final
{
public:
	ERH_INPUT_STATE                               InputState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed) == 0x000001, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed, InputState) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed::InputState' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.IsActiveForNavigation
// 0x0003 (0x0003 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation final
{
public:
	bool                                          Return_Value;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation) == 0x000003, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation, Return_Value) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation::Return_Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation, CallFunc_IsVisible_ReturnValue) == 0x000001, "Member 'WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'WBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.NavigateConfirm
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm) == 0x000001, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm, ReturnValue) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm::ReturnValue' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_PreConstruct");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_PreConstruct) == 0x000001, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_PreConstruct");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SetActiveInMenu
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu) == 0x000001, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu, IsActive) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu::IsActive' has a wrong offset!");

// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Update Callout Visibility
// 0x0006 (0x0006 - 0x0000)
struct WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility) == 0x000001, "Wrong alignment on WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility");
static_assert(sizeof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility) == 0x000006, "Wrong size on WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility, K2Node_Select_Default) == 0x000005, "Member 'WBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility::K2Node_Select_Default' has a wrong offset!");

}

