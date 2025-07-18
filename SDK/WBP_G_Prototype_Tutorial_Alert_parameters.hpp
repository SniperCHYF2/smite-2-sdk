﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Prototype_Tutorial_Alert

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "E_NPE_TriggerType_structs.hpp"
#include "S_NPE_Trigger_Event_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_Prototype_Tutorial_Alert.WBP_G_Prototype_Tutorial_Alert_C.ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert
// 0x0028 (0x0028 - 0x0000)
struct WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& CustomTag, E_NPE_TriggerType Event, TArray<struct FS_NPE_Trigger_Event>& Events)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWGameState*                           CallFunc_GetHWGameState_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_NPE_GuideComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert) == 0x000008, "Wrong alignment on WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert");
static_assert(sizeof(WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert) == 0x000028, "Wrong size on WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert, EntryPoint) == 0x000000, "Member 'WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert, CallFunc_GetHWGameState_ReturnValue) == 0x000018, "Member 'WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert::CallFunc_GetHWGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'WBP_G_Prototype_Tutorial_Alert_C_ExecuteUbergraph_WBP_G_Prototype_Tutorial_Alert::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function WBP_G_Prototype_Tutorial_Alert.WBP_G_Prototype_Tutorial_Alert_C.OnNPEEvent
// 0x0078 (0x0078 - 0x0000)
struct WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent final
{
public:
	struct FGameplayTag                           CustomTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	E_NPE_TriggerType                             Event;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_NPE_Trigger_Event>           Events;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_NPE_Trigger_Event                   CallFunc_Array_Get_Item;                           // 0x002C(0x000C)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0058(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent) == 0x000008, "Wrong alignment on WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent");
static_assert(sizeof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent) == 0x000078, "Wrong size on WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CustomTag) == 0x000000, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CustomTag' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, Event) == 0x000008, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::Event' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, Events) == 0x000010, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::Events' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_Array_Get_Item) == 0x00002C, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_Map_Find_Value) == 0x000058, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_Map_Find_ReturnValue) == 0x000070, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000074, "Member 'WBP_G_Prototype_Tutorial_Alert_C_OnNPEEvent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}

