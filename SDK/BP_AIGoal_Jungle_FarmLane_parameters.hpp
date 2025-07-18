﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Jungle_FarmLane

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function BP_AIGoal_Jungle_FarmLane.BP_AIGoal_Jungle_FarmLane_C.AreMinionThreatsAvailable
// 0x0088 (0x0088 - 0x0000)
struct BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable final
{
public:
	bool                                          MinionThreatsAvailable;                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      BotCharacter;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TArray<class AHWCharacter_Base*>              Threats;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E[0x2];                                       // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHorizontalDistanceTo_ReturnValue;      // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Base*                      CallFunc_GetCharacter_ReturnValue;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AHWCharacter_Base*>              CallFunc_GetAllThreats_outThreats;                 // 0x0070(0x0010)(ReferenceParm)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable) == 0x000008, "Wrong alignment on BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable");
static_assert(sizeof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable) == 0x000088, "Wrong size on BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, MinionThreatsAvailable) == 0x000000, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::MinionThreatsAvailable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, BotCharacter) == 0x000008, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::BotCharacter' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, Threats) == 0x000010, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::Threats' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_Less_IntInt_ReturnValue) == 0x00003D, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_GetHorizontalDistanceTo_ReturnValue) == 0x000040, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_GetHorizontalDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000048, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000058, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000059, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_GetCharacter_ReturnValue) == 0x000060, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_BooleanAND_ReturnValue) == 0x000068, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_GetAllThreats_outThreats) == 0x000070, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_GetAllThreats_outThreats' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000080, "Member 'BP_AIGoal_Jungle_FarmLane_C_AreMinionThreatsAvailable::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIGoal_Jungle_FarmLane.BP_AIGoal_Jungle_FarmLane_C.CheckPreconditionsBP
// 0x0060 (0x0060 - 0x0000)
struct BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP final
{
public:
	class AHWAIController*                        InController;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWGameMode*                            GameMode;                                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetCharacterLevel_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_GetCurrentMatchPhaseTag_ReturnValue;      // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MatchesTag_ReturnValue;                   // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWGameMode*                            CallFunc_GetGameMode_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP) == 0x000008, "Wrong alignment on BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP");
static_assert(sizeof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP) == 0x000060, "Wrong size on BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, InController) == 0x000000, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::InController' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, ReturnValue) == 0x000008, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, GameMode) == 0x000010, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::GameMode' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_K2_GetPawn_ReturnValue) == 0x000020, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000028, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_GetCharacterLevel_ReturnValue) == 0x000034, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_GetCharacterLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_GetCurrentMatchPhaseTag_ReturnValue) == 0x000038, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_GetCurrentMatchPhaseTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_MatchesTag_ReturnValue) == 0x000041, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_MatchesTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_GetGameMode_ReturnValue) == 0x000048, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_GetGameMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_BooleanAND_ReturnValue) == 0x000050, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'BP_AIGoal_Jungle_FarmLane_C_CheckPreconditionsBP::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_AIGoal_Jungle_FarmLane.BP_AIGoal_Jungle_FarmLane_C.ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane
// 0x0040 (0x0040 - 0x0000)
struct BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAIThreatEvaluator*                   Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWAIThreatEvaluator*                   Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      CallFunc_GetCharacter_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetNextLaneObjectiveToAttack_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AreMinionThreatsAvailable_MinionThreatsAvailable; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAIThreatEvaluator*                   K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGodThreatAvailable_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_IsGodThreatAvailable_MaxDistance_ImplicitCast; // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane) == 0x000008, "Wrong alignment on BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane");
static_assert(sizeof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane) == 0x000040, "Wrong size on BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, EntryPoint) == 0x000000, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, Temp_bool_Variable) == 0x000004, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, Temp_object_Variable) == 0x000008, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, Temp_object_Variable_1) == 0x000010, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, CallFunc_GetCharacter_ReturnValue) == 0x000018, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, CallFunc_GetNextLaneObjectiveToAttack_ReturnValue) == 0x000020, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::CallFunc_GetNextLaneObjectiveToAttack_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, CallFunc_AreMinionThreatsAvailable_MinionThreatsAvailable) == 0x000028, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::CallFunc_AreMinionThreatsAvailable_MinionThreatsAvailable' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, K2Node_Select_Default) == 0x000030, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, CallFunc_IsGodThreatAvailable_ReturnValue) == 0x000038, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::CallFunc_IsGodThreatAvailable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane, CallFunc_IsGodThreatAvailable_MaxDistance_ImplicitCast) == 0x00003C, "Member 'BP_AIGoal_Jungle_FarmLane_C_ExecuteUbergraph_BP_AIGoal_Jungle_FarmLane::CallFunc_IsGodThreatAvailable_MaxDistance_ImplicitCast' has a wrong offset!");

}

