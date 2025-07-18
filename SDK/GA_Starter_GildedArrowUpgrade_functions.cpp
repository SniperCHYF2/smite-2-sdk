﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Starter_GildedArrowUpgrade

#include "Basic.hpp"

#include "GA_Starter_GildedArrowUpgrade_classes.hpp"
#include "GA_Starter_GildedArrowUpgrade_parameters.hpp"


namespace SDK
{

// Function GA_Starter_GildedArrowUpgrade.GA_Starter_GildedArrowUpgrade_C.ExecuteUbergraph_GA_Starter_GildedArrowUpgrade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Starter_GildedArrowUpgrade_C::ExecuteUbergraph_GA_Starter_GildedArrowUpgrade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Starter_GildedArrowUpgrade_C", "ExecuteUbergraph_GA_Starter_GildedArrowUpgrade");

	Params::GA_Starter_GildedArrowUpgrade_C_ExecuteUbergraph_GA_Starter_GildedArrowUpgrade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Starter_GildedArrowUpgrade.GA_Starter_GildedArrowUpgrade_C.OnAdjustDamage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTagContainer&     EffectTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FDamageCalcInfo&           DamageCalcInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UHWAbilitySystemComponent*        BroadcastingAbilitySystemComponent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const EHWAdjustAttributeEventType       AdjustAttributeEventType                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const float                             BaseDamageValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Starter_GildedArrowUpgrade_C::OnAdjustDamage(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseDamageValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Starter_GildedArrowUpgrade_C", "OnAdjustDamage");

	Params::GA_Starter_GildedArrowUpgrade_C_OnAdjustDamage Parms{};

	Parms.EffectTags = std::move(EffectTags);
	Parms.DamageCalcInfo = std::move(DamageCalcInfo);
	Parms.BroadcastingAbilitySystemComponent = BroadcastingAbilitySystemComponent;
	Parms.AdjustAttributeEventType = AdjustAttributeEventType;
	Parms.BaseDamageValue = BaseDamageValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Starter_GildedArrowUpgrade.GA_Starter_GildedArrowUpgrade_C.OnChangeDelegate_641B059C47C5A9CDE9006A91CA3CF59E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAttribute&        Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*          OwningAbilitySystem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_Starter_GildedArrowUpgrade_C::OnChangeDelegate_641B059C47C5A9CDE9006A91CA3CF59E(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Starter_GildedArrowUpgrade_C", "OnChangeDelegate_641B059C47C5A9CDE9006A91CA3CF59E");

	Params::GA_Starter_GildedArrowUpgrade_C_OnChangeDelegate_641B059C47C5A9CDE9006A91CA3CF59E Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;
	Parms.OwningAbilitySystem = OwningAbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Starter_GildedArrowUpgrade.GA_Starter_GildedArrowUpgrade_C.OnGoldChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAttribute&        Attribute                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*          OwningAbilitySystem                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_Starter_GildedArrowUpgrade_C::OnGoldChanged(const struct FGameplayAttribute& Attribute, float NewValue, float OldValue, class UAbilitySystemComponent* OwningAbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Starter_GildedArrowUpgrade_C", "OnGoldChanged");

	Params::GA_Starter_GildedArrowUpgrade_C_OnGoldChanged Parms{};

	Parms.Attribute = std::move(Attribute);
	Parms.NewValue = NewValue;
	Parms.OldValue = OldValue;
	Parms.OwningAbilitySystem = OwningAbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Starter_GildedArrowUpgrade.GA_Starter_GildedArrowUpgrade_C.SetupListeners
// (Event, Protected, BlueprintEvent)

void UGA_Starter_GildedArrowUpgrade_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Starter_GildedArrowUpgrade_C", "SetupListeners");

	UObject::ProcessEvent(Func, nullptr);
}

}

