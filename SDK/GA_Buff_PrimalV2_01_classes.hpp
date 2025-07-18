﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Buff_PrimalV2_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Buff_PrimalV2_01.GA_Buff_PrimalV2_01_C
// 0x0020 (0x09E0 - 0x09C0)
class UGA_Buff_PrimalV2_01_C : public UHWGameplayAbility
{
public:
	TSubclassOf<class UGameplayEffect>            CooldownReductionEffect;                           // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         CooldownDuration;                                  // 0x09C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9CC[0x4];                                      // 0x09CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CooldownTimer;                                     // 0x09D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldAllowEffect;                                 // 0x09D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AllowEffect();
	void K2_ActivateAbility();
	void ReduceCooldowns(const struct FDamageEventData& DamageEventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Buff_PrimalV2_01_C">();
	}
	static class UGA_Buff_PrimalV2_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Buff_PrimalV2_01_C>();
	}
};
static_assert(alignof(UGA_Buff_PrimalV2_01_C) == 0x000008, "Wrong alignment on UGA_Buff_PrimalV2_01_C");
static_assert(sizeof(UGA_Buff_PrimalV2_01_C) == 0x0009E0, "Wrong size on UGA_Buff_PrimalV2_01_C");
static_assert(offsetof(UGA_Buff_PrimalV2_01_C, CooldownReductionEffect) == 0x0009C0, "Member 'UGA_Buff_PrimalV2_01_C::CooldownReductionEffect' has a wrong offset!");
static_assert(offsetof(UGA_Buff_PrimalV2_01_C, CooldownDuration) == 0x0009C8, "Member 'UGA_Buff_PrimalV2_01_C::CooldownDuration' has a wrong offset!");
static_assert(offsetof(UGA_Buff_PrimalV2_01_C, CooldownTimer) == 0x0009D0, "Member 'UGA_Buff_PrimalV2_01_C::CooldownTimer' has a wrong offset!");
static_assert(offsetof(UGA_Buff_PrimalV2_01_C, ShouldAllowEffect) == 0x0009D8, "Member 'UGA_Buff_PrimalV2_01_C::ShouldAllowEffect' has a wrong offset!");

}

