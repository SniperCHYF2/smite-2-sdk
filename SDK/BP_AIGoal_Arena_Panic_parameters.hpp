﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Arena_Panic

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_AIGoal_Arena_Panic.BP_AIGoal_Arena_Panic_C.CalculateWeight
// 0x0010 (0x0010 - 0x0000)
struct BP_AIGoal_Arena_Panic_C_CalculateWeight final
{
public:
	class AHWAIController*                        InController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalculateWeight_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Arena_Panic_C_CalculateWeight) == 0x000008, "Wrong alignment on BP_AIGoal_Arena_Panic_C_CalculateWeight");
static_assert(sizeof(BP_AIGoal_Arena_Panic_C_CalculateWeight) == 0x000010, "Wrong size on BP_AIGoal_Arena_Panic_C_CalculateWeight");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CalculateWeight, InController) == 0x000000, "Member 'BP_AIGoal_Arena_Panic_C_CalculateWeight::InController' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CalculateWeight, ReturnValue) == 0x000008, "Member 'BP_AIGoal_Arena_Panic_C_CalculateWeight::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CalculateWeight, CallFunc_CalculateWeight_ReturnValue) == 0x00000C, "Member 'BP_AIGoal_Arena_Panic_C_CalculateWeight::CallFunc_CalculateWeight_ReturnValue' has a wrong offset!");

// Function BP_AIGoal_Arena_Panic.BP_AIGoal_Arena_Panic_C.CheckPreconditionsBP
// 0x0060 (0x0060 - 0x0000)
struct BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP final
{
public:
	class AHWAIController*                        InController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0010(0x0020)()
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP) == 0x000008, "Wrong alignment on BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP");
static_assert(sizeof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP) == 0x000060, "Wrong size on BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, InController) == 0x000000, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::InController' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, ReturnValue) == 0x000008, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000010, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, CallFunc_K2_GetPawn_ReturnValue) == 0x000030, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000038, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000048, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000058, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'BP_AIGoal_Arena_Panic_C_CheckPreconditionsBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function BP_AIGoal_Arena_Panic.BP_AIGoal_Arena_Panic_C.ExecuteUbergraph_BP_AIGoal_Arena_Panic
// 0x0020 (0x0020 - 0x0000)
struct BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      CallFunc_GetCharacter_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestTeamStructure_outDistance;      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      CallFunc_GetClosestTeamStructure_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic) == 0x000008, "Wrong alignment on BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic");
static_assert(sizeof(BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic) == 0x000020, "Wrong size on BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic, EntryPoint) == 0x000000, "Member 'BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic, CallFunc_GetCharacter_ReturnValue) == 0x000008, "Member 'BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic, CallFunc_GetClosestTeamStructure_outDistance) == 0x000010, "Member 'BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic::CallFunc_GetClosestTeamStructure_outDistance' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic, CallFunc_GetClosestTeamStructure_ReturnValue) == 0x000018, "Member 'BP_AIGoal_Arena_Panic_C_ExecuteUbergraph_BP_AIGoal_Arena_Panic::CallFunc_GetClosestTeamStructure_ReturnValue' has a wrong offset!");

}

