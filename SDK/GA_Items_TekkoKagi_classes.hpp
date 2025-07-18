﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_TekkoKagi

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_TekkoKagi.GA_Items_TekkoKagi_C
// 0x0010 (0x0EE8 - 0x0ED8)
class UGA_Items_TekkoKagi_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWEquipmentComponent_FiringInstanceTracker* FiringInstanceTrackerComponent;               // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AbilityFired(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FGameplayTagContainer& AbilityTags_0, const struct FHWAbilityFiringInstanceId& FiringInstanceId);
	void ExecuteUbergraph_GA_Items_TekkoKagi(int32 EntryPoint);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_TekkoKagi_C">();
	}
	static class UGA_Items_TekkoKagi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_TekkoKagi_C>();
	}
};
static_assert(alignof(UGA_Items_TekkoKagi_C) == 0x000008, "Wrong alignment on UGA_Items_TekkoKagi_C");
static_assert(sizeof(UGA_Items_TekkoKagi_C) == 0x000EE8, "Wrong size on UGA_Items_TekkoKagi_C");
static_assert(offsetof(UGA_Items_TekkoKagi_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Items_TekkoKagi_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Items_TekkoKagi_C, FiringInstanceTrackerComponent) == 0x000EE0, "Member 'UGA_Items_TekkoKagi_C::FiringInstanceTrackerComponent' has a wrong offset!");

}

