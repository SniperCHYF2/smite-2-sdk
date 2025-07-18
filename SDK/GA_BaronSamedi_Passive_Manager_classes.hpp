﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BaronSamedi_Passive_Manager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Hemingway_structs.hpp"
#include "Hemingway_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BaronSamedi_Passive_Manager.GA_BaronSamedi_Passive_Manager_C
// 0x0030 (0x0DA0 - 0x0D70)
class UGA_BaronSamedi_Passive_Manager_C final : public UHWAbility_Passive
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        HysteriaThreshold;                                 // 0x0D78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DamagePercentToDeal;                               // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            HysteriaOnEffectHandle;                            // 0x0D88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            HysteriaMaxEffectHandle;                           // 0x0D90(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        MaxHysteriaThreshold;                              // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AdjustDamageToBaron(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseDamageValue);
	void Changed_037229124DE18D9F83922E945975CD27(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void Check_Threshold();
	void CheckThreshold(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem);
	void ExecuteUbergraph_GA_BaronSamedi_Passive_Manager(int32 EntryPoint);
	void HandleAvatarDied(const struct FDamageEventData& DeathEventData);
	void SetupListeners();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BaronSamedi_Passive_Manager_C">();
	}
	static class UGA_BaronSamedi_Passive_Manager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BaronSamedi_Passive_Manager_C>();
	}
};
static_assert(alignof(UGA_BaronSamedi_Passive_Manager_C) == 0x000008, "Wrong alignment on UGA_BaronSamedi_Passive_Manager_C");
static_assert(sizeof(UGA_BaronSamedi_Passive_Manager_C) == 0x000DA0, "Wrong size on UGA_BaronSamedi_Passive_Manager_C");
static_assert(offsetof(UGA_BaronSamedi_Passive_Manager_C, UberGraphFrame) == 0x000D70, "Member 'UGA_BaronSamedi_Passive_Manager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BaronSamedi_Passive_Manager_C, HysteriaThreshold) == 0x000D78, "Member 'UGA_BaronSamedi_Passive_Manager_C::HysteriaThreshold' has a wrong offset!");
static_assert(offsetof(UGA_BaronSamedi_Passive_Manager_C, DamagePercentToDeal) == 0x000D80, "Member 'UGA_BaronSamedi_Passive_Manager_C::DamagePercentToDeal' has a wrong offset!");
static_assert(offsetof(UGA_BaronSamedi_Passive_Manager_C, HysteriaOnEffectHandle) == 0x000D88, "Member 'UGA_BaronSamedi_Passive_Manager_C::HysteriaOnEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_BaronSamedi_Passive_Manager_C, HysteriaMaxEffectHandle) == 0x000D90, "Member 'UGA_BaronSamedi_Passive_Manager_C::HysteriaMaxEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_BaronSamedi_Passive_Manager_C, MaxHysteriaThreshold) == 0x000D98, "Member 'UGA_BaronSamedi_Passive_Manager_C::MaxHysteriaThreshold' has a wrong offset!");

}

