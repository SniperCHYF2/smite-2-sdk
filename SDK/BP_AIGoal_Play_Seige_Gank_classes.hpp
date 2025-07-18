﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Play_Seige_Gank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIGoal_Play_Seige_Gank.BP_AIGoal_Play_Seige_Gank_C
// 0x0020 (0x0108 - 0x00E8)
class UBP_AIGoal_Play_Seige_Gank_C final : public UHWAIGoal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        NearbyEnemyRadius;                                 // 0x00F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TotalDiveTime;                                     // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDiveTime;                                       // 0x0100(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CheckPreconditionsBP(class AHWAIController* InController);
	void ExecuteUbergraph_BP_AIGoal_Play_Seige_Gank(int32 EntryPoint);
	void StartGoalBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIGoal_Play_Seige_Gank_C">();
	}
	static class UBP_AIGoal_Play_Seige_Gank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIGoal_Play_Seige_Gank_C>();
	}
};
static_assert(alignof(UBP_AIGoal_Play_Seige_Gank_C) == 0x000008, "Wrong alignment on UBP_AIGoal_Play_Seige_Gank_C");
static_assert(sizeof(UBP_AIGoal_Play_Seige_Gank_C) == 0x000108, "Wrong size on UBP_AIGoal_Play_Seige_Gank_C");
static_assert(offsetof(UBP_AIGoal_Play_Seige_Gank_C, UberGraphFrame) == 0x0000E8, "Member 'UBP_AIGoal_Play_Seige_Gank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Play_Seige_Gank_C, NearbyEnemyRadius) == 0x0000F0, "Member 'UBP_AIGoal_Play_Seige_Gank_C::NearbyEnemyRadius' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Play_Seige_Gank_C, TotalDiveTime) == 0x0000F8, "Member 'UBP_AIGoal_Play_Seige_Gank_C::TotalDiveTime' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_Play_Seige_Gank_C, MaxDiveTime) == 0x000100, "Member 'UBP_AIGoal_Play_Seige_Gank_C::MaxDiveTime' has a wrong offset!");

}

