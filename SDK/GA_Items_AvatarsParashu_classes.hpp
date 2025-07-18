﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_AvatarsParashu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_AvatarsParashu.GA_Items_AvatarsParashu_C
// 0x0008 (0x0D68 - 0x0D60)
class UGA_Items_AvatarsParashu_C final : public UHWGameplayAbility_Enhanced
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D60(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Items_AvatarsParashu(int32 EntryPoint);
	void OnAttackFired(class UHWAbilityTask_FireAttack* AttackTask, const struct FHWAbilityAttackInstance& Attack, struct FGameplayAbilityTargetDataHandle& TargetListHandle);

	struct FHWMontageInfo GetFiringMontageInfo() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_AvatarsParashu_C">();
	}
	static class UGA_Items_AvatarsParashu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_AvatarsParashu_C>();
	}
};
static_assert(alignof(UGA_Items_AvatarsParashu_C) == 0x000008, "Wrong alignment on UGA_Items_AvatarsParashu_C");
static_assert(sizeof(UGA_Items_AvatarsParashu_C) == 0x000D68, "Wrong size on UGA_Items_AvatarsParashu_C");
static_assert(offsetof(UGA_Items_AvatarsParashu_C, UberGraphFrame) == 0x000D60, "Member 'UGA_Items_AvatarsParashu_C::UberGraphFrame' has a wrong offset!");

}

