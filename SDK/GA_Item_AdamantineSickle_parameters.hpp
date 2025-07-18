﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Item_AdamantineSickle

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Item_AdamantineSickle.GA_Item_AdamantineSickle_C.Changed_448643EC4F24BDEA988583A70919306D
// 0x0048 (0x0048 - 0x0000)
struct GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                         NewValue;                                          // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldValue;                                          // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                OwningAbilitySystem;                               // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D) == 0x000008, "Wrong alignment on GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D");
static_assert(sizeof(GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D) == 0x000048, "Wrong size on GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D");
static_assert(offsetof(GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D, Attribute) == 0x000000, "Member 'GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D::Attribute' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D, NewValue) == 0x000038, "Member 'GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D::NewValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D, OldValue) == 0x00003C, "Member 'GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D::OldValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D, OwningAbilitySystem) == 0x000040, "Member 'GA_Item_AdamantineSickle_C_Changed_448643EC4F24BDEA988583A70919306D::OwningAbilitySystem' has a wrong offset!");

// Function GA_Item_AdamantineSickle.GA_Item_AdamantineSickle_C.ExecuteUbergraph_GA_Item_AdamantineSickle
// 0x0150 (0x0150 - 0x0000)
struct GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAttribute                     K2Node_CustomEvent_Attribute_1;                    // 0x0008(0x0038)(HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue_1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_OldValue_1;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                K2Node_CustomEvent_OwningAbilitySystem;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem)> K2Node_CreateDelegate_OutputDelegate; // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                Temp_object_Variable;                              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable;                                // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                     Temp_struct_Variable;                              // 0x0070(0x0038)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem)> K2Node_CreateDelegate_OutputDelegate_1; // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitAttributeChanged*     CallFunc_WaitForAttributeChanged_ReturnValue;      // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                     K2Node_CustomEvent_Attribute;                      // 0x00C8(0x0038)(HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_NewValue;                       // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_OldValue;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                K2Node_CustomEvent_Owning_Ability_System;          // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13A[0x6];                                      // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle) == 0x000008, "Wrong alignment on GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle");
static_assert(sizeof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle) == 0x000150, "Wrong size on GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, EntryPoint) == 0x000000, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_Attribute_1) == 0x000008, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_Attribute_1' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_NewValue_1) == 0x000040, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_NewValue_1' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_OldValue_1) == 0x000044, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_OldValue_1' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_OwningAbilitySystem) == 0x000048, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_OwningAbilitySystem' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, Temp_object_Variable) == 0x000060, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, Temp_real_Variable) == 0x000068, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, Temp_real_Variable_1) == 0x00006C, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, Temp_struct_Variable) == 0x000070, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000A8, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B0, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_WaitForAttributeChanged_ReturnValue) == 0x0000C0, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_WaitForAttributeChanged_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_Attribute) == 0x0000C8, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_Attribute' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_NewValue) == 0x000100, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_OldValue) == 0x000104, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_OldValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_CustomEvent_Owning_Ability_System) == 0x000108, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_CustomEvent_Owning_Ability_System' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000118, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000120, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000128, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_GetFloatAttribute_ReturnValue) == 0x00012C, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000130, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, K2Node_Event_bWasCancelled) == 0x000138, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000139, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000140, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000148, "Member 'GA_Item_AdamantineSickle_C_ExecuteUbergraph_GA_Item_AdamantineSickle::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function GA_Item_AdamantineSickle.GA_Item_AdamantineSickle_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Item_AdamantineSickle_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Item_AdamantineSickle_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Item_AdamantineSickle_C_K2_OnEndAbility");
static_assert(sizeof(GA_Item_AdamantineSickle_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Item_AdamantineSickle_C_K2_OnEndAbility");
static_assert(offsetof(GA_Item_AdamantineSickle_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Item_AdamantineSickle_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Item_AdamantineSickle.GA_Item_AdamantineSickle_C.UpdatedHealth
// 0x0048 (0x0048 - 0x0000)
struct GA_Item_AdamantineSickle_C_UpdatedHealth final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	float                                         NewValue;                                          // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OldValue;                                          // 0x003C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                Owning_Ability_System;                             // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Item_AdamantineSickle_C_UpdatedHealth) == 0x000008, "Wrong alignment on GA_Item_AdamantineSickle_C_UpdatedHealth");
static_assert(sizeof(GA_Item_AdamantineSickle_C_UpdatedHealth) == 0x000048, "Wrong size on GA_Item_AdamantineSickle_C_UpdatedHealth");
static_assert(offsetof(GA_Item_AdamantineSickle_C_UpdatedHealth, Attribute) == 0x000000, "Member 'GA_Item_AdamantineSickle_C_UpdatedHealth::Attribute' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_UpdatedHealth, NewValue) == 0x000038, "Member 'GA_Item_AdamantineSickle_C_UpdatedHealth::NewValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_UpdatedHealth, OldValue) == 0x00003C, "Member 'GA_Item_AdamantineSickle_C_UpdatedHealth::OldValue' has a wrong offset!");
static_assert(offsetof(GA_Item_AdamantineSickle_C_UpdatedHealth, Owning_Ability_System) == 0x000040, "Member 'GA_Item_AdamantineSickle_C_UpdatedHealth::Owning_Ability_System' has a wrong offset!");

}

