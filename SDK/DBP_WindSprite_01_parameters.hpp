﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBP_WindSprite_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function DBP_WindSprite_01.DBP_WindSprite_01_C.BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature final
{
public:
	class UHWInteractableComponent*               Interactable;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 InteractInstigator_0;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature) == 0x000008, "Wrong alignment on DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature");
static_assert(sizeof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature) == 0x000010, "Wrong size on DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature, Interactable) == 0x000000, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature::Interactable' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature, InteractInstigator_0) == 0x000008, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_BP_InteractableComponent_K2Node_ComponentBoundEvent_0_OnInteractionEventDel__DelegateSignature::InteractInstigator_0' has a wrong offset!");

// Function DBP_WindSprite_01.DBP_WindSprite_01_C.BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// 0x0108 (0x0108 - 0x0000)
struct DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00E8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000108, "Wrong size on DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function DBP_WindSprite_01.DBP_WindSprite_01_C.BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'DBP_WindSprite_01_C_BndEvt__DBP_WindSprite_01_Sphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function DBP_WindSprite_01.DBP_WindSprite_01_C.ExecuteUbergraph_DBP_WindSprite_01
// 0x01F0 (0x01F0 - 0x0000)
struct DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWInteractableComponent*               K2Node_ComponentBoundEvent_Interactable;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_InteractInstigator;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWCharacter_Base*                      K2Node_DynamicCast_AsHWCharacter_Base;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponent_ReturnValue;  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue; // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0078(0x00E8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0170(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0180(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1; // 0x018C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess_1;         // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue_1;      // 0x0198(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x01A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B1[0x3];                                      // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RemoveActiveEffectsWithTags_ReturnValue;  // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1; // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA[0x2];                                      // 0x01CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x01CC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x01E0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x01EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01) == 0x000008, "Wrong alignment on DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01");
static_assert(sizeof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01) == 0x0001F0, "Wrong size on DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, EntryPoint) == 0x000000, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::EntryPoint' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_Interactable) == 0x000008, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_Interactable' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_InteractInstigator) == 0x000010, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_InteractInstigator' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_DynamicCast_AsHWCharacter_Base) == 0x000018, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_DynamicCast_AsHWCharacter_Base' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_GetHWAbilitySystemComponent_ReturnValue) == 0x000028, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_GetHWAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000030, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000038, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000040, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000050, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000058, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000060, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000068, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000070, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_bFromSweep) == 0x000074, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_SweepResult) == 0x000078, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x000160, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x000168, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000170, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OtherActor) == 0x000178, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OtherComp) == 0x000180, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000188, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x00018C, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_BP_GetHWAbilitySystem_bSuccess_1) == 0x000194, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_BP_GetHWAbilitySystem_bSuccess_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_BP_GetHWAbilitySystem_ReturnValue_1) == 0x000198, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_BP_GetHWAbilitySystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0001A0, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0001B0, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_RemoveActiveEffectsWithTags_ReturnValue) == 0x0001B4, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_RemoveActiveEffectsWithTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x0001B8, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x0001C8, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, Temp_bool_IsClosed_Variable) == 0x0001C9, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, K2Node_CreateDelegate_OutputDelegate) == 0x0001CC, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0001E0, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_IsDedicatedServer_ReturnValue) == 0x0001E8, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x0001E9, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01, Temp_bool_Has_Been_Initd_Variable) == 0x0001EA, "Member 'DBP_WindSprite_01_C_ExecuteUbergraph_DBP_WindSprite_01::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

}

