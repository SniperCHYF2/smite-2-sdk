﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_GloriousPridwen_Shield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Items_GloriousPridwen_Shield.GA_Items_GloriousPridwen_Shield_C
// 0x0018 (0x09D8 - 0x09C0)
class UGA_Items_GloriousPridwen_Shield_C final : public UHWGameplayAbility_Shield
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x09C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWShieldInstance*                      ShieldReference;                                   // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ShieldDuration;                                    // 0x09D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_PostAbilityActivationLogic(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Items_GloriousPridwen_Shield(int32 EntryPoint);
	void ExplodeTheShield(class UHWShieldInstance* ShieldInstance);
	void GetShieldReference();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Items_GloriousPridwen_Shield_C">();
	}
	static class UGA_Items_GloriousPridwen_Shield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Items_GloriousPridwen_Shield_C>();
	}
};
static_assert(alignof(UGA_Items_GloriousPridwen_Shield_C) == 0x000008, "Wrong alignment on UGA_Items_GloriousPridwen_Shield_C");
static_assert(sizeof(UGA_Items_GloriousPridwen_Shield_C) == 0x0009D8, "Wrong size on UGA_Items_GloriousPridwen_Shield_C");
static_assert(offsetof(UGA_Items_GloriousPridwen_Shield_C, UberGraphFrame) == 0x0009C0, "Member 'UGA_Items_GloriousPridwen_Shield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Items_GloriousPridwen_Shield_C, ShieldReference) == 0x0009C8, "Member 'UGA_Items_GloriousPridwen_Shield_C::ShieldReference' has a wrong offset!");
static_assert(offsetof(UGA_Items_GloriousPridwen_Shield_C, ShieldDuration) == 0x0009D0, "Member 'UGA_Items_GloriousPridwen_Shield_C::ShieldDuration' has a wrong offset!");

}

