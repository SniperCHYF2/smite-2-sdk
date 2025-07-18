﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Damage_Minion_Ranged_OnMinion

#include "Basic.hpp"

#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Damage_Minion_Ranged_OnMinion.GC_Damage_Minion_Ranged_OnMinion_C
// 0x0000 (0x03B0 - 0x03B0)
class UGC_Damage_Minion_Ranged_OnMinion_C final : public UHWGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Damage_Minion_Ranged_OnMinion_C">();
	}
	static class UGC_Damage_Minion_Ranged_OnMinion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Damage_Minion_Ranged_OnMinion_C>();
	}
};
static_assert(alignof(UGC_Damage_Minion_Ranged_OnMinion_C) == 0x000008, "Wrong alignment on UGC_Damage_Minion_Ranged_OnMinion_C");
static_assert(sizeof(UGC_Damage_Minion_Ranged_OnMinion_C) == 0x0003B0, "Wrong size on UGC_Damage_Minion_Ranged_OnMinion_C");

}

