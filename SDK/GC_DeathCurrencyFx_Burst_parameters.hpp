﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_DeathCurrencyFx_Burst

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "DataTableSkinsCommon_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GC_DeathCurrencyFx_Burst.GC_DeathCurrencyFx_Burst_C.OnBurst
// 0x02B0 (0x02B0 - 0x0000)
struct GC_DeathCurrencyFx_Burst_C_OnBurst final
{
public:
	class AActor*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayCueNotify_SpawnResult         SpawnResults;                                      // 0x00E0(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	float                                         Offset;                                            // 0x0138(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0x4];                                      // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0148(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0168(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0170(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0190(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x01C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x01E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_BreakGameplayCueParameters_GameplayStackCount; // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x0210(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_219[0x3];                                      // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAssetRequestKey                       K2Node_MakeStruct_AssetRequestKey;                 // 0x021C(0x001C)(NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0238(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector_X;                            // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCapsuleHalfHeight_ReturnValue;         // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0288(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_HW_SpawnNiagaraSystemAtLocation_ReturnValue; // 0x02A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_DeathCurrencyFx_Burst_C_OnBurst) == 0x000008, "Wrong alignment on GC_DeathCurrencyFx_Burst_C_OnBurst");
static_assert(sizeof(GC_DeathCurrencyFx_Burst_C_OnBurst) == 0x0002B0, "Wrong size on GC_DeathCurrencyFx_Burst_C_OnBurst");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, Target) == 0x000000, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::Target' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, Parameters) == 0x000008, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::Parameters' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, SpawnResults) == 0x0000E0, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::SpawnResults' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, Offset) == 0x000138, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::Offset' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x00013C, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000140, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000148, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000160, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000168, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000170, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000190, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_Location) == 0x0001B0, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_Normal) == 0x0001C8, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0001E0, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001E8, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001F0, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001F8, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000200, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x000204, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_GameplayStackCount) == 0x000208, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_GameplayStackCount' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000210, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x000218, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, K2Node_MakeStruct_AssetRequestKey) == 0x00021C, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::K2Node_MakeStruct_AssetRequestKey' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000238, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000250, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, K2Node_DynamicCast_bSuccess) == 0x000258, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakVector_X) == 0x000260, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakVector_Y) == 0x000268, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_BreakVector_Z) == 0x000270, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_GetCapsuleHalfHeight_ReturnValue) == 0x000278, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_GetCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000280, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_MakeVector_ReturnValue) == 0x000288, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_HW_SpawnNiagaraSystemAtLocation_ReturnValue) == 0x0002A0, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_HW_SpawnNiagaraSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_DeathCurrencyFx_Burst_C_OnBurst, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0002A8, "Member 'GC_DeathCurrencyFx_Burst_C_OnBurst::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

