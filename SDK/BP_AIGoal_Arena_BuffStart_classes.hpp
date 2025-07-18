﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Arena_BuffStart

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIGoal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIGoal_Arena_BuffStart.BP_AIGoal_Arena_BuffStart_C
// 0x0088 (0x02F0 - 0x0268)
class UBP_AIGoal_Arena_BuffStart_C final : public UBP_AIGoal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIGoal_Arena_BuffStart_C;        // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bAllowBuffStart;                                   // 0x0270(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_271[0x7];                                      // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinAbortGameTime;                                  // 0x0278(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxAbortGameTime;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AbortGameTime;                                     // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StartDelay;                                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHWBotFactory*                          CurrentCampFactory;                                // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        JumpChance;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   JumpAbilitySoftClass;                              // 0x02A8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	class UClass*                                 JumpAbilityClass;                                  // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SkipCampChance;                                    // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumCampsCleared;                                   // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultLeashRange;                                 // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedObjectiveRange;                              // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GoalCompleted;                                     // 0x02EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AreAnyBuffCampsAvailable(class AActor* SourceCharacter, bool ActiveOnly, bool* CampsAvailable);
	float CalculateWeight(class AHWAIController* InController);
	void Camps_Cleared_Weight();
	bool CheckPreconditionsBP(class AHWAIController* InController);
	void EndGoalBP();
	void EngageNextBuffCamp(class AHWBotFactory* BotFactory);
	void ExecuteUbergraph_BP_AIGoal_Arena_BuffStart(int32 EntryPoint);
	void GetNextBuffCamp(class AActor* SourceCharacter, bool ActiveOnly, class AActor** JungleCampFactory);
	void JungleMonsterLowHealthBonus(class AHWAIController* Controller_0);
	void MatchTimeWeight();
	void NearbyAllyWeight(class AHWCharacter_Base* Character);
	void OnCurrentBuffCampEmpty(class AHWBotFactory* BotFactory, class AActor* Causer);
	void OnStartTimerFinished();
	void StartGoalBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIGoal_Arena_BuffStart_C">();
	}
	static class UBP_AIGoal_Arena_BuffStart_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIGoal_Arena_BuffStart_C>();
	}
};
static_assert(alignof(UBP_AIGoal_Arena_BuffStart_C) == 0x000008, "Wrong alignment on UBP_AIGoal_Arena_BuffStart_C");
static_assert(sizeof(UBP_AIGoal_Arena_BuffStart_C) == 0x0002F0, "Wrong size on UBP_AIGoal_Arena_BuffStart_C");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, UberGraphFrame_BP_AIGoal_Arena_BuffStart_C) == 0x000268, "Member 'UBP_AIGoal_Arena_BuffStart_C::UberGraphFrame_BP_AIGoal_Arena_BuffStart_C' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, bAllowBuffStart) == 0x000270, "Member 'UBP_AIGoal_Arena_BuffStart_C::bAllowBuffStart' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, MinAbortGameTime) == 0x000278, "Member 'UBP_AIGoal_Arena_BuffStart_C::MinAbortGameTime' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, MaxAbortGameTime) == 0x000280, "Member 'UBP_AIGoal_Arena_BuffStart_C::MaxAbortGameTime' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, AbortGameTime) == 0x000288, "Member 'UBP_AIGoal_Arena_BuffStart_C::AbortGameTime' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, StartDelay) == 0x000290, "Member 'UBP_AIGoal_Arena_BuffStart_C::StartDelay' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, CurrentCampFactory) == 0x000298, "Member 'UBP_AIGoal_Arena_BuffStart_C::CurrentCampFactory' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, JumpChance) == 0x0002A0, "Member 'UBP_AIGoal_Arena_BuffStart_C::JumpChance' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, JumpAbilitySoftClass) == 0x0002A8, "Member 'UBP_AIGoal_Arena_BuffStart_C::JumpAbilitySoftClass' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, JumpAbilityClass) == 0x0002D0, "Member 'UBP_AIGoal_Arena_BuffStart_C::JumpAbilityClass' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, SkipCampChance) == 0x0002D8, "Member 'UBP_AIGoal_Arena_BuffStart_C::SkipCampChance' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, NumCampsCleared) == 0x0002E0, "Member 'UBP_AIGoal_Arena_BuffStart_C::NumCampsCleared' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, DefaultLeashRange) == 0x0002E4, "Member 'UBP_AIGoal_Arena_BuffStart_C::DefaultLeashRange' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, CachedObjectiveRange) == 0x0002E8, "Member 'UBP_AIGoal_Arena_BuffStart_C::CachedObjectiveRange' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_BuffStart_C, GoalCompleted) == 0x0002EC, "Member 'UBP_AIGoal_Arena_BuffStart_C::GoalCompleted' has a wrong offset!");

}

