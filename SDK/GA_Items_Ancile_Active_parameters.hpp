﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_Ancile_Active

#include "Basic.hpp"

#include "Hemingway_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Items_Ancile_Active.GA_Items_Ancile_Active_C.EventReceived_236D2C44403A3125BE73C7A1DD62FD72
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72) == 0x000008, "Wrong alignment on GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72");
static_assert(sizeof(GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72) == 0x0000B0, "Wrong size on GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72");
static_assert(offsetof(GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72, Payload) == 0x000000, "Member 'GA_Items_Ancile_Active_C_EventReceived_236D2C44403A3125BE73C7A1DD62FD72::Payload' has a wrong offset!");

// Function GA_Items_Ancile_Active.GA_Items_Ancile_Active_C.ExecuteUbergraph_GA_Items_Ancile_Active
// 0x01B0 (0x01B0 - 0x0000)
struct GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;  // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0020(0x00B0)()
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x00D0(0x00B0)()
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0184(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x018C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TransitionToAbilityPhase_ReturnValue;     // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayEvent*        CallFunc_WaitGameplayEventToActor_ReturnValue;     // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active) == 0x000008, "Wrong alignment on GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active");
static_assert(sizeof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active) == 0x0001B0, "Wrong size on GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, EntryPoint) == 0x000000, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, K2Node_CustomEvent_Payload) == 0x000020, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, Temp_struct_Variable) == 0x0000D0, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, K2Node_Event_bWasCancelled) == 0x000180, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000184, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x00018C, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_TransitionToAbilityPhase_ReturnValue) == 0x000194, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_TransitionToAbilityPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000198, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_WaitGameplayEventToActor_ReturnValue) == 0x0001A0, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_WaitGameplayEventToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active, CallFunc_IsValid_ReturnValue) == 0x0001A8, "Member 'GA_Items_Ancile_Active_C_ExecuteUbergraph_GA_Items_Ancile_Active::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function GA_Items_Ancile_Active.GA_Items_Ancile_Active_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Items_Ancile_Active_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_Ancile_Active_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Items_Ancile_Active_C_K2_OnEndAbility");
static_assert(sizeof(GA_Items_Ancile_Active_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Items_Ancile_Active_C_K2_OnEndAbility");
static_assert(offsetof(GA_Items_Ancile_Active_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Items_Ancile_Active_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Items_Ancile_Active.GA_Items_Ancile_Active_C.OnDamaged
// 0x0080 (0x0080 - 0x0000)
struct GA_Items_Ancile_Active_C_OnDamaged final
{
public:
	struct FDamageEventData                       DamageEventData;                                   // 0x0000(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                 Avatar;                                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_Ancile_Active_C_OnDamaged) == 0x000008, "Wrong alignment on GA_Items_Ancile_Active_C_OnDamaged");
static_assert(sizeof(GA_Items_Ancile_Active_C_OnDamaged) == 0x000080, "Wrong size on GA_Items_Ancile_Active_C_OnDamaged");
static_assert(offsetof(GA_Items_Ancile_Active_C_OnDamaged, DamageEventData) == 0x000000, "Member 'GA_Items_Ancile_Active_C_OnDamaged::DamageEventData' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_OnDamaged, Avatar) == 0x000070, "Member 'GA_Items_Ancile_Active_C_OnDamaged::Avatar' has a wrong offset!");
static_assert(offsetof(GA_Items_Ancile_Active_C_OnDamaged, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000078, "Member 'GA_Items_Ancile_Active_C_OnDamaged::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");

}

