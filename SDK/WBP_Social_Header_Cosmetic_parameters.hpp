﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Social_Header_Cosmetic

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
// 0x0030 (0x0030 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_BindContextMenu final
{
public:
	TDelegate<void(class UWBP_PlayerStatus_ContextMenuOption_C* FirstFocusableButton)> K2Node_CreateDelegate_OutputDelegate; // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_BindContextMenu) == 0x000004, "Wrong alignment on WBP_Social_Header_Cosmetic_C_BindContextMenu");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_BindContextMenu) == 0x000030, "Wrong size on WBP_Social_Header_Cosmetic_C_BindContextMenu");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_BindContextMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_BindContextMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_BindContextMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_Social_Header_Cosmetic_C_BindContextMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_BindContextMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000020, "Member 'WBP_Social_Header_Cosmetic_C_BindContextMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
// 0x0040 (0x0040 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ERH_INPUT_STATE InputState)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               K2Node_CustomEvent_InputState;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> K2Node_CustomEvent_StatusButtons;           // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PlayerStatus_ContextMenuOption_C*  K2Node_CustomEvent_FocusWidget;                    // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               CallFunc_GetCurrentInputState_ReturnValue;         // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic) == 0x000008, "Wrong alignment on WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic) == 0x000040, "Wrong size on WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, EntryPoint) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, Temp_byte_Variable) == 0x000004, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, K2Node_CustomEvent_InputState) == 0x000018, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::K2Node_CustomEvent_InputState' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, Temp_byte_Variable_1) == 0x000019, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, K2Node_CustomEvent_StatusButtons) == 0x000020, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::K2Node_CustomEvent_StatusButtons' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, K2Node_CustomEvent_FocusWidget) == 0x000030, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::K2Node_CustomEvent_FocusWidget' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, Temp_bool_Variable) == 0x000038, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, CallFunc_GetCurrentInputState_ReturnValue) == 0x000039, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::CallFunc_GetCurrentInputState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, K2Node_Select_Default) == 0x00003A, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic, CallFunc_IsValid_ReturnValue) == 0x00003B, "Member 'WBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_HandleInputStateChanged final
{
public:
	ERH_INPUT_STATE                               InputState;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_HandleInputStateChanged) == 0x000001, "Wrong alignment on WBP_Social_Header_Cosmetic_C_HandleInputStateChanged");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_HandleInputStateChanged) == 0x000001, "Wrong size on WBP_Social_Header_Cosmetic_C_HandleInputStateChanged");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_HandleInputStateChanged, InputState) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_HandleInputStateChanged::InputState' has a wrong offset!");

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
// 0x0008 (0x0008 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_HandleMenuStart final
{
public:
	class UWBP_PlayerStatus_ContextMenuOption_C*  FocusWidget;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_HandleMenuStart) == 0x000008, "Wrong alignment on WBP_Social_Header_Cosmetic_C_HandleMenuStart");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_HandleMenuStart) == 0x000008, "Wrong size on WBP_Social_Header_Cosmetic_C_HandleMenuStart");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_HandleMenuStart, FocusWidget) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_HandleMenuStart::FocusWidget' has a wrong offset!");

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
// 0x0010 (0x0010 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_HandleReadyNavigation final
{
public:
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_HandleReadyNavigation) == 0x000008, "Wrong alignment on WBP_Social_Header_Cosmetic_C_HandleReadyNavigation");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_HandleReadyNavigation) == 0x000010, "Wrong size on WBP_Social_Header_Cosmetic_C_HandleReadyNavigation");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_HandleReadyNavigation, StatusButtons) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_HandleReadyNavigation::StatusButtons' has a wrong offset!");

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnGetPlayerPlatform
// 0x0001 (0x0001 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform final
{
public:
	ERHPlatformDisplayType                        PlatformType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform) == 0x000001, "Wrong alignment on WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform) == 0x000001, "Wrong size on WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform, PlatformType) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_OnGetPlayerPlatform::PlatformType' has a wrong offset!");

// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct WBP_Social_Header_Cosmetic_C_SetData final
{
public:
	class URH_PlayerInfo*                         PlayerInfo;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ERHPlatformDisplayType PlatformType)> K2Node_CreateDelegate_OutputDelegate;       // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Social_Header_Cosmetic_C_SetData) == 0x000008, "Wrong alignment on WBP_Social_Header_Cosmetic_C_SetData");
static_assert(sizeof(WBP_Social_Header_Cosmetic_C_SetData) == 0x000018, "Wrong size on WBP_Social_Header_Cosmetic_C_SetData");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_SetData, PlayerInfo) == 0x000000, "Member 'WBP_Social_Header_Cosmetic_C_SetData::PlayerInfo' has a wrong offset!");
static_assert(offsetof(WBP_Social_Header_Cosmetic_C_SetData, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Social_Header_Cosmetic_C_SetData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

