﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QueueSelection_RegionSelectButton

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'WBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARHLobbyHUD*                            K2Node_DynamicCast_AsRallyHere_Client_HUD;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URHLoginDataFactory*                    CallFunc_GetLoginDataFactory_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ARHLobbyHUD*                            K2Node_DynamicCast_AsRallyHere_Client_HUD_1;       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPreferredRegionId_OutRegionId;         // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPreferredRegionId_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class FText>              CallFunc_GetRegionList_OutRegionIdToNameMap;       // 0x0048(0x0050)()
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0098(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ERHLoginState                                 K2Node_CustomEvent_LoginState;                     // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ERHLoginState LoginState)>     K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_ComponentBoundEvent_Widget;                 // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton) == 0x000008, "Wrong alignment on WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton");
static_assert(sizeof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton) == 0x0000E8, "Wrong size on WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, EntryPoint) == 0x000000, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_DynamicCast_AsRallyHere_Client_HUD) == 0x000008, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_DynamicCast_AsRallyHere_Client_HUD' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, CallFunc_GetLoginDataFactory_ReturnValue) == 0x000018, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::CallFunc_GetLoginDataFactory_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_DynamicCast_AsRallyHere_Client_HUD_1) == 0x000020, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_DynamicCast_AsRallyHere_Client_HUD_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, CallFunc_GetPreferredRegionId_OutRegionId) == 0x000030, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::CallFunc_GetPreferredRegionId_OutRegionId' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, CallFunc_GetPreferredRegionId_ReturnValue) == 0x000040, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::CallFunc_GetPreferredRegionId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, CallFunc_GetRegionList_OutRegionIdToNameMap) == 0x000048, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::CallFunc_GetRegionList_OutRegionIdToNameMap' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, CallFunc_Map_Find_Value) == 0x000098, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, CallFunc_Map_Find_ReturnValue) == 0x0000B0, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_CustomEvent_LoginState) == 0x0000C4, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_CustomEvent_LoginState' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_SwitchEnum_CmpSuccess) == 0x0000C5, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C8, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_ComponentBoundEvent_Widget) == 0x0000D8, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton, K2Node_Event_IsDesignTime) == 0x0000E0, "Member 'WBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange
// 0x0007 (0x0007 - 0x0000)
struct WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange final
{
public:
	ERH_INPUT_STATE                               NewInputState;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange) == 0x000001, "Wrong alignment on WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange");
static_assert(sizeof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange) == 0x000007, "Wrong size on WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, NewInputState) == 0x000000, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::NewInputState' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, Temp_byte_Variable) == 0x000001, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, Temp_byte_Variable_2) == 0x000003, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, Temp_byte_Variable_3) == 0x000004, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, Temp_byte_Variable_4) == 0x000005, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange, K2Node_Select_Default) == 0x000006, "Member 'WBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange::K2Node_Select_Default' has a wrong offset!");

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState
// 0x0001 (0x0001 - 0x0000)
struct WBP_QueueSelection_RegionSelectButton_C_LoginState final
{
public:
	ERHLoginState                                 LoginState_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueSelection_RegionSelectButton_C_LoginState) == 0x000001, "Wrong alignment on WBP_QueueSelection_RegionSelectButton_C_LoginState");
static_assert(sizeof(WBP_QueueSelection_RegionSelectButton_C_LoginState) == 0x000001, "Wrong size on WBP_QueueSelection_RegionSelectButton_C_LoginState");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_LoginState, LoginState_0) == 0x000000, "Member 'WBP_QueueSelection_RegionSelectButton_C_LoginState::LoginState_0' has a wrong offset!");

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_QueueSelection_RegionSelectButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueSelection_RegionSelectButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_QueueSelection_RegionSelectButton_C_PreConstruct");
static_assert(sizeof(WBP_QueueSelection_RegionSelectButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_QueueSelection_RegionSelectButton_C_PreConstruct");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_QueueSelection_RegionSelectButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling
// 0x0020 (0x0020 - 0x0000)
struct WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling final
{
public:
	ERH_INPUT_STATE                               CallFunc_GetCurrentInputState_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetIconForGamepadButton_Icon;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ERH_INPUT_STATE InputState)>   K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling) == 0x000008, "Wrong alignment on WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling");
static_assert(sizeof(WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling) == 0x000020, "Wrong size on WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling, CallFunc_GetCurrentInputState_ReturnValue) == 0x000000, "Member 'WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling::CallFunc_GetCurrentInputState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling, CallFunc_GetIconForGamepadButton_Icon) == 0x000008, "Member 'WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling::CallFunc_GetIconForGamepadButton_Icon' has a wrong offset!");
static_assert(offsetof(WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

