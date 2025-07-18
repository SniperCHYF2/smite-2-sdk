﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Starter_GildedArrowUpgrade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Starter_GildedArrowUpgrade.GA_Starter_GildedArrowUpgrade_C
// 0x0018 (0x0EF0 - 0x0ED8)
class UGA_Starter_GildedArrowUpgrade_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         DamageMultiplier;                                  // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BonusGoldGain_;                                    // 0x0EE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceBreakpoint;                                // 0x0EE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Starter_GildedArrowUpgrade(int32 EntryPoint);
	void OnAdjustDamage(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseDamageValue);
	void OnChangeDelegate_641B059C47C5A9CDE9006A91CA3CF59E(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void OnGoldChanged(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Starter_GildedArrowUpgrade_C">();
	}
	static class UGA_Starter_GildedArrowUpgrade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Starter_GildedArrowUpgrade_C>();
	}
};
static_assert(alignof(UGA_Starter_GildedArrowUpgrade_C) == 0x000008, "Wrong alignment on UGA_Starter_GildedArrowUpgrade_C");
static_assert(sizeof(UGA_Starter_GildedArrowUpgrade_C) == 0x000EF0, "Wrong size on UGA_Starter_GildedArrowUpgrade_C");
static_assert(offsetof(UGA_Starter_GildedArrowUpgrade_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Starter_GildedArrowUpgrade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Starter_GildedArrowUpgrade_C, DamageMultiplier) == 0x000EE0, "Member 'UGA_Starter_GildedArrowUpgrade_C::DamageMultiplier' has a wrong offset!");
static_assert(offsetof(UGA_Starter_GildedArrowUpgrade_C, BonusGoldGain_) == 0x000EE4, "Member 'UGA_Starter_GildedArrowUpgrade_C::BonusGoldGain_' has a wrong offset!");
static_assert(offsetof(UGA_Starter_GildedArrowUpgrade_C, DistanceBreakpoint) == 0x000EE8, "Member 'UGA_Starter_GildedArrowUpgrade_C::DistanceBreakpoint' has a wrong offset!");

}

