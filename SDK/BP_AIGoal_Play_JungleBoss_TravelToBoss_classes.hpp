﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Play_JungleBoss_TravelToBoss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIGoal_Play_JungleBoss_TravelToBoss.BP_AIGoal_Play_JungleBoss_TravelToBoss_C
// 0x0010 (0x00F8 - 0x00E8)
class UBP_AIGoal_Play_JungleBoss_TravelToBoss_C final : public UHWAIGoal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MinTravelDistance;                                 // 0x00F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CheckPreconditionsBP(class AHWAIController* InController);
	void EndGoalBP();
	void ExecuteUbergraph_BP_AIGoal_Play_JungleBoss_TravelToBoss(int32 EntryPoint);
	void StartGoalBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIGoal_Play_JungleBoss_TravelToBoss_C">();
	}
	static class UBP_AIGoal_Play_JungleBoss_TravelToBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIGoal_Play_JungleBoss_TravelToBoss_C>();
	}
};
static_assert(alignof(UBP_AIGoal_Play_JungleBoss_TravelToBoss_C) == 0x000008, "Wrong alignment on UBP_AIGoal_Play_JungleBoss_TravelToBoss_C");
static_assert(sizeof(UBP_AIGoal_Play_JungleBoss_TravelToBoss_C) == 0x0000F8, "Wrong size on UBP_AIGoal_Play_JungleBoss_TravelToBoss_C");
static_assert(offsetof(UBP_AIGoal_Play_JungleBoss_TravelToBoss_C, UberGraphFrame) == 0x0000E8, "Member 'UBP_AIGoal_Play_JungleBoss_TravelToBoss_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Play_JungleBoss_TravelToBoss_C, MinTravelDistance) == 0x0000F0, "Member 'UBP_AIGoal_Play_JungleBoss_TravelToBoss_C::MinTravelDistance' has a wrong offset!");

}

