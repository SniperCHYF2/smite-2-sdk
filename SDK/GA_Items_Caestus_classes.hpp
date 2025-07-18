﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_Caestus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_Caestus.GA_Items_Caestus_C
// 0x0008 (0x0EE0 - 0x0ED8)
class UGA_Items_Caestus_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void BP_OnGameplayEffectAppliedToOwner(const class AActor* Target, const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTagContainer& EffectAssetTags, const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void ExecuteUbergraph_GA_Items_Caestus(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_Caestus_C">();
	}
	static class UGA_Items_Caestus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_Caestus_C>();
	}
};
static_assert(alignof(UGA_Items_Caestus_C) == 0x000008, "Wrong alignment on UGA_Items_Caestus_C");
static_assert(sizeof(UGA_Items_Caestus_C) == 0x000EE0, "Wrong size on UGA_Items_Caestus_C");
static_assert(offsetof(UGA_Items_Caestus_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Items_Caestus_C::UberGraphFrame' has a wrong offset!");

}

