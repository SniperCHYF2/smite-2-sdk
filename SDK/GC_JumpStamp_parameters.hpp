﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_JumpStamp

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GC_JumpStamp.GC_JumpStamp_C.OnBurst
// 0x02C0 (0x02C0 - 0x0000)
struct GC_JumpStamp_C_OnBurst final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                                SpawnLocation;                                     // 0x0138(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             JumpSound;                                         // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         JumpVfx;                                           // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0178(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_AdjustLocationToGround_ReturnValue;       // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWCharacterAbilitySystemActor*         CallFunc_GetCharacterAbilitySystemActor_ReturnValue; // 0x0210(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWLoadoutComponent*                    CallFunc_GetLoadoutComponent_ReturnValue;          // 0x0218(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UHWCollectionItem*                CallFunc_GetCosmeticItem_ReturnValue;              // 0x0228(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          CallFunc_GetCosmeticNiagaraSystem_ReturnValue;     // 0x0230(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	TSoftObjectPtr<class USoundBase>              CallFunc_GetCosmeticSound_ReturnValue;             // 0x0258(0x0028)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0280(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x0288(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0290(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;                   // 0x02A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x02A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x02AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x02AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AC[0x4];                                      // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_HW_SpawnNiagaraSystemAtLocation_ReturnValue; // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_JumpStamp_C_OnBurst) == 0x000008, "Wrong alignment on GC_JumpStamp_C_OnBurst");
static_assert(sizeof(GC_JumpStamp_C_OnBurst) == 0x0002C0, "Wrong size on GC_JumpStamp_C_OnBurst");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, Target) == 0x000000, "Member 'GC_JumpStamp_C_OnBurst::Target' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, Parameters) == 0x000008, "Member 'GC_JumpStamp_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, SpawnResults) == 0x0000E0, "Member 'GC_JumpStamp_C_OnBurst::SpawnResults' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, SpawnLocation) == 0x000138, "Member 'GC_JumpStamp_C_OnBurst::SpawnLocation' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, JumpSound) == 0x000150, "Member 'GC_JumpStamp_C_OnBurst::JumpSound' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, JumpVfx) == 0x000158, "Member 'GC_JumpStamp_C_OnBurst::JumpVfx' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_IsValid_ReturnValue_1) == 0x000161, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_GetTimeSeconds_ReturnValue) == 0x000168, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000170, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000178, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_FFloor_ReturnValue) == 0x000190, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Multiply_IntInt_ReturnValue) == 0x000194, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Add_IntInt_ReturnValue) == 0x000198, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x00019C, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_MakeVector_ReturnValue) == 0x0001A0, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001B8, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_AdjustLocationToGround_ReturnValue) == 0x0001D0, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_AdjustLocationToGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, K2Node_DynamicCast_AsHWCharacter_Base) == 0x0001E8, "Member 'GC_JumpStamp_C_OnBurst::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'GC_JumpStamp_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Add_VectorVector_ReturnValue) == 0x0001F8, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_GetCharacterAbilitySystemActor_ReturnValue) == 0x000210, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_GetCharacterAbilitySystemActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_GetLoadoutComponent_ReturnValue) == 0x000218, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_GetLoadoutComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_IsValid_ReturnValue_2) == 0x000220, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_GetCosmeticItem_ReturnValue) == 0x000228, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_GetCosmeticItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_GetCosmeticNiagaraSystem_ReturnValue) == 0x000230, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_GetCosmeticNiagaraSystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_GetCosmeticSound_ReturnValue) == 0x000258, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_GetCosmeticSound_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000280, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000288, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, K2Node_DynamicCast_AsNiagara_System) == 0x000290, "Member 'GC_JumpStamp_C_OnBurst::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, K2Node_DynamicCast_bSuccess_1) == 0x000298, "Member 'GC_JumpStamp_C_OnBurst::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, K2Node_DynamicCast_AsSound_Base) == 0x0002A0, "Member 'GC_JumpStamp_C_OnBurst::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, K2Node_DynamicCast_bSuccess_2) == 0x0002A8, "Member 'GC_JumpStamp_C_OnBurst::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_IsValid_ReturnValue_3) == 0x0002A9, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_IsValid_ReturnValue_4) == 0x0002AA, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_IsDedicatedServer_ReturnValue) == 0x0002AB, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_HW_SpawnNiagaraSystemAtLocation_ReturnValue) == 0x0002B0, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_HW_SpawnNiagaraSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_JumpStamp_C_OnBurst, CallFunc_Not_PreBool_ReturnValue) == 0x0002B8, "Member 'GC_JumpStamp_C_OnBurst::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

