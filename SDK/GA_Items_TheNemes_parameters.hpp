﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_TheNemes

#include "Basic.hpp"

#include "Hemingway_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function GA_Items_TheNemes.GA_Items_TheNemes_C.AddStacksFromAssists
// 0x0178 (0x0178 - 0x0000)
struct GA_Items_TheNemes_C_AddStacksFromAssists final
{
public:
	class AHWTeamState*                           Team;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWPlayerState*                         TeamMember;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAssistEventData                       AssistEventData;                                   // 0x0010(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FDamageEventData& KillEventData)> K2Node_CreateDelegate_OutputDelegate; // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FAssistEventData& AssistEventData)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess_1;         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue_1;      // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGenericTeamId                         CallFunc_GetGenericTeamId_ReturnValue;             // 0x0098(0x0001)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWTeamState*                           CallFunc_GetTeamState_ReturnValue;                 // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess_2;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue_2;      // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x00B8(0x0020)()
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1; // 0x00D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EB[0x1];                                       // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x00EC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWEquipmentInstance*                   CallFunc_GetEquipmentInstance_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWInventoryManagerComponent*           CallFunc_GetInventoryManagerFromActorInfo_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FHWInventorySlot                       CallFunc_GetInventorySlot_ReturnValue;             // 0x0108(0x000C)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0114(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWEquipmentInstance*                   CallFunc_RetrieveEquipment_ReturnValue;            // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1; // 0x0138(0x0020)()
	class UHWEquipmentComponent_Stacks*           CallFunc_GetEquipmentComponentByClass_ReturnValue; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1; // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_162[0x6];                                      // 0x0162(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x0168(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_TheNemes_C_AddStacksFromAssists) == 0x000008, "Wrong alignment on GA_Items_TheNemes_C_AddStacksFromAssists");
static_assert(sizeof(GA_Items_TheNemes_C_AddStacksFromAssists) == 0x000178, "Wrong size on GA_Items_TheNemes_C_AddStacksFromAssists");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, Team) == 0x000000, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::Team' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, TeamMember) == 0x000008, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::TeamMember' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, AssistEventData) == 0x000010, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::AssistEventData' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, Temp_bool_Variable) == 0x000030, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x000031, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x000038, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000040, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000068, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, K2Node_CreateDelegate_OutputDelegate_1) == 0x000070, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_GetHWAbilitySystem_bSuccess_1) == 0x000080, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_GetHWAbilitySystem_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_GetHWAbilitySystem_ReturnValue_1) == 0x000088, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_GetHWAbilitySystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000090, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetGenericTeamId_ReturnValue) == 0x000098, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetGenericTeamId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetTeamState_ReturnValue) == 0x0000A0, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetTeamState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_GetHWAbilitySystem_bSuccess_2) == 0x0000A8, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_GetHWAbilitySystem_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_GetHWAbilitySystem_ReturnValue_2) == 0x0000B0, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_GetHWAbilitySystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x0000B8, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1) == 0x0000D8, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, Temp_bool_Variable_1) == 0x0000E9, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0000EA, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x0000EC, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetEquipmentInstance_ReturnValue) == 0x0000F8, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetEquipmentInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetInventoryManagerFromActorInfo_ReturnValue) == 0x000100, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetInventoryManagerFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetInventorySlot_ReturnValue) == 0x000108, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetInventorySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000114, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_RetrieveEquipment_ReturnValue) == 0x000120, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_RetrieveEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_IsValid_ReturnValue) == 0x000128, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetStackCount_ReturnValue) == 0x00012C, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000130, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1) == 0x000138, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetEquipmentComponentByClass_ReturnValue) == 0x000158, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetEquipmentComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1) == 0x000160, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_HasAnyMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_IsValid_ReturnValue_1) == 0x000161, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000168, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromAssists, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000170, "Member 'GA_Items_TheNemes_C_AddStacksFromAssists::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function GA_Items_TheNemes.GA_Items_TheNemes_C.AddStacksFromKills
// 0x0168 (0x0168 - 0x0000)
struct GA_Items_TheNemes_C_AddStacksFromKills final
{
public:
	struct FDamageEventData                       KillEventData;                                     // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x0070(0x0020)()
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FDamageEventData& KillEventData)> K2Node_CreateDelegate_OutputDelegate; // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface; // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess_1;         // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue_1;      // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FAssistEventData& AssistEventData)> K2Node_CreateDelegate_OutputDelegate_1; // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGenericTeamId                         CallFunc_GetGenericTeamId_ReturnValue;             // 0x0100(0x0001)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWEquipmentInstance*                   CallFunc_GetEquipmentInstance_ReturnValue;         // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AHWTeamState*                           CallFunc_GetTeamState_ReturnValue;                 // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FHWInventorySlot                       CallFunc_GetInventorySlot_ReturnValue;             // 0x0118(0x000C)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWInventoryManagerComponent*           CallFunc_GetInventoryManagerFromActorInfo_ReturnValue; // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0130(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UHWEquipmentInstance*                   CallFunc_RetrieveEquipment_ReturnValue;            // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x3];                                      // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWEquipmentComponent_Stacks*           CallFunc_GetEquipmentComponentByClass_ReturnValue; // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_TheNemes_C_AddStacksFromKills) == 0x000008, "Wrong alignment on GA_Items_TheNemes_C_AddStacksFromKills");
static_assert(sizeof(GA_Items_TheNemes_C_AddStacksFromKills) == 0x000168, "Wrong size on GA_Items_TheNemes_C_AddStacksFromKills");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, KillEventData) == 0x000000, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::KillEventData' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000070, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x000090, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x000098, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0000B0, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000C8, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0000D0, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_BP_GetHWAbilitySystem_bSuccess_1) == 0x0000D1, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_BP_GetHWAbilitySystem_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_BP_GetHWAbilitySystem_ReturnValue_1) == 0x0000D8, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_BP_GetHWAbilitySystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000E0, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0000F0, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x0000F8, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetGenericTeamId_ReturnValue) == 0x000100, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetGenericTeamId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetEquipmentInstance_ReturnValue) == 0x000108, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetEquipmentInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetTeamState_ReturnValue) == 0x000110, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetTeamState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetInventorySlot_ReturnValue) == 0x000118, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetInventorySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetInventoryManagerFromActorInfo_ReturnValue) == 0x000128, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetInventoryManagerFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000130, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_RetrieveEquipment_ReturnValue) == 0x000138, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_RetrieveEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetStackCount_ReturnValue) == 0x000144, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, Temp_bool_Variable) == 0x000148, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000149, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetEquipmentComponentByClass_ReturnValue) == 0x000150, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetEquipmentComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x000158, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_IsValid_ReturnValue_1) == 0x000160, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_AddStacksFromKills, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000161, "Member 'GA_Items_TheNemes_C_AddStacksFromKills::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function GA_Items_TheNemes.GA_Items_TheNemes_C.ExecuteUbergraph_GA_Items_TheNemes
// 0x0070 (0x0070 - 0x0000)
struct GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FDamageEventData& KillEventData)> K2Node_CreateDelegate_OutputDelegate; // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AHWTeamState* Team, class AHWPlayerState* TeamMember, const struct FAssistEventData& AssistEventData)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGenericTeamId                         CallFunc_GetGenericTeamId_ReturnValue;             // 0x0030(0x0001)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWTeamState*                           CallFunc_GetTeamState_ReturnValue;                 // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UHWEquipmentComponent_Stacks*           CallFunc_GetEquipmentComponentByClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_GetHWAbilitySystem_bSuccess;           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62[0x6];                                       // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UHWAbilitySystemComponent*              CallFunc_BP_GetHWAbilitySystem_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes) == 0x000008, "Wrong alignment on GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes");
static_assert(sizeof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes) == 0x000070, "Wrong size on GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, EntryPoint) == 0x000000, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000018, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_GetGenericTeamId_ReturnValue) == 0x000030, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_GetGenericTeamId_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_GetTeamState_ReturnValue) == 0x000038, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_GetTeamState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_GetEquipmentComponentByClass_ReturnValue) == 0x000040, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_GetEquipmentComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, K2Node_Event_bWasCancelled) == 0x000048, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue) == 0x000050, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_GetHWAbilitySystemComponentFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x000058, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000060, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_BP_GetHWAbilitySystem_bSuccess) == 0x000061, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_BP_GetHWAbilitySystem_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes, CallFunc_BP_GetHWAbilitySystem_ReturnValue) == 0x000068, "Member 'GA_Items_TheNemes_C_ExecuteUbergraph_GA_Items_TheNemes::CallFunc_BP_GetHWAbilitySystem_ReturnValue' has a wrong offset!");

// Function GA_Items_TheNemes.GA_Items_TheNemes_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Items_TheNemes_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Items_TheNemes_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Items_TheNemes_C_K2_OnEndAbility");
static_assert(sizeof(GA_Items_TheNemes_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Items_TheNemes_C_K2_OnEndAbility");
static_assert(offsetof(GA_Items_TheNemes_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Items_TheNemes_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

