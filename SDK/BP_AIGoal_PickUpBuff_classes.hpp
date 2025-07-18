﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_PickUpBuff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIGoal_PickUpBuff.BP_AIGoal_PickUpBuff_C
// 0x0008 (0x00F0 - 0x00E8)
class UBP_AIGoal_PickUpBuff_C final : public UHWAIGoal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	bool CheckPreconditionsBP(class AHWAIController* InController);
	void EndGoalBP();
	void ExecuteUbergraph_BP_AIGoal_PickUpBuff(int32 EntryPoint);
	void StartGoalBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIGoal_PickUpBuff_C">();
	}
	static class UBP_AIGoal_PickUpBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIGoal_PickUpBuff_C>();
	}
};
static_assert(alignof(UBP_AIGoal_PickUpBuff_C) == 0x000008, "Wrong alignment on UBP_AIGoal_PickUpBuff_C");
static_assert(sizeof(UBP_AIGoal_PickUpBuff_C) == 0x0000F0, "Wrong size on UBP_AIGoal_PickUpBuff_C");
static_assert(offsetof(UBP_AIGoal_PickUpBuff_C, UberGraphFrame) == 0x0000E8, "Member 'UBP_AIGoal_PickUpBuff_C::UberGraphFrame' has a wrong offset!");

}

