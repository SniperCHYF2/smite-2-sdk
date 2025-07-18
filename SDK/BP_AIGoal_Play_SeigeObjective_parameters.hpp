﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Play_SeigeObjective

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_AIGoal_Play_SeigeObjective.BP_AIGoal_Play_SeigeObjective_C.CheckPreconditionsBP
// 0x0038 (0x0038 - 0x0000)
struct BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP final
{
public:
	class AHWAIController*                        InController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCharacterSoloRole_ReturnValue;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCharacterSupportRole_ReturnValue;       // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetHealthPercentage_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP) == 0x000008, "Wrong alignment on BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP");
static_assert(sizeof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP) == 0x000038, "Wrong size on BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, InController) == 0x000000, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::InController' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, ReturnValue) == 0x000008, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_K2_GetPawn_ReturnValue) == 0x000010, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000018, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_MatchesTag_ReturnValue) == 0x000021, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_IsCharacterSoloRole_ReturnValue) == 0x000022, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_IsCharacterSoloRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_IsCharacterSupportRole_ReturnValue) == 0x000023, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_IsCharacterSupportRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_GetHealthPercentage_ReturnValue) == 0x000024, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_GetHealthPercentage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_BooleanOR_ReturnValue) == 0x000028, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_IsValid_ReturnValue) == 0x00002A, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00002C, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_BooleanOR_ReturnValue_1) == 0x00002D, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'BP_AIGoal_Play_SeigeObjective_C_CheckPreconditionsBP::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIGoal_Play_SeigeObjective.BP_AIGoal_Play_SeigeObjective_C.ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective
// 0x0004 (0x0004 - 0x0000)
struct BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective) == 0x000004, "Wrong alignment on BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective");
static_assert(sizeof(BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective) == 0x000004, "Wrong size on BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective, EntryPoint) == 0x000000, "Member 'BP_AIGoal_Play_SeigeObjective_C_ExecuteUbergraph_BP_AIGoal_Play_SeigeObjective::EntryPoint' has a wrong offset!");

// Function BP_AIGoal_Play_SeigeObjective.BP_AIGoal_Play_SeigeObjective_C.IsAheadOfMinionWave
// 0x0060 (0x0060 - 0x0000)
struct BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave final
{
public:
	class AHWAIController*                        Controller_0;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   LaneId;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAhead;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWWaypoint*                            CallFunc_FindLaneWaypoint_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGodBotAheadOfWave_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsGodBotAheadOfWave_AheadByAmount_ImplicitCast; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave) == 0x000008, "Wrong alignment on BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave");
static_assert(sizeof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave) == 0x000060, "Wrong size on BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, Controller_0) == 0x000000, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::Controller_0' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, LaneId) == 0x000008, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::LaneId' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, IsAhead) == 0x000010, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::IsAhead' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000020, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_FindLaneWaypoint_ReturnValue) == 0x000030, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_FindLaneWaypoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000038, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000048, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_SelectFloat_ReturnValue) == 0x000050, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_IsGodBotAheadOfWave_ReturnValue) == 0x000058, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_IsGodBotAheadOfWave_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave, CallFunc_IsGodBotAheadOfWave_AheadByAmount_ImplicitCast) == 0x00005C, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsAheadOfMinionWave::CallFunc_IsGodBotAheadOfWave_AheadByAmount_ImplicitCast' has a wrong offset!");

// Function BP_AIGoal_Play_SeigeObjective.BP_AIGoal_Play_SeigeObjective_C.IsATankAndHealthy
// 0x0020 (0x0020 - 0x0000)
struct BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy final
{
public:
	const class AHWCharacter_Base*                Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsATankAndHealthy;                                // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCharacterSupportRole_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHealthPercentage_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCharacterSoloRole_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy) == 0x000008, "Wrong alignment on BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy");
static_assert(sizeof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy) == 0x000020, "Wrong size on BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, Character) == 0x000000, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::Character' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, bIsATankAndHealthy) == 0x000008, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::bIsATankAndHealthy' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_IsCharacterSupportRole_ReturnValue) == 0x000009, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_IsCharacterSupportRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_GetHealthPercentage_ReturnValue) == 0x00000C, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_GetHealthPercentage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_IsCharacterSoloRole_ReturnValue) == 0x000010, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_IsCharacterSoloRole_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000011, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_BooleanOR_ReturnValue) == 0x000012, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000018, "Member 'BP_AIGoal_Play_SeigeObjective_C_IsATankAndHealthy::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIGoal_Play_SeigeObjective.BP_AIGoal_Play_SeigeObjective_C.ShouldContinuePlay
// 0x00B0 (0x00B0 - 0x0000)
struct BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay final
{
public:
	class AHWAIController*                        InController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bContinuePlay;                                     // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      CachedCharacter;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          bHealthyTank;                                      // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWBotFactory*                          K2Node_DynamicCast_AsHWBot_Factory;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesFactoryHaveLivingBots_ReturnValue;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x1];                                       // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x0054(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentPlayStateEqualTo_ReturnValue;    // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0060(0x0020)()
	TArray<class AHWCharacter_Base*>              CallFunc_GetAlliesWithinRange_outTargets;          // 0x0080(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsATankAndHealthy_bIsATankAndHealthy;     // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay) == 0x000008, "Wrong alignment on BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay");
static_assert(sizeof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay) == 0x0000B0, "Wrong size on BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, InController) == 0x000000, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::InController' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, bContinuePlay) == 0x000008, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::bContinuePlay' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CachedCharacter) == 0x000010, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CachedCharacter' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, bHealthyTank) == 0x000018, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::bHealthyTank' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000030, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, K2Node_DynamicCast_AsHWBot_Factory) == 0x000048, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::K2Node_DynamicCast_AsHWBot_Factory' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_DoesFactoryHaveLivingBots_ReturnValue) == 0x000051, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_DoesFactoryHaveLivingBots_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Not_PreBool_ReturnValue) == 0x000052, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000054, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_IsCurrentPlayStateEqualTo_ReturnValue) == 0x00005C, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_IsCurrentPlayStateEqualTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000060, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_GetAlliesWithinRange_outTargets) == 0x000080, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_GetAlliesWithinRange_outTargets' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Less_IntInt_ReturnValue) == 0x0000A0, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_IsATankAndHealthy_bIsATankAndHealthy) == 0x0000A1, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_IsATankAndHealthy_bIsATankAndHealthy' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A2, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Array_Length_ReturnValue_1) == 0x0000A4, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000A8, "Member 'BP_AIGoal_Play_SeigeObjective_C_ShouldContinuePlay::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

