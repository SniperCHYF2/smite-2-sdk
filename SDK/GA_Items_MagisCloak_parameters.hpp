﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_MagisCloak

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Items_MagisCloak.GA_Items_MagisCloak_C.ExecuteUbergraph_GA_Items_MagisCloak
// 0x0030 (0x0030 - 0x0000)
struct GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInternalCooldownActive_ReturnValue;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BP_MakeEffectContext_ReturnValue;         // 0x0010(0x0018)()
	bool                                          CallFunc_K2_CommitAbilityCooldown_ReturnValue;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak) == 0x000008, "Wrong alignment on GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak");
static_assert(sizeof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak) == 0x000030, "Wrong size on GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak");
static_assert(offsetof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak, EntryPoint) == 0x000000, "Member 'GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak, CallFunc_IsInternalCooldownActive_ReturnValue) == 0x000004, "Member 'GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak::CallFunc_IsInternalCooldownActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak, CallFunc_BP_MakeEffectContext_ReturnValue) == 0x000010, "Member 'GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak::CallFunc_BP_MakeEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak, CallFunc_K2_CommitAbilityCooldown_ReturnValue) == 0x000028, "Member 'GA_Items_MagisCloak_C_ExecuteUbergraph_GA_Items_MagisCloak::CallFunc_K2_CommitAbilityCooldown_ReturnValue' has a wrong offset!");

}

