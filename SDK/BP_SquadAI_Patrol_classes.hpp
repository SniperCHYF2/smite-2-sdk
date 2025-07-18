﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SquadAI_Patrol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SquadAI_Patrol.BP_SquadAI_Patrol_C
// 0x0058 (0x0358 - 0x0300)
class ABP_SquadAI_Patrol_C final : public AHWAISquadManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAggressive;                                      // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_311[0x7];                                      // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         HostileTargets;                                    // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsReturningHome;                                   // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           WaitTimer;                                         // 0x0330(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              PatrolWaitComplete;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           PullTimer;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInCombat;                                        // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyPullTimerVisual(double PullTimerDuration);
	void CancelPatrolWait();
	void ClearCurrentHostile(class AActor* CurrentHostile);
	void ClearDeadHostiles();
	void ExecuteUbergraph_BP_SquadAI_Patrol(int32 EntryPoint);
	void FilterByTags(const struct FGameplayTagContainer& InMustNotHaveTags, const struct FGameplayTagContainer& InMustHaveTags, bool* Return);
	void GetClosestHostileTarget(class AActor** ClosestTarget);
	void GetHostileTarget(const struct FGameplayTagContainer& MustNotHaveTags, const struct FGameplayTagContainer& MustHaveTags, class AActor** HostileTarget, bool* Success);
	void OnMemberDamaged(const struct FDamageEventData& DamageEventData);
	void OnSquadMemberAdded(class AHWCharacter_NPC* Character);
	void PullCancelled();
	void PullEnded();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RemovePullTimerVisual();
	void SortHostileTargets(class AActor** HostileTarget);
	void SquadCombatStatusCheck(const struct FGameplayTag& Tag, int32 TagCount, class UHWAbilitySystemComponent* AbilitySystem);
	void StartPatrolWait(double TimeToWait);
	void StartPullTimer(float Time);
	void WaitComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SquadAI_Patrol_C">();
	}
	static class ABP_SquadAI_Patrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SquadAI_Patrol_C>();
	}
};
static_assert(alignof(ABP_SquadAI_Patrol_C) == 0x000008, "Wrong alignment on ABP_SquadAI_Patrol_C");
static_assert(sizeof(ABP_SquadAI_Patrol_C) == 0x000358, "Wrong size on ABP_SquadAI_Patrol_C");
static_assert(offsetof(ABP_SquadAI_Patrol_C, UberGraphFrame) == 0x000300, "Member 'ABP_SquadAI_Patrol_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, DefaultSceneRoot) == 0x000308, "Member 'ABP_SquadAI_Patrol_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, IsAggressive) == 0x000310, "Member 'ABP_SquadAI_Patrol_C::IsAggressive' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, HostileTargets) == 0x000318, "Member 'ABP_SquadAI_Patrol_C::HostileTargets' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, IsReturningHome) == 0x000328, "Member 'ABP_SquadAI_Patrol_C::IsReturningHome' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, WaitTimer) == 0x000330, "Member 'ABP_SquadAI_Patrol_C::WaitTimer' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, PatrolWaitComplete) == 0x000338, "Member 'ABP_SquadAI_Patrol_C::PatrolWaitComplete' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, PullTimer) == 0x000348, "Member 'ABP_SquadAI_Patrol_C::PullTimer' has a wrong offset!");
static_assert(offsetof(ABP_SquadAI_Patrol_C, IsInCombat) == 0x000350, "Member 'ABP_SquadAI_Patrol_C::IsInCombat' has a wrong offset!");

}

