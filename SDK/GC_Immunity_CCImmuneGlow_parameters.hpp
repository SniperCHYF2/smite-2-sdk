﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Immunity_CCImmuneGlow

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "STRUCT_ImmunityOverlayInfo_structs.hpp"
#include "Hemingway_structs.hpp"


namespace SDK::Params
{

// Function GC_Immunity_CCImmuneGlow.GC_Immunity_CCImmuneGlow_C.ExecuteUbergraph_GC_Immunity_CCImmuneGlow
// 0x02F0 (0x02F0 - 0x0000)
struct GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target_1;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;                         // 0x0020(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults_1;                       // 0x00F8(0x0058)(ConstParm, ContainsInstancedReference)
	class AActor*                                 K2Node_Event_Target;                               // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0158(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults;                         // 0x0230(0x0058)(ConstParm, ContainsInstancedReference)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UHWSkeletalMeshComponent*>       CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x0298(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UHWSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x02A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHWMaterialOverlayHandle               CallFunc_AddOverlayMaterial_ReturnValue;           // 0x02B4(0x0004)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B9[0x7];                                      // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSTRUCT_ImmunityOverlayInfo            K2Node_MakeStruct_STRUCT_ImmunityOverlayInfo;      // 0x02C0(0x0010)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSTRUCT_ImmunityOverlayInfo            CallFunc_Array_Get_Item_1;                         // 0x02D8(0x0010)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow) == 0x000008, "Wrong alignment on GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow");
static_assert(sizeof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow) == 0x0002F0, "Wrong size on GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, EntryPoint) == 0x000000, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_Event_Target_1) == 0x000018, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_Event_Target_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_Event_Parameters_1) == 0x000020, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_Event_SpawnResults_1) == 0x0000F8, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_Event_SpawnResults_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_Event_Target) == 0x000150, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_Event_Parameters) == 0x000158, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_Event_SpawnResults) == 0x000230, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_Event_SpawnResults' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000288, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_DynamicCast_bSuccess) == 0x000290, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, Temp_int_Loop_Counter_Variable_1) == 0x000294, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000298, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Array_Get_Item) == 0x0002A8, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Array_Length_ReturnValue) == 0x0002B0, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_AddOverlayMaterial_ReturnValue) == 0x0002B4, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_AddOverlayMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Less_IntInt_ReturnValue) == 0x0002B8, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, K2Node_MakeStruct_STRUCT_ImmunityOverlayInfo) == 0x0002C0, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::K2Node_MakeStruct_STRUCT_ImmunityOverlayInfo' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002D0, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Array_Add_ReturnValue) == 0x0002D4, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Array_Get_Item_1) == 0x0002D8, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Array_Length_ReturnValue_1) == 0x0002E8, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow, CallFunc_Less_IntInt_ReturnValue_1) == 0x0002EC, "Member 'GC_Immunity_CCImmuneGlow_C_ExecuteUbergraph_GC_Immunity_CCImmuneGlow::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function GC_Immunity_CCImmuneGlow.GC_Immunity_CCImmuneGlow_C.OnLoopingStart
// 0x0138 (0x0138 - 0x0000)
struct GC_Immunity_CCImmuneGlow_C_OnLoopingStart final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_Immunity_CCImmuneGlow_C_OnLoopingStart) == 0x000008, "Wrong alignment on GC_Immunity_CCImmuneGlow_C_OnLoopingStart");
static_assert(sizeof(GC_Immunity_CCImmuneGlow_C_OnLoopingStart) == 0x000138, "Wrong size on GC_Immunity_CCImmuneGlow_C_OnLoopingStart");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_OnLoopingStart, Target) == 0x000000, "Member 'GC_Immunity_CCImmuneGlow_C_OnLoopingStart::Target' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GC_Immunity_CCImmuneGlow_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_OnLoopingStart, SpawnResults) == 0x0000E0, "Member 'GC_Immunity_CCImmuneGlow_C_OnLoopingStart::SpawnResults' has a wrong offset!");

// Function GC_Immunity_CCImmuneGlow.GC_Immunity_CCImmuneGlow_C.OnRemoval
// 0x0138 (0x0138 - 0x0000)
struct GC_Immunity_CCImmuneGlow_C_OnRemoval final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_Immunity_CCImmuneGlow_C_OnRemoval) == 0x000008, "Wrong alignment on GC_Immunity_CCImmuneGlow_C_OnRemoval");
static_assert(sizeof(GC_Immunity_CCImmuneGlow_C_OnRemoval) == 0x000138, "Wrong size on GC_Immunity_CCImmuneGlow_C_OnRemoval");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_OnRemoval, Target) == 0x000000, "Member 'GC_Immunity_CCImmuneGlow_C_OnRemoval::Target' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_OnRemoval, Parameters) == 0x000008, "Member 'GC_Immunity_CCImmuneGlow_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Immunity_CCImmuneGlow_C_OnRemoval, SpawnResults) == 0x0000E0, "Member 'GC_Immunity_CCImmuneGlow_C_OnRemoval::SpawnResults' has a wrong offset!");

}

