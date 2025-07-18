﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_BancroftsTalon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_BancroftsTalon.GA_Items_BancroftsTalon_C
// 0x0028 (0x0F00 - 0x0ED8)
class UGA_Items_BancroftsTalon_C final : public UHWAbility_PassiveItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0ED8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Damage_Event_Data;                                 // 0x0EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            BuffHandle;                                        // 0x0EE8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         StackCountWantingToApply;                          // 0x0EF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         New_Value_Incoming;                                // 0x0EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StacksLastApplied;                                 // 0x0EF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Changed_4E6AC99B41EA30D3D84D5F94CDC52A5F(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void CleanupListeners();
	void ExecuteUbergraph_GA_Items_BancroftsTalon(int32 EntryPoint);
	void HealthChanged(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_BancroftsTalon_C">();
	}
	static class UGA_Items_BancroftsTalon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_BancroftsTalon_C>();
	}
};
static_assert(alignof(UGA_Items_BancroftsTalon_C) == 0x000008, "Wrong alignment on UGA_Items_BancroftsTalon_C");
static_assert(sizeof(UGA_Items_BancroftsTalon_C) == 0x000F00, "Wrong size on UGA_Items_BancroftsTalon_C");
static_assert(offsetof(UGA_Items_BancroftsTalon_C, UberGraphFrame) == 0x000ED8, "Member 'UGA_Items_BancroftsTalon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Items_BancroftsTalon_C, Damage_Event_Data) == 0x000EE0, "Member 'UGA_Items_BancroftsTalon_C::Damage_Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_Items_BancroftsTalon_C, BuffHandle) == 0x000EE8, "Member 'UGA_Items_BancroftsTalon_C::BuffHandle' has a wrong offset!");
static_assert(offsetof(UGA_Items_BancroftsTalon_C, StackCountWantingToApply) == 0x000EF0, "Member 'UGA_Items_BancroftsTalon_C::StackCountWantingToApply' has a wrong offset!");
static_assert(offsetof(UGA_Items_BancroftsTalon_C, New_Value_Incoming) == 0x000EF4, "Member 'UGA_Items_BancroftsTalon_C::New_Value_Incoming' has a wrong offset!");
static_assert(offsetof(UGA_Items_BancroftsTalon_C, StacksLastApplied) == 0x000EF8, "Member 'UGA_Items_BancroftsTalon_C::StacksLastApplied' has a wrong offset!");

}

