﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Play_PushTugOfWar

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function BP_AIGoal_Play_PushTugOfWar.BP_AIGoal_Play_PushTugOfWar_C.CheckPreconditionsBP
// 0x0010 (0x0010 - 0x0000)
struct BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP final
{
public:
	class AHWAIController*                        InController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP) == 0x000008, "Wrong alignment on BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP");
static_assert(sizeof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP) == 0x000010, "Wrong size on BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP, InController) == 0x000000, "Member 'BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP::InController' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP, ReturnValue) == 0x000008, "Member 'BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP, CallFunc_MatchesTag_ReturnValue) == 0x00000A, "Member 'BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BP_AIGoal_Play_PushTugOfWar_C_CheckPreconditionsBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_AIGoal_Play_PushTugOfWar.BP_AIGoal_Play_PushTugOfWar_C.ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar
// 0x0080 (0x0080 - 0x0000)
struct BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWGameMode*                            CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      CallFunc_GetCharacter_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWGameMode_Arena*                      K2Node_DynamicCast_AsHWGame_Mode_Arena;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGenericTeamId                         CallFunc_GetGenericTeamId_ReturnValue;             // 0x0021(0x0001)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWAITugOfWarManager*                   CallFunc_GetTugOfWarManager_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_CalculateFormationLocationWithForwardOffset_OutFormationOffset; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalculateFormationLocationWithForwardOffset_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_CalculateFormationLocationWithForwardOffset_ForwardOffset_ImplicitCast; // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar) == 0x000008, "Wrong alignment on BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar");
static_assert(sizeof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar) == 0x000080, "Wrong size on BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, EntryPoint) == 0x000000, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_GetGameMode_ReturnValue) == 0x000008, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_GetCharacter_ReturnValue) == 0x000010, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, K2Node_DynamicCast_AsHWGame_Mode_Arena) == 0x000018, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::K2Node_DynamicCast_AsHWGame_Mode_Arena' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_GetGenericTeamId_ReturnValue) == 0x000021, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_GetGenericTeamId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_GetTugOfWarManager_ReturnValue) == 0x000028, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_GetTugOfWarManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_CalculateFormationLocationWithForwardOffset_OutFormationOffset) == 0x000038, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_CalculateFormationLocationWithForwardOffset_OutFormationOffset' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_CalculateFormationLocationWithForwardOffset_ReturnValue) == 0x000048, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_CalculateFormationLocationWithForwardOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_BreakVector2D_X) == 0x000050, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_BreakVector2D_Y) == 0x000058, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar, CallFunc_CalculateFormationLocationWithForwardOffset_ForwardOffset_ImplicitCast) == 0x000078, "Member 'BP_AIGoal_Play_PushTugOfWar_C_ExecuteUbergraph_BP_AIGoal_Play_PushTugOfWar::CallFunc_CalculateFormationLocationWithForwardOffset_ForwardOffset_ImplicitCast' has a wrong offset!");

}

