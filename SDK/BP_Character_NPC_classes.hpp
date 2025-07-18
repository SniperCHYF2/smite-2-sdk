﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Character_NPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EJungleTribes_structs.hpp"
#include "ERenownRewardType_structs.hpp"
#include "EBotLeashState_structs.hpp"
#include "EJungleBuffType_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Character_NPC.BP_Character_NPC_C
// 0x0060 (0x1450 - 0x13F0)
class ABP_Character_NPC_C final : public AHWCharacter_NPC
{
public:
	uint8                                         Pad_13E8[0x8];                                     // 0x13E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x13F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        RenownReward;                                      // 0x13F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERenownRewardType                             RenownRewardType;                                  // 0x1400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJungleTribes                                 Tribe;                                             // 0x1401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EJungleBuffType                               BuffDropType;                                      // 0x1402(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1403[0x1];                                     // 0x1403(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentTribeLevel;                                 // 0x1404(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   RenownCurveTable;                                  // 0x1408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>            AmbientGE;                                         // 0x1418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(EBotLeashState LeashState)> CharacterLeashed;                      // 0x1420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        PullTimeRemaining;                                 // 0x1430(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        PullDistance;                                      // 0x1438(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DistanceFromHome;                                  // 0x1440(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBotLeashState                                LeashState;                                        // 0x1448(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void Die(const struct FDamageEventData& DeathDamageReceivedEvent);
	void ExecuteUbergraph_BP_Character_NPC(int32 EntryPoint);
	double GetDistanceFromLeashLocation();
	double GetRemainingPullTimer();
	void GrantReward(int32 TribeLevel, int32 KillingTeamID);
	void NonRenownCreatureDied(const struct FDamageEventData& DamageEventData);
	void OnRep_LeashState();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RenownCreatureDied(const struct FDamageEventData& DamageEventData);
	void SpawnCentaurBuff(int32 TribeLevel, int32 KillingTeamID, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnChimeraBuff(int32 TribeLevel, int32 KillingTeamID, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnHarpyBuff(int32 TribeLevel, int32 KillingTeamID, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnManticoreBuff(int32 TribeLevel, int32 KillingTeamID, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnNagaBuff(int32 TribeLevel, int32 KillingTeamID, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void SpawnSatyrBuff(int32 TribeLevel, int32 KillingTeamID, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation);
	void Tag_Changed(const struct FGameplayTag& Tag, int32 TagCount, class UHWAbilitySystemComponent* AbilitySystem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Character_NPC_C">();
	}
	static class ABP_Character_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Character_NPC_C>();
	}
};
static_assert(alignof(ABP_Character_NPC_C) == 0x000010, "Wrong alignment on ABP_Character_NPC_C");
static_assert(sizeof(ABP_Character_NPC_C) == 0x001450, "Wrong size on ABP_Character_NPC_C");
static_assert(offsetof(ABP_Character_NPC_C, UberGraphFrame) == 0x0013F0, "Member 'ABP_Character_NPC_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, RenownReward) == 0x0013F8, "Member 'ABP_Character_NPC_C::RenownReward' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, RenownRewardType) == 0x001400, "Member 'ABP_Character_NPC_C::RenownRewardType' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, Tribe) == 0x001401, "Member 'ABP_Character_NPC_C::Tribe' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, BuffDropType) == 0x001402, "Member 'ABP_Character_NPC_C::BuffDropType' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, CurrentTribeLevel) == 0x001404, "Member 'ABP_Character_NPC_C::CurrentTribeLevel' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, RenownCurveTable) == 0x001408, "Member 'ABP_Character_NPC_C::RenownCurveTable' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, AmbientGE) == 0x001418, "Member 'ABP_Character_NPC_C::AmbientGE' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, CharacterLeashed) == 0x001420, "Member 'ABP_Character_NPC_C::CharacterLeashed' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, PullTimeRemaining) == 0x001430, "Member 'ABP_Character_NPC_C::PullTimeRemaining' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, PullDistance) == 0x001438, "Member 'ABP_Character_NPC_C::PullDistance' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, DistanceFromHome) == 0x001440, "Member 'ABP_Character_NPC_C::DistanceFromHome' has a wrong offset!");
static_assert(offsetof(ABP_Character_NPC_C, LeashState) == 0x001448, "Member 'ABP_Character_NPC_C::LeashState' has a wrong offset!");

}

