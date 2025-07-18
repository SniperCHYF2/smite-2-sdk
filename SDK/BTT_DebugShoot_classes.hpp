﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_DebugShoot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTT_DebugShoot.BTT_DebugShoot_C
// 0x0058 (0x0100 - 0x00A8)
class UBTT_DebugShoot_C final : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                 AbilitySlotBlackboardKey;                          // 0x00B0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlackboardKeySelector                 AbilityTargetPointKey;                             // 0x00D8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly)

public:
	void ExecuteUbergraph_BTT_DebugShoot(int32 EntryPoint);
	void Fire(class APawn* Pawn, class AAIController* Controller, bool* Success);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTT_DebugShoot_C">();
	}
	static class UBTT_DebugShoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTT_DebugShoot_C>();
	}
};
static_assert(alignof(UBTT_DebugShoot_C) == 0x000008, "Wrong alignment on UBTT_DebugShoot_C");
static_assert(sizeof(UBTT_DebugShoot_C) == 0x000100, "Wrong size on UBTT_DebugShoot_C");
static_assert(offsetof(UBTT_DebugShoot_C, UberGraphFrame) == 0x0000A8, "Member 'UBTT_DebugShoot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTT_DebugShoot_C, AbilitySlotBlackboardKey) == 0x0000B0, "Member 'UBTT_DebugShoot_C::AbilitySlotBlackboardKey' has a wrong offset!");
static_assert(offsetof(UBTT_DebugShoot_C, AbilityTargetPointKey) == 0x0000D8, "Member 'UBTT_DebugShoot_C::AbilityTargetPointKey' has a wrong offset!");

}

