﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_WinConquest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIGoal_WinConquest.BP_AIGoal_WinConquest_C
// 0x0020 (0x0108 - 0x00E8)
class UBP_AIGoal_WinConquest_C : public UHWAIGoal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bDisplayDebug;                                     // 0x00F0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DebugDisplay;                                      // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        GodBotRotationRate;                                // 0x0100(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EndGoalBP();
	void ExecuteUbergraph_BP_AIGoal_WinConquest(int32 EntryPoint);
	void OnCharacterDestroyed(class AActor* DestroyedActor);
	void OnCurrentThreatChanged(class AHWAIController* Controller_0);
	void SetupGodBotMovementValues();
	void StartGoalBP();
	void ToggleDebugDisplay(bool bOn);
	void UpdateDebugText();
	void UpdateDynamicDifficulty();
	void UpdateLane();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIGoal_WinConquest_C">();
	}
	static class UBP_AIGoal_WinConquest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIGoal_WinConquest_C>();
	}
};
static_assert(alignof(UBP_AIGoal_WinConquest_C) == 0x000008, "Wrong alignment on UBP_AIGoal_WinConquest_C");
static_assert(sizeof(UBP_AIGoal_WinConquest_C) == 0x000108, "Wrong size on UBP_AIGoal_WinConquest_C");
static_assert(offsetof(UBP_AIGoal_WinConquest_C, UberGraphFrame) == 0x0000E8, "Member 'UBP_AIGoal_WinConquest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_WinConquest_C, bDisplayDebug) == 0x0000F0, "Member 'UBP_AIGoal_WinConquest_C::bDisplayDebug' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_WinConquest_C, DebugDisplay) == 0x0000F8, "Member 'UBP_AIGoal_WinConquest_C::DebugDisplay' has a wrong offset!");
static_assert(offsetof(UBP_AIGoal_WinConquest_C, GodBotRotationRate) == 0x000100, "Member 'UBP_AIGoal_WinConquest_C::GodBotRotationRate' has a wrong offset!");

}

