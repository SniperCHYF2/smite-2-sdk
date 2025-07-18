﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_ArchmagesGem

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Hemingway_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Items_ArchmagesGem.GA_Items_ArchmagesGem_C.DealtDamage
// 0x0130 (0x0130 - 0x0000)
struct GA_Items_ArchmagesGem_C_DealtDamage final
{
public:
	struct FDamageEventData                       DamageEventData;                                   // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInternalCooldownActive_ReturnValue;     // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbilityCooldown_ReturnValue;     // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77[0x1];                                       // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue; // 0x0078(0x0028)()
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B0(0x0010)(ReferenceParm)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1; // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EB[0x5];                                       // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_GetEffectContext_ReturnValue;             // 0x00F0(0x0018)()
	bool                                          CallFunc_CanEffectProcOffhandItems_Success;        // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10A[0x2];                                      // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHWAbilityFiringInstanceId             CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue; // 0x010C(0x0008)(NoDestructor)
	int32                                         CallFunc_TrackFiringInstance_OutCount;             // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrackFiringInstance_ReturnValue;          // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHWAbilityFiringInstanceId             CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue_1; // 0x011C(0x0008)(NoDestructor)
	struct FHWAbilityFiringInstanceId             CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue_2; // 0x0124(0x0008)(NoDestructor)
	bool                                          CallFunc_EqualEqual_FHWAbilityFiringInstanceId_ReturnValue; // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_ArchmagesGem_C_DealtDamage) == 0x000008, "Wrong alignment on GA_Items_ArchmagesGem_C_DealtDamage");
static_assert(sizeof(GA_Items_ArchmagesGem_C_DealtDamage) == 0x000130, "Wrong size on GA_Items_ArchmagesGem_C_DealtDamage");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, DamageEventData) == 0x000000, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::DamageEventData' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, Temp_bool_Variable) == 0x000070, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, Temp_bool_Variable_1) == 0x000071, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_Not_PreBool_ReturnValue) == 0x000072, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_IsInternalCooldownActive_ReturnValue) == 0x000073, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_IsInternalCooldownActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_BooleanAND_ReturnValue) == 0x000074, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_Not_PreBool_ReturnValue_1) == 0x000075, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_K2_CommitAbilityCooldown_ReturnValue) == 0x000076, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_K2_CommitAbilityCooldown_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue) == 0x000078, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x0000A0, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x0000A8, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B0, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0000C0, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x0000D8, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000E9, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x0000EA, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_GetEffectContext_ReturnValue) == 0x0000F0, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_GetEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_CanEffectProcOffhandItems_Success) == 0x000108, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_CanEffectProcOffhandItems_Success' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_IsValid_ReturnValue) == 0x000109, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue) == 0x00010C, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_TrackFiringInstance_OutCount) == 0x000114, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_TrackFiringInstance_OutCount' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_TrackFiringInstance_ReturnValue) == 0x000118, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_TrackFiringInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue_1) == 0x00011C, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue_2) == 0x000124, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_DealtDamage, CallFunc_EqualEqual_FHWAbilityFiringInstanceId_ReturnValue) == 0x00012C, "Member 'GA_Items_ArchmagesGem_C_DealtDamage::CallFunc_EqualEqual_FHWAbilityFiringInstanceId_ReturnValue' has a wrong offset!");

// Function GA_Items_ArchmagesGem.GA_Items_ArchmagesGem_C.ExecuteUbergraph_GA_Items_ArchmagesGem
// 0x0070 (0x0070 - 0x0000)
struct GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FDamageEventData& DamageEventData)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecHandle             K2Node_Event_FiredAbilityHandle;                   // 0x0020(0x0004)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Event_FiredAbilityTags;                     // 0x0028(0x0020)(ConstParm)
	struct FHWAbilityFiringInstanceId             K2Node_Event_FiringInstanceId;                     // 0x0048(0x0008)(ConstParm, NoDestructor)
	class UHWEquipmentComponent_FiringInstanceTracker* CallFunc_GetEquipmentComponentByClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UHWAbilitySystemComponent* AbilitySystem, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FGameplayTagContainer& AbilityTags, const EAbilityFlowPhase PrevPhase, const EAbilityFlowPhase NextPhase)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue_1; // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem) == 0x000008, "Wrong alignment on GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem");
static_assert(sizeof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem) == 0x000070, "Wrong size on GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, EntryPoint) == 0x000000, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, K2Node_Event_FiredAbilityHandle) == 0x000020, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::K2Node_Event_FiredAbilityHandle' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, K2Node_Event_FiredAbilityTags) == 0x000028, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::K2Node_Event_FiredAbilityTags' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, K2Node_Event_FiringInstanceId) == 0x000048, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::K2Node_Event_FiringInstanceId' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, CallFunc_GetEquipmentComponentByClass_ReturnValue) == 0x000050, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::CallFunc_GetEquipmentComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem, CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue_1) == 0x000068, "Member 'GA_Items_ArchmagesGem_C_ExecuteUbergraph_GA_Items_ArchmagesGem::CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue_1' has a wrong offset!");

// Function GA_Items_ArchmagesGem.GA_Items_ArchmagesGem_C.ListenForOffhandEnteringFiring
// 0x0038 (0x0038 - 0x0000)
struct GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring final
{
public:
	class UHWAbilitySystemComponent*              AbilitySystem;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecHandle             AbilityHandle;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  AbilityTags_0;                                     // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	EAbilityFlowPhase                             PrevPhase;                                         // 0x0030(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAbilityFlowPhase                             NextPhase;                                         // 0x0031(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring) == 0x000008, "Wrong alignment on GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring");
static_assert(sizeof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring) == 0x000038, "Wrong size on GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring, AbilitySystem) == 0x000000, "Member 'GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring::AbilitySystem' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring, AbilityHandle) == 0x000008, "Member 'GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring::AbilityHandle' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring, AbilityTags_0) == 0x000010, "Member 'GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring::AbilityTags_0' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring, PrevPhase) == 0x000030, "Member 'GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring::PrevPhase' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring, NextPhase) == 0x000031, "Member 'GA_Items_ArchmagesGem_C_ListenForOffhandEnteringFiring::NextPhase' has a wrong offset!");

// Function GA_Items_ArchmagesGem.GA_Items_ArchmagesGem_C.OnAbilityFired
// 0x0030 (0x0030 - 0x0000)
struct GA_Items_ArchmagesGem_C_OnAbilityFired final
{
public:
	struct FGameplayAbilitySpecHandle             FiredAbilityHandle;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  FiredAbilityTags;                                  // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHWAbilityFiringInstanceId             FiringInstanceId;                                  // 0x0028(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(GA_Items_ArchmagesGem_C_OnAbilityFired) == 0x000008, "Wrong alignment on GA_Items_ArchmagesGem_C_OnAbilityFired");
static_assert(sizeof(GA_Items_ArchmagesGem_C_OnAbilityFired) == 0x000030, "Wrong size on GA_Items_ArchmagesGem_C_OnAbilityFired");
static_assert(offsetof(GA_Items_ArchmagesGem_C_OnAbilityFired, FiredAbilityHandle) == 0x000000, "Member 'GA_Items_ArchmagesGem_C_OnAbilityFired::FiredAbilityHandle' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_OnAbilityFired, FiredAbilityTags) == 0x000008, "Member 'GA_Items_ArchmagesGem_C_OnAbilityFired::FiredAbilityTags' has a wrong offset!");
static_assert(offsetof(GA_Items_ArchmagesGem_C_OnAbilityFired, FiringInstanceId) == 0x000028, "Member 'GA_Items_ArchmagesGem_C_OnAbilityFired::FiringInstanceId' has a wrong offset!");

}

