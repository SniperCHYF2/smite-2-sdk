﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_GetPlayerStartLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BTTask_GetPlayerStartLocation.BTTask_GetPlayerStartLocation_C.ExecuteUbergraph_BTTask_GetPlayerStartLocation
// 0x0060 (0x0060 - 0x0000)
struct BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                          K2Node_Event_OwnerController;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IHWInterface_Controller> K2Node_DynamicCast_AsHWInterface_Controller;     // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetStartSpot_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation) == 0x000008, "Wrong alignment on BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation");
static_assert(sizeof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation) == 0x000060, "Wrong size on BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, EntryPoint) == 0x000000, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, Temp_object_Variable) == 0x000008, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, K2Node_Event_OwnerController) == 0x000030, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::K2Node_Event_OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, K2Node_Event_ControlledPawn) == 0x000038, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, K2Node_DynamicCast_AsHWInterface_Controller) == 0x000040, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::K2Node_DynamicCast_AsHWInterface_Controller' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation, CallFunc_GetStartSpot_ReturnValue) == 0x000058, "Member 'BTTask_GetPlayerStartLocation_C_ExecuteUbergraph_BTTask_GetPlayerStartLocation::CallFunc_GetStartSpot_ReturnValue' has a wrong offset!");

// Function BTTask_GetPlayerStartLocation.BTTask_GetPlayerStartLocation_C.ReceiveExecuteAI
// 0x0010 (0x0010 - 0x0000)
struct BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI) == 0x000008, "Wrong alignment on BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI");
static_assert(sizeof(BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI) == 0x000010, "Wrong size on BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI, OwnerController) == 0x000000, "Member 'BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI, ControlledPawn) == 0x000008, "Member 'BTTask_GetPlayerStartLocation_C_ReceiveExecuteAI::ControlledPawn' has a wrong offset!");

}

