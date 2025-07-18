﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Aladdin_A04_NonFighterDebuff

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Hemingway_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function GA_Aladdin_A04_NonFighterDebuff.GA_Aladdin_A04_NonFighterDebuff_C.ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff
// 0x0078 (0x0078 - 0x0000)
struct GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWGameState*                           CallFunc_GetHWGameState_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETeamAttitude                                 Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWAladdinArenaManager*                 CallFunc_GetAladdinArenaManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Aladdin_ArenaManagerSingleton_C*    K2Node_DynamicCast_AsBP_Aladdin_Arena_Manager_Singleton; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue_1; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseDamageValue)> K2Node_CreateDelegate_OutputDelegate; // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseDamageValue)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETeamAttitude                                 CallFunc_GetTeamAttitudeTowards_ReturnValue;       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff) == 0x000008, "Wrong alignment on GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff");
static_assert(sizeof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff) == 0x000078, "Wrong size on GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, EntryPoint) == 0x000000, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, CallFunc_GetHWGameState_ReturnValue) == 0x000008, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::CallFunc_GetHWGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, Temp_byte_Variable) == 0x000010, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, CallFunc_GetAladdinArenaManager_ReturnValue) == 0x000018, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::CallFunc_GetAladdinArenaManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, Temp_bool_Variable) == 0x000020, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, K2Node_DynamicCast_AsBP_Aladdin_Arena_Manager_Singleton) == 0x000028, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::K2Node_DynamicCast_AsBP_Aladdin_Arena_Manager_Singleton' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, Temp_bool_Variable_1) == 0x000031, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, Temp_bool_Variable_2) == 0x000032, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000038, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue_1) == 0x000040, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000068, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, CallFunc_GetTeamAttitudeTowards_ReturnValue) == 0x000070, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::CallFunc_GetTeamAttitudeTowards_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff, K2Node_Select_Default) == 0x000071, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_ExecuteUbergraph_GA_Aladdin_A04_NonFighterDebuff::K2Node_Select_Default' has a wrong offset!");

// Function GA_Aladdin_A04_NonFighterDebuff.GA_Aladdin_A04_NonFighterDebuff_C.OnAdjustDamageReceived_Event
// 0x00E0 (0x00E0 - 0x0000)
struct GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event final
{
public:
	struct FGameplayTagContainer                  EffectTags;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDamageCalcInfo                        DamageCalcInfo;                                    // 0x0020(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UHWAbilitySystemComponent*              BroadcastingAbilitySystemComponent;                // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EHWAdjustAttributeEventType                   AdjustAttributeEventType;                          // 0x00B8(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseDamageValue;                                   // 0x00BC(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActor_ReturnValue;               // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_AdjustSubscribedAttributeFromCombatEvent_CoefficientMultiplier_ImplicitCast; // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event) == 0x000008, "Wrong alignment on GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event");
static_assert(sizeof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event) == 0x0000E0, "Wrong size on GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, EffectTags) == 0x000000, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::EffectTags' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, DamageCalcInfo) == 0x000020, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::DamageCalcInfo' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, BroadcastingAbilitySystemComponent) == 0x0000B0, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::BroadcastingAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, AdjustAttributeEventType) == 0x0000B8, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::AdjustAttributeEventType' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, BaseDamageValue) == 0x0000BC, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::BaseDamageValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, Temp_bool_Variable) == 0x0000C0, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, CallFunc_GetAvatarActor_ReturnValue) == 0x0000C8, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::CallFunc_GetAvatarActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, K2Node_Select_Default) == 0x0000D0, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000D8, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event, CallFunc_AdjustSubscribedAttributeFromCombatEvent_CoefficientMultiplier_ImplicitCast) == 0x0000DC, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageReceived_Event::CallFunc_AdjustSubscribedAttributeFromCombatEvent_CoefficientMultiplier_ImplicitCast' has a wrong offset!");

// Function GA_Aladdin_A04_NonFighterDebuff.GA_Aladdin_A04_NonFighterDebuff_C.OnAdjustDamageToTarget_Event
// 0x00E0 (0x00E0 - 0x0000)
struct GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event final
{
public:
	struct FGameplayTagContainer                  EffectTags;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDamageCalcInfo                        DamageCalcInfo;                                    // 0x0020(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UHWAbilitySystemComponent*              BroadcastingAbilitySystemComponent;                // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EHWAdjustAttributeEventType                   AdjustAttributeEventType;                          // 0x00B8(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseDamageValue;                                   // 0x00BC(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActor_ReturnValue;               // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Select_Default;                             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x3];                                       // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_AdjustSubscribedAttributeFromCombatEvent_CoefficientMultiplier_ImplicitCast; // 0x00DC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event) == 0x000008, "Wrong alignment on GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event");
static_assert(sizeof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event) == 0x0000E0, "Wrong size on GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, EffectTags) == 0x000000, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::EffectTags' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, DamageCalcInfo) == 0x000020, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::DamageCalcInfo' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, BroadcastingAbilitySystemComponent) == 0x0000B0, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::BroadcastingAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, AdjustAttributeEventType) == 0x0000B8, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::AdjustAttributeEventType' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, BaseDamageValue) == 0x0000BC, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::BaseDamageValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, Temp_bool_Variable) == 0x0000C0, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, CallFunc_GetAvatarActor_ReturnValue) == 0x0000C8, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::CallFunc_GetAvatarActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, K2Node_Select_Default) == 0x0000D0, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000D8, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event, CallFunc_AdjustSubscribedAttributeFromCombatEvent_CoefficientMultiplier_ImplicitCast) == 0x0000DC, "Member 'GA_Aladdin_A04_NonFighterDebuff_C_OnAdjustDamageToTarget_Event::CallFunc_AdjustSubscribedAttributeFromCombatEvent_CoefficientMultiplier_ImplicitCast' has a wrong offset!");

}

