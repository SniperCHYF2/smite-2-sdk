﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_Deathbringer

#include "Basic.hpp"

#include "GA_Items_Deathbringer_classes.hpp"
#include "GA_Items_Deathbringer_parameters.hpp"


namespace SDK
{

// Function GA_Items_Deathbringer.GA_Items_Deathbringer_C.AdjustCritMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTagContainer&     EffectTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FDamageCalcInfo&           DamageCalcInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UHWAbilitySystemComponent*        BroadcastingAbilitySystemComponent                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const EHWAdjustAttributeEventType       AdjustAttributeEventType                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const float                             BaseCritMultiplier                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_Deathbringer_C::AdjustCritMultiplier(const struct FGameplayTagContainer& EffectTags, const struct FDamageCalcInfo& DamageCalcInfo, class UHWAbilitySystemComponent* BroadcastingAbilitySystemComponent, const EHWAdjustAttributeEventType AdjustAttributeEventType, const float BaseCritMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_Deathbringer_C", "AdjustCritMultiplier");

	Params::GA_Items_Deathbringer_C_AdjustCritMultiplier Parms{};

	Parms.EffectTags = std::move(EffectTags);
	Parms.DamageCalcInfo = std::move(DamageCalcInfo);
	Parms.BroadcastingAbilitySystemComponent = BroadcastingAbilitySystemComponent;
	Parms.AdjustAttributeEventType = AdjustAttributeEventType;
	Parms.BaseCritMultiplier = BaseCritMultiplier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_Deathbringer.GA_Items_Deathbringer_C.ExecuteUbergraph_GA_Items_Deathbringer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_Deathbringer_C::ExecuteUbergraph_GA_Items_Deathbringer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_Deathbringer_C", "ExecuteUbergraph_GA_Items_Deathbringer");

	Params::GA_Items_Deathbringer_C_ExecuteUbergraph_GA_Items_Deathbringer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_Deathbringer.GA_Items_Deathbringer_C.SetupListeners
// (Event, Protected, BlueprintEvent)

void UGA_Items_Deathbringer_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_Deathbringer_C", "SetupListeners");

	UObject::ProcessEvent(Func, nullptr);
}

}

