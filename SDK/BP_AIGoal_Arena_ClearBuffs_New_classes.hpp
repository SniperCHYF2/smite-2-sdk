﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Arena_ClearBuffs_New

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIGoal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIGoal_Arena_ClearBuffs_New.BP_AIGoal_Arena_ClearBuffs_New_C
// 0x0040 (0x02A8 - 0x0268)
class UBP_AIGoal_Arena_ClearBuffs_New_C final : public UBP_AIGoal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIGoal_Arena_ClearBuffs_New_C;   // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        WeightPerCamp;                                     // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CachedObjectiveRange;                              // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHWBotFactory*                          CurrentCampFactory;                                // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultLeashRange;                                 // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28C[0x4];                                      // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        WeightForLowMonsterHealth;                         // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CachedNumAliveCamps;                               // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinGameTime;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float CalculateWeight(class AHWAIController* InController);
	bool CheckPreconditionsBP(class AHWAIController* InController);
	void EndGoalBP();
	void EngageNextBuffCamp(class AHWBotFactory* BotFactory);
	void ExecuteUbergraph_BP_AIGoal_Arena_ClearBuffs_New(int32 EntryPoint);
	void GetNextBuffCamp(class AActor* SourceCharacter, bool ActiveOnly, class AActor** JungleCampFactory);
	void IncreaseWeightIfJungleMonsterIsLowHealth(double Weight, class AHWAIController* Controller_0, double* ModifiedWeight);
	void OnCurrentCampFactoryEmpty(class AHWBotFactory* BotFactory, class AActor* Causer);
	void QueryNumberOfAliveCamps(int32* NumAliveCamps);
	void SelfHealthWeight(class AHWCharacter_Base* Character, double* OutWeight);
	void StartGoalBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIGoal_Arena_ClearBuffs_New_C">();
	}
	static class UBP_AIGoal_Arena_ClearBuffs_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIGoal_Arena_ClearBuffs_New_C>();
	}
};
static_assert(alignof(UBP_AIGoal_Arena_ClearBuffs_New_C) == 0x000008, "Wrong alignment on UBP_AIGoal_Arena_ClearBuffs_New_C");
static_assert(sizeof(UBP_AIGoal_Arena_ClearBuffs_New_C) == 0x0002A8, "Wrong size on UBP_AIGoal_Arena_ClearBuffs_New_C");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, UberGraphFrame_BP_AIGoal_Arena_ClearBuffs_New_C) == 0x000268, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::UberGraphFrame_BP_AIGoal_Arena_ClearBuffs_New_C' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, WeightPerCamp) == 0x000270, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::WeightPerCamp' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, CachedObjectiveRange) == 0x000278, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::CachedObjectiveRange' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, CurrentCampFactory) == 0x000280, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::CurrentCampFactory' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, DefaultLeashRange) == 0x000288, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::DefaultLeashRange' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, WeightForLowMonsterHealth) == 0x000290, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::WeightForLowMonsterHealth' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, CachedNumAliveCamps) == 0x000298, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::CachedNumAliveCamps' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Arena_ClearBuffs_New_C, MinGameTime) == 0x0002A0, "Member 'UBP_AIGoal_Arena_ClearBuffs_New_C::MinGameTime' has a wrong offset!");

}

