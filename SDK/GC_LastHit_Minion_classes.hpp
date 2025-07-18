﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_LastHit_Minion

#include "Basic.hpp"

#include "Hemingway_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_LastHit_Minion.GC_LastHit_Minion_C
// 0x0000 (0x03B0 - 0x03B0)
class UGC_LastHit_Minion_C final : public UHWGameplayCueNotify_Burst
{
public:
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_LastHit_Minion_C">();
	}
	static class UGC_LastHit_Minion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_LastHit_Minion_C>();
	}
};
static_assert(alignof(UGC_LastHit_Minion_C) == 0x000008, "Wrong alignment on UGC_LastHit_Minion_C");
static_assert(sizeof(UGC_LastHit_Minion_C) == 0x0003B0, "Wrong size on UGC_LastHit_Minion_C");

}

