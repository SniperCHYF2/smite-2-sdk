﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_CameraShake_Medium

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GC_CameraShake_Medium.GC_CameraShake_Medium_C.ExecuteUbergraph_GC_CameraShake_Medium
// 0x0160 (0x0160 - 0x0000)
struct GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_Target;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00D8)(ConstParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         K2Node_Event_SpawnResults;                         // 0x00E8(0x0058)(ConstParm, ContainsInstancedReference)
	class AHWCharacter_Smite_God*                 K2Node_DynamicCast_AsHWCharacter_Smite_God;        // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium) == 0x000008, "Wrong alignment on GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium");
static_assert(sizeof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium) == 0x000160, "Wrong size on GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, EntryPoint) == 0x000000, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::EntryPoint' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, K2Node_Event_Target) == 0x000008, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::K2Node_Event_Target' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, K2Node_Event_Parameters) == 0x000010, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, K2Node_Event_SpawnResults) == 0x0000E8, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::K2Node_Event_SpawnResults' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, K2Node_DynamicCast_AsHWCharacter_Smite_God) == 0x000140, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::K2Node_DynamicCast_AsHWCharacter_Smite_God' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000150, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium, CallFunc_IsValid_ReturnValue) == 0x000158, "Member 'GC_CameraShake_Medium_C_ExecuteUbergraph_GC_CameraShake_Medium::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GC_CameraShake_Medium.GC_CameraShake_Medium_C.OnBurst
// 0x0138 (0x0138 - 0x0000)
struct GC_CameraShake_Medium_C_OnBurst final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GC_CameraShake_Medium_C_OnBurst) == 0x000008, "Wrong alignment on GC_CameraShake_Medium_C_OnBurst");
static_assert(sizeof(GC_CameraShake_Medium_C_OnBurst) == 0x000138, "Wrong size on GC_CameraShake_Medium_C_OnBurst");
static_assert(offsetof(GC_CameraShake_Medium_C_OnBurst, Target) == 0x000000, "Member 'GC_CameraShake_Medium_C_OnBurst::Target' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_OnBurst, Parameters) == 0x000008, "Member 'GC_CameraShake_Medium_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GC_CameraShake_Medium_C_OnBurst, SpawnResults) == 0x0000E0, "Member 'GC_CameraShake_Medium_C_OnBurst::SpawnResults' has a wrong offset!");

}

