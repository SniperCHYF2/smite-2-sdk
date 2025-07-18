﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Aladdin_Lamp

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Aladdin_Lamp.GA_Aladdin_Lamp_C.ExecuteUbergraph_GA_Aladdin_Lamp
// 0x0048 (0x0048 - 0x0000)
struct GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x003C(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp) == 0x000008, "Wrong alignment on GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp");
static_assert(sizeof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp) == 0x000048, "Wrong size on GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, EntryPoint) == 0x000000, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x000010, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x000018, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000020, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000028, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000038, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x00003C, "Member 'GA_Aladdin_Lamp_C_ExecuteUbergraph_GA_Aladdin_Lamp::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");

}

