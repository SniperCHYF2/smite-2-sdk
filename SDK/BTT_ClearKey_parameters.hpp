﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_ClearKey

#include "Basic.hpp"


namespace SDK::Params
{

// Function BTT_ClearKey.BTT_ClearKey_C.ExecuteUbergraph_BTT_ClearKey
// 0x0018 (0x0018 - 0x0000)
struct BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey) == 0x000008, "Wrong alignment on BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey");
static_assert(sizeof(BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey) == 0x000018, "Wrong size on BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey");
static_assert(offsetof(BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey, EntryPoint) == 0x000000, "Member 'BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey, K2Node_Event_OwnerController) == 0x000008, "Member 'BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey, K2Node_Event_ControlledPawn) == 0x000010, "Member 'BTT_ClearKey_C_ExecuteUbergraph_BTT_ClearKey::K2Node_Event_ControlledPawn' has a wrong offset!");

// Function BTT_ClearKey.BTT_ClearKey_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTT_ClearKey_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTT_ClearKey_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTT_ClearKey_C_ReceiveExecuteAI");
static_assert(sizeof(BTT_ClearKey_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTT_ClearKey_C_ReceiveExecuteAI");
static_assert(offsetof(BTT_ClearKey_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTT_ClearKey_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTT_ClearKey_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTT_ClearKey_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

