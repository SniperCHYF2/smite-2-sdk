﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_BindingsOfLyngvi

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Hemingway_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function GA_Items_BindingsOfLyngvi.GA_Items_BindingsOfLyngvi_C.BP_OnGameplayEffectAppliedToTarget
// 0x0148 (0x0148 - 0x0000)
struct GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget final
{
public:
	const class AActor*                           Target_0;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            ActiveHandle;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  EffectAssetTags;                                   // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEffectSpecHandle              EffectSpecHandle;                                  // 0x0030(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_HasTag_ReturnValue;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_GetEffectContext_ReturnValue;             // 0x0050(0x0018)()
	ETeamAttitude                                 CallFunc_GetTeamAttitudeTowards_ReturnValue;       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x6];                                       // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWEquipmentComponent_FiringInstanceTracker* CallFunc_GetEquipmentComponentByClass_ReturnValue; // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ETeamAttitude                                 CallFunc_GetTeamAttitudeTowards_ReturnValue_1;     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHWAbilityFiringInstanceId             CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue; // 0x0084(0x0008)(NoDestructor)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_TrackFiringInstance_OutCount;             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TrackFiringInstance_ReturnValue;          // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue; // 0x00A0(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x00C8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue_1; // 0x00E8(0x0028)()
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1; // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue_1;          // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1; // 0x0118(0x0010)(ReferenceParm)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget) == 0x000008, "Wrong alignment on GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget");
static_assert(sizeof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget) == 0x000148, "Wrong size on GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, Target_0) == 0x000000, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::Target_0' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, ActiveHandle) == 0x000008, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::ActiveHandle' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, EffectAssetTags) == 0x000010, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::EffectAssetTags' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, EffectSpecHandle) == 0x000030, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::EffectSpecHandle' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_HasTag_ReturnValue) == 0x000040, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000048, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetEffectContext_ReturnValue) == 0x000050, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetTeamAttitudeTowards_ReturnValue) == 0x000068, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetTeamAttitudeTowards_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000069, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000070, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetEquipmentComponentByClass_ReturnValue) == 0x000078, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetEquipmentComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetTeamAttitudeTowards_ReturnValue_1) == 0x000080, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetTeamAttitudeTowards_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000082, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_BooleanAND_ReturnValue) == 0x000083, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue) == 0x000084, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetFiringInstanceIdFromEffectContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x00008C, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x000090, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_TrackFiringInstance_OutCount) == 0x000098, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_TrackFiringInstance_OutCount' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_TrackFiringInstance_ReturnValue) == 0x00009C, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_TrackFiringInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue) == 0x0000A0, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x0000C8, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x0000D8, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x0000E0, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetFloatAttribute_ReturnValue) == 0x0000E4, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue_1) == 0x0000E8, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_CreateSingleHitTargetDataFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1) == 0x000110, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GetFloatAttribute_ReturnValue_1) == 0x000114, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GetFloatAttribute_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1) == 0x000118, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000128, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000130, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000138, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000140, "Member 'GA_Items_BindingsOfLyngvi_C_BP_OnGameplayEffectAppliedToTarget::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function GA_Items_BindingsOfLyngvi.GA_Items_BindingsOfLyngvi_C.ExecuteUbergraph_GA_Items_BindingsOfLyngvi
// 0x0004 (0x0004 - 0x0000)
struct GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi) == 0x000004, "Wrong alignment on GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi");
static_assert(sizeof(GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi) == 0x000004, "Wrong size on GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi");
static_assert(offsetof(GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi, EntryPoint) == 0x000000, "Member 'GA_Items_BindingsOfLyngvi_C_ExecuteUbergraph_GA_Items_BindingsOfLyngvi::EntryPoint' has a wrong offset!");

}

