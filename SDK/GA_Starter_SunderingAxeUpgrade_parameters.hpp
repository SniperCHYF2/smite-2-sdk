﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Starter_SunderingAxeUpgrade

#include "Basic.hpp"

#include "Hemingway_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Starter_SunderingAxeUpgrade.GA_Starter_SunderingAxeUpgrade_C.ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade
// 0x0158 (0x0158 - 0x0000)
struct GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDamageEventData                       K2Node_CustomEvent_DamageEventData;                // 0x0008(0x0070)()
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanEffectProcInhandItems_Success;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanEffectProcOffhandItems_Success;        // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue; // 0x0088(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00B0(0x0010)(ReferenceParm)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FDamageEventData& DamageEventData)> K2Node_CreateDelegate_OutputDelegate; // 0x00D0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x00F8(0x0020)()
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_119[0x7];                                      // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0120(0x0010)()
	bool                                          CallFunc_IsInternalCooldownActive_ReturnValue;     // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignTagSetByCallerMagnitude_ReturnValue; // 0x0138(0x0010)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x014C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbilityCooldown_ReturnValue;     // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade) == 0x000008, "Wrong alignment on GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade");
static_assert(sizeof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade) == 0x000158, "Wrong size on GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, EntryPoint) == 0x000000, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, Temp_bool_Variable) == 0x000004, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, K2Node_CustomEvent_DamageEventData) == 0x000008, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::K2Node_CustomEvent_DamageEventData' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000078, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_CanEffectProcInhandItems_Success) == 0x000080, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_CanEffectProcInhandItems_Success' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_CanEffectProcOffhandItems_Success) == 0x000081, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_CanEffectProcOffhandItems_Success' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_HasTag_ReturnValue) == 0x000082, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_BooleanOR_ReturnValue) == 0x000083, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_BooleanAND_ReturnValue) == 0x000084, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue) == 0x000088, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000B0, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x0000C0, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x0000C8, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, K2Node_CreateDelegate_OutputDelegate) == 0x0000D0, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0000E0, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x0000F8, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000118, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000120, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_IsInternalCooldownActive_ReturnValue) == 0x000130, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_IsInternalCooldownActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_AssignTagSetByCallerMagnitude_ReturnValue) == 0x000138, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_AssignTagSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_Not_PreBool_ReturnValue) == 0x000148, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x00014C, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade, CallFunc_K2_CommitAbilityCooldown_ReturnValue) == 0x000154, "Member 'GA_Starter_SunderingAxeUpgrade_C_ExecuteUbergraph_GA_Starter_SunderingAxeUpgrade::CallFunc_K2_CommitAbilityCooldown_ReturnValue' has a wrong offset!");

// Function GA_Starter_SunderingAxeUpgrade.GA_Starter_SunderingAxeUpgrade_C.OnDamageEvent
// 0x0070 (0x0070 - 0x0000)
struct GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent final
{
public:
	struct FDamageEventData                       DamageEventData;                                   // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent) == 0x000008, "Wrong alignment on GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent");
static_assert(sizeof(GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent) == 0x000070, "Wrong size on GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent");
static_assert(offsetof(GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent, DamageEventData) == 0x000000, "Member 'GA_Starter_SunderingAxeUpgrade_C_OnDamageEvent::DamageEventData' has a wrong offset!");

}

