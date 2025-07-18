﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S_NPE_QuestConfig_SubObjective_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective.WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C.InitializeNPEQuestObjective
// 0x0040 (0x0040 - 0x0000)
struct WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective final
{
public:
	struct FS_NPE_QuestConfig_SubObjective        Objective;                                         // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective) == 0x000008, "Wrong alignment on WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective");
static_assert(sizeof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective) == 0x000040, "Wrong size on WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, Objective) == 0x000000, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::Objective' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, Temp_bool_Variable) == 0x000028, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, Temp_byte_Variable) == 0x000029, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, CallFunc_Greater_IntInt_ReturnValue) == 0x00002A, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, Temp_byte_Variable_1) == 0x00002B, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, CallFunc_PlayAnimationForward_ReturnValue) == 0x000030, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective, K2Node_Select_Default) == 0x000038, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_InitializeNPEQuestObjective::K2Node_Select_Default' has a wrong offset!");

// Function WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective.WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C.SetObjectiveStatusCompleted
// 0x0018 (0x0018 - 0x0000)
struct WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted final
{
public:
	bool                                          bIsCompleted;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetOpacity_InOpacity_ImplicitCast;        // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted) == 0x000008, "Wrong alignment on WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted");
static_assert(sizeof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted) == 0x000018, "Wrong size on WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted, bIsCompleted) == 0x000000, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted::bIsCompleted' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted, CallFunc_SelectFloat_ReturnValue) == 0x000008, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted, CallFunc_SelectInt_ReturnValue) == 0x000010, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted, CallFunc_SetOpacity_InOpacity_ImplicitCast) == 0x000014, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_SetObjectiveStatusCompleted::CallFunc_SetOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective.WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C.UpdateObjectiveProgress
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress final
{
public:
	int32                                         Progress;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0068(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
};
static_assert(alignof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress) == 0x000008, "Wrong alignment on WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress");
static_assert(sizeof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress) == 0x0000E0, "Wrong size on WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, Progress) == 0x000000, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::Progress' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000010, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, K2Node_MakeStruct_FormatArgumentData_1) == 0x000068, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, K2Node_MakeArray_Array) == 0x0000B8, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'WBP_G_Prototype_Tutorial_ProgressTracker_Item_Objective_C_UpdateObjectiveProgress::CallFunc_Format_ReturnValue' has a wrong offset!");

}

