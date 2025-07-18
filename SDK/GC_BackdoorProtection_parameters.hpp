﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_BackdoorProtection

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GC_BackdoorProtection.GC_BackdoorProtection_C.ExecuteUbergraph_GC_BackdoorProtection
// 0x0280 (0x0280 - 0x0000)
struct GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Target;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults;                         // 0x00F0(0x0058)(ConstParm, ContainsInstancedReference)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0150(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0178(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0198(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x0200(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_BreakGameplayCueParameters_GameplayStackCount; // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211[0x7];                                      // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPC_Tower_C*                        K2Node_DynamicCast_AsBP_NPC_Tower;                 // 0x0228(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NPC_Phoenix_C*                      K2Node_DynamicCast_AsBP_NPC_Phoenix;               // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;                           // 0x0248(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0x0258(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x3];                                      // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_269[0x7];                                      // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection) == 0x000008, "Wrong alignment on GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection");
static_assert(sizeof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection) == 0x000280, "Wrong size on GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, EntryPoint) == 0x000000, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, Temp_int_Array_Index_Variable) == 0x000004, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_Event_Target) == 0x000010, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_Event_Parameters) == 0x000018, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_Event_SpawnResults) == 0x0000F0, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_Event_SpawnResults' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000148, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x00014C, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000150, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000168, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000170, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000178, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000198, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_Location) == 0x0001B8, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_Normal) == 0x0001D0, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001E8, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001F0, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001F8, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000200, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000208, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00020C, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_GameplayStackCount) == 0x000210, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_GameplayStackCount' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000218, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x000220, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_DynamicCast_AsBP_NPC_Tower) == 0x000228, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_DynamicCast_AsBP_NPC_Tower' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_DynamicCast_bSuccess) == 0x000230, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_DynamicCast_AsBP_NPC_Phoenix) == 0x000238, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_DynamicCast_AsBP_NPC_Phoenix' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_DynamicCast_bSuccess_1) == 0x000240, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_Array_Get_Item) == 0x000248, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_SelectFloat_ReturnValue) == 0x000250, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_DynamicCast_AsNiagara_Particle_System_Component) == 0x000258, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_DynamicCast_AsNiagara_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, K2Node_DynamicCast_bSuccess_2) == 0x000260, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_Array_Length_ReturnValue) == 0x000264, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_Less_IntInt_ReturnValue) == 0x000268, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_SelectFloat_ReturnValue_1) == 0x000270, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000278, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x00027C, "Member 'GC_BackdoorProtection_C_ExecuteUbergraph_GC_BackdoorProtection::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

// Function GC_BackdoorProtection.GC_BackdoorProtection_C.OnLoopingStart
// 0x0138 (0x0138 - 0x0000)
struct GC_BackdoorProtection_C_OnLoopingStart final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_BackdoorProtection_C_OnLoopingStart) == 0x000008, "Wrong alignment on GC_BackdoorProtection_C_OnLoopingStart");
static_assert(sizeof(GC_BackdoorProtection_C_OnLoopingStart) == 0x000138, "Wrong size on GC_BackdoorProtection_C_OnLoopingStart");
static_assert(offsetof(GC_BackdoorProtection_C_OnLoopingStart, Target) == 0x000000, "Member 'GC_BackdoorProtection_C_OnLoopingStart::Target' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GC_BackdoorProtection_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GC_BackdoorProtection_C_OnLoopingStart, SpawnResults) == 0x0000E0, "Member 'GC_BackdoorProtection_C_OnLoopingStart::SpawnResults' has a wrong offset!");

}

