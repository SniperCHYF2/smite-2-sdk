﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerContextMenuOption

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility
// 0x0006 (0x0006 - 0x0000)
struct WBP_PlayerContextMenuOption_C_Update_Callout_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_Update_Callout_Visibility");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility) == 0x000006, "Wrong size on WBP_PlayerContextMenuOption_C_Update_Callout_Visibility");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility, Temp_bool_Variable) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_Update_Callout_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility, Temp_byte_Variable) == 0x000001, "Member 'WBP_PlayerContextMenuOption_C_Update_Callout_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_PlayerContextMenuOption_C_Update_Callout_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'WBP_PlayerContextMenuOption_C_Update_Callout_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'WBP_PlayerContextMenuOption_C_Update_Callout_Visibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Update_Callout_Visibility, K2Node_Select_Default) == 0x000005, "Member 'WBP_PlayerContextMenuOption_C_Update_Callout_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerContextMenuOption_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_PreConstruct");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_PreConstruct) == 0x000001, "Wrong size on WBP_PlayerContextMenuOption_C_PreConstruct");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm
// 0x0002 (0x0002 - 0x0000)
struct WBP_PlayerContextMenuOption_C_NavigateConfirm final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPlayerContextOptions                         CallFunc_GetContextOption_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_NavigateConfirm) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_NavigateConfirm");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_NavigateConfirm) == 0x000002, "Wrong size on WBP_PlayerContextMenuOption_C_NavigateConfirm");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_NavigateConfirm, ReturnValue) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_NavigateConfirm::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_NavigateConfirm, CallFunc_GetContextOption_ReturnValue) == 0x000001, "Member 'WBP_PlayerContextMenuOption_C_NavigateConfirm::CallFunc_GetContextOption_ReturnValue' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation
// 0x0003 (0x0003 - 0x0000)
struct WBP_PlayerContextMenuOption_C_IsActiveForNavigation final
{
public:
	bool                                          Return_Value;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_IsActiveForNavigation) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_IsActiveForNavigation");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_IsActiveForNavigation) == 0x000003, "Wrong size on WBP_PlayerContextMenuOption_C_IsActiveForNavigation");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_IsActiveForNavigation, Return_Value) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_IsActiveForNavigation::Return_Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_IsActiveForNavigation, CallFunc_IsVisible_ReturnValue) == 0x000001, "Member 'WBP_PlayerContextMenuOption_C_IsActiveForNavigation::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_IsActiveForNavigation, CallFunc_BooleanAND_ReturnValue) == 0x000002, "Member 'WBP_PlayerContextMenuOption_C_IsActiveForNavigation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.HandleVisibility
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerContextMenuOption_C_HandleVisibility final
{
public:
	bool                                          isVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_HandleVisibility) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_HandleVisibility");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_HandleVisibility) == 0x000001, "Wrong size on WBP_PlayerContextMenuOption_C_HandleVisibility");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_HandleVisibility, isVisibility) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_HandleVisibility::isVisibility' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.HandleActive
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerContextMenuOption_C_HandleActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_HandleActive) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_HandleActive");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_HandleActive) == 0x000001, "Wrong size on WBP_PlayerContextMenuOption_C_HandleActive");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_HandleActive, IsActive) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_HandleActive::IsActive' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed final
{
public:
	ERH_INPUT_STATE                               InputState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed) == 0x000001, "Wrong size on WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed, InputState) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_Handle_Input_State_Changed::InputState' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText
// 0x02B0 (0x02B0 - 0x0000)
struct WBP_PlayerContextMenuOption_C_GetCurrentOptionText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	EPlayerContextOptions                         Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0020(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0050(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0068(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0080(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0098(0x0018)()
	class FText                                   Temp_text_Variable_6;                              // 0x00B0(0x0018)()
	class FText                                   Temp_text_Variable_7;                              // 0x00C8(0x0018)()
	class FText                                   Temp_text_Variable_8;                              // 0x00E0(0x0018)()
	class FText                                   Temp_text_Variable_9;                              // 0x00F8(0x0018)()
	class FText                                   Temp_text_Variable_10;                             // 0x0110(0x0018)()
	class FText                                   Temp_text_Variable_11;                             // 0x0128(0x0018)()
	class FText                                   Temp_text_Variable_12;                             // 0x0140(0x0018)()
	class FText                                   Temp_text_Variable_13;                             // 0x0158(0x0018)()
	class FText                                   Temp_text_Variable_14;                             // 0x0170(0x0018)()
	class FText                                   Temp_text_Variable_15;                             // 0x0188(0x0018)()
	class FText                                   Temp_text_Variable_16;                             // 0x01A0(0x0018)()
	class FText                                   Temp_text_Variable_17;                             // 0x01B8(0x0018)()
	class FText                                   Temp_text_Variable_18;                             // 0x01D0(0x0018)()
	class FText                                   Temp_text_Variable_19;                             // 0x01E8(0x0018)()
	class FText                                   Temp_text_Variable_20;                             // 0x0200(0x0018)()
	class FText                                   Temp_text_Variable_21;                             // 0x0218(0x0018)()
	class FText                                   Temp_text_Variable_22;                             // 0x0230(0x0018)()
	class FText                                   Temp_text_Variable_23;                             // 0x0248(0x0018)()
	class FText                                   Temp_text_Variable_24;                             // 0x0260(0x0018)()
	EPlayerContextOptions                         CallFunc_GetContextOption_ReturnValue;             // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlatformViewProfileText_Return_Value;  // 0x0280(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0298(0x0018)()
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText) == 0x000008, "Wrong alignment on WBP_PlayerContextMenuOption_C_GetCurrentOptionText");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText) == 0x0002B0, "Wrong size on WBP_PlayerContextMenuOption_C_GetCurrentOptionText");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, ReturnValue) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_byte_Variable) == 0x000018, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable) == 0x000020, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_1) == 0x000038, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_2) == 0x000050, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_3) == 0x000068, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_4) == 0x000080, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_5) == 0x000098, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_6) == 0x0000B0, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_7) == 0x0000C8, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_8) == 0x0000E0, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_9) == 0x0000F8, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_10) == 0x000110, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_11) == 0x000128, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_12) == 0x000140, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_13) == 0x000158, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_14) == 0x000170, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_15) == 0x000188, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_16) == 0x0001A0, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_17) == 0x0001B8, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_18) == 0x0001D0, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_19) == 0x0001E8, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_20) == 0x000200, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_21) == 0x000218, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_21' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_22) == 0x000230, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_22' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_23) == 0x000248, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_23' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, Temp_text_Variable_24) == 0x000260, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::Temp_text_Variable_24' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, CallFunc_GetContextOption_ReturnValue) == 0x000278, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::CallFunc_GetContextOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, CallFunc_GetPlatformViewProfileText_Return_Value) == 0x000280, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::CallFunc_GetPlatformViewProfileText_Return_Value' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_GetCurrentOptionText, K2Node_Select_Default) == 0x000298, "Member 'WBP_PlayerContextMenuOption_C_GetCurrentOptionText::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption
// 0x0078 (0x0078 - 0x0000)
struct WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isVisibility;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ERH_INPUT_STATE InputState)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x0020(0x0018)(HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_GetIconForGamepadButton_Icon;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               CallFunc_GetCurrentInputState_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               K2Node_CustomEvent_InputState;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_IsGamepad;              // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetCurrentOptionText_ReturnValue;         // 0x0058(0x0018)()
	EPlayerContextOptions                         CallFunc_GetContextOption_ReturnValue;             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isActive;                             // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption) == 0x000008, "Wrong alignment on WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption) == 0x000078, "Wrong size on WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, EntryPoint) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_Event_isVisibility) == 0x000004, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_Event_isVisibility' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, Temp_bool_Variable) == 0x000005, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, Temp_byte_Variable) == 0x000018, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, Temp_byte_Variable_1) == 0x000019, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_Select_Default) == 0x00001A, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_Event_IsDesignTime) == 0x00001B, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_GetGamepadConfirmButton_ReturnValue) == 0x000020, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_GetGamepadConfirmButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_GetIconForGamepadButton_Icon) == 0x000038, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_GetIconForGamepadButton_Icon' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_GetCurrentInputState_ReturnValue) == 0x000040, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_GetCurrentInputState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_CustomEvent_InputState) == 0x000041, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_CustomEvent_InputState' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_ComponentBoundEvent_IsGamepad) == 0x000042, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_ComponentBoundEvent_IsGamepad' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000044, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_GetCurrentOptionText_ReturnValue) == 0x000058, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_GetCurrentOptionText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_GetContextOption_ReturnValue) == 0x000070, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_GetContextOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, CallFunc_Not_PreBool_ReturnValue) == 0x000071, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption, K2Node_Event_isActive) == 0x000072, "Member 'WBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption::K2Node_Event_isActive' has a wrong offset!");

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature final
{
public:
	bool                                          IsGamepad;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature) == 0x000001, "Wrong alignment on WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");
static_assert(sizeof(WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature) == 0x000001, "Wrong size on WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");
static_assert(offsetof(WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature, IsGamepad) == 0x000000, "Member 'WBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature::IsGamepad' has a wrong offset!");

}

