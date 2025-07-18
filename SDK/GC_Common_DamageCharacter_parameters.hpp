﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Common_DamageCharacter

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GC_Common_DamageCharacter.GC_Common_DamageCharacter_C.IncreaseDamageMaterialIntensity
// 0x0008 (0x0008 - 0x0000)
struct GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity final
{
public:
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity) == 0x000008, "Wrong alignment on GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity");
static_assert(sizeof(GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity) == 0x000008, "Wrong size on GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity");
static_assert(offsetof(GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000000, "Member 'GC_Common_DamageCharacter_C_IncreaseDamageMaterialIntensity::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");

// Function GC_Common_DamageCharacter.GC_Common_DamageCharacter_C.OnExecute
// 0x0228 (0x0228 - 0x0000)
struct GC_Common_DamageCharacter_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          isBigHit;                                          // 0x00E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 IncomingTarget;                                    // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  InstigatingPawn;                                   // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0100(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0128(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0148(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_BreakGameplayCueParameters_GameplayStackCount; // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy; // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetInstigatorActor_ReturnValue;           // 0x01D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E3[0x5];                                      // 0x01E3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWCharacter_Smite_God*                 K2Node_DynamicCast_AsHWCharacter_Smite_God;        // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x01F4(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0208(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ActivateCharacterDamagedFeedbackMaterialOverlay_MaterialIntensity_ImplicitCast; // 0x0218(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_ActivateCharacterDamagedFeedbackMaterialOverlay_Duration_ImplicitCast; // 0x0220(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Common_DamageCharacter_C_OnExecute) == 0x000008, "Wrong alignment on GC_Common_DamageCharacter_C_OnExecute");
static_assert(sizeof(GC_Common_DamageCharacter_C_OnExecute) == 0x000228, "Wrong size on GC_Common_DamageCharacter_C_OnExecute");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, MyTarget) == 0x000000, "Member 'GC_Common_DamageCharacter_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, Parameters) == 0x000008, "Member 'GC_Common_DamageCharacter_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, ReturnValue) == 0x0000E0, "Member 'GC_Common_DamageCharacter_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, isBigHit) == 0x0000E1, "Member 'GC_Common_DamageCharacter_C_OnExecute::isBigHit' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, IncomingTarget) == 0x0000E8, "Member 'GC_Common_DamageCharacter_C_OnExecute::IncomingTarget' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, InstigatingPawn) == 0x0000F0, "Member 'GC_Common_DamageCharacter_C_OnExecute::InstigatingPawn' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000F8, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000FC, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000100, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000118, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000120, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000128, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000148, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_Location) == 0x000168, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_Normal) == 0x000180, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000198, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0001A0, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0001A8, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0001B0, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0001B8, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0001BC, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayStackCount) == 0x0001C0, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayStackCount' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001C8, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001D0, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_GetInstigatorActor_ReturnValue) == 0x0001D8, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_GetInstigatorActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0001E0, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_IsValid_ReturnValue) == 0x0001E1, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_IsValid_ReturnValue_1) == 0x0001E2, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, K2Node_DynamicCast_AsHWCharacter_Smite_God) == 0x0001E8, "Member 'GC_Common_DamageCharacter_C_OnExecute::K2Node_DynamicCast_AsHWCharacter_Smite_God' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'GC_Common_DamageCharacter_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001F1, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0001F2, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_BooleanOR_ReturnValue) == 0x0001F3, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, K2Node_CreateDelegate_OutputDelegate) == 0x0001F4, "Member 'GC_Common_DamageCharacter_C_OnExecute::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000208, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000210, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_ActivateCharacterDamagedFeedbackMaterialOverlay_MaterialIntensity_ImplicitCast) == 0x000218, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_ActivateCharacterDamagedFeedbackMaterialOverlay_MaterialIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00021C, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_OnExecute, CallFunc_ActivateCharacterDamagedFeedbackMaterialOverlay_Duration_ImplicitCast) == 0x000220, "Member 'GC_Common_DamageCharacter_C_OnExecute::CallFunc_ActivateCharacterDamagedFeedbackMaterialOverlay_Duration_ImplicitCast' has a wrong offset!");

// Function GC_Common_DamageCharacter.GC_Common_DamageCharacter_C.PlayForceFeedback
// 0x0038 (0x0038 - 0x0000)
struct GC_Common_DamageCharacter_C_PlayForceFeedback final
{
public:
	class AHWCharacter_Smite_God*                 HWCharacter_Smite_God_Ref;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          isBigHit;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UForceFeedbackEffect*                   SmallForceFeedbackEffect;                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   BigForceFeedbackEffect;                            // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      LocalViewingPlayerController;                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GC_Common_DamageCharacter_C_PlayForceFeedback) == 0x000008, "Wrong alignment on GC_Common_DamageCharacter_C_PlayForceFeedback");
static_assert(sizeof(GC_Common_DamageCharacter_C_PlayForceFeedback) == 0x000038, "Wrong size on GC_Common_DamageCharacter_C_PlayForceFeedback");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, HWCharacter_Smite_God_Ref) == 0x000000, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::HWCharacter_Smite_God_Ref' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, isBigHit) == 0x000008, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::isBigHit' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, SmallForceFeedbackEffect) == 0x000010, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::SmallForceFeedbackEffect' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, BigForceFeedbackEffect) == 0x000018, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::BigForceFeedbackEffect' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, LocalViewingPlayerController) == 0x000020, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::LocalViewingPlayerController' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000028, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Common_DamageCharacter_C_PlayForceFeedback, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'GC_Common_DamageCharacter_C_PlayForceFeedback::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

