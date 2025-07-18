﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoggingInStatus

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"


namespace SDK::Params
{

// Function LoggingInStatus.LoggingInStatus_C.BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'LoggingInStatus_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function LoggingInStatus.LoggingInStatus_C.ExecuteUbergraph_LoggingInStatus
// 0x0060 (0x0060 - 0x0000)
struct LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddViewRoute_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FLoginQueueInfo& LoginQueueInfo)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_ComponentBoundEvent_Widget;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	class ARHLobbyHUD*                            K2Node_DynamicCast_AsRallyHere_Client_HUD;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URHLoginDataFactory*                    CallFunc_GetLoginDataFactory_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus) == 0x000008, "Wrong alignment on LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus");
static_assert(sizeof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus) == 0x000060, "Wrong size on LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, EntryPoint) == 0x000000, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, CallFunc_AddViewRoute_ReturnValue) == 0x000004, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::CallFunc_AddViewRoute_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, K2Node_ComponentBoundEvent_Widget) == 0x000028, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, K2Node_MakeArray_Array) == 0x000038, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, K2Node_DynamicCast_AsRallyHere_Client_HUD) == 0x000048, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::K2Node_DynamicCast_AsRallyHere_Client_HUD' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus, CallFunc_GetLoginDataFactory_ReturnValue) == 0x000058, "Member 'LoggingInStatus_C_ExecuteUbergraph_LoggingInStatus::CallFunc_GetLoginDataFactory_ReturnValue' has a wrong offset!");

// Function LoggingInStatus.LoggingInStatus_C.SetWaitQueueMessage
// 0x0028 (0x0028 - 0x0000)
struct LoggingInStatus_C_SetWaitQueueMessage final
{
public:
	struct FLoginQueueInfo                        LoginQueueInfo;                                    // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LoggingInStatus_C_SetWaitQueueMessage) == 0x000008, "Wrong alignment on LoggingInStatus_C_SetWaitQueueMessage");
static_assert(sizeof(LoggingInStatus_C_SetWaitQueueMessage) == 0x000028, "Wrong size on LoggingInStatus_C_SetWaitQueueMessage");
static_assert(offsetof(LoggingInStatus_C_SetWaitQueueMessage, LoginQueueInfo) == 0x000000, "Member 'LoggingInStatus_C_SetWaitQueueMessage::LoginQueueInfo' has a wrong offset!");

}

