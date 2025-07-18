﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Starter_SunderingAxe_Damage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Starter_SunderingAxe_Damage.GC_Starter_SunderingAxe_Damage_C
// 0x0008 (0x06E8 - 0x06E0)
class AGC_Starter_SunderingAxe_Damage_C final : public AHWGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GC_Starter_SunderingAxe_Damage(int32 EntryPoint);
	void OnApplication_1(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnLoopingStart_1(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnRecurring_1(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);
	void OnRemoval_1(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Starter_SunderingAxe_Damage_C">();
	}
	static class AGC_Starter_SunderingAxe_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Starter_SunderingAxe_Damage_C>();
	}
};
static_assert(alignof(AGC_Starter_SunderingAxe_Damage_C) == 0x000008, "Wrong alignment on AGC_Starter_SunderingAxe_Damage_C");
static_assert(sizeof(AGC_Starter_SunderingAxe_Damage_C) == 0x0006E8, "Wrong size on AGC_Starter_SunderingAxe_Damage_C");
static_assert(offsetof(AGC_Starter_SunderingAxe_Damage_C, UberGraphFrame) == 0x0006E0, "Member 'AGC_Starter_SunderingAxe_Damage_C::UberGraphFrame' has a wrong offset!");

}

