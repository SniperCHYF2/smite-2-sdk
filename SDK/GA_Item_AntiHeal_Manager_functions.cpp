﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Item_AntiHeal_Manager

#include "Basic.hpp"

#include "GA_Item_AntiHeal_Manager_classes.hpp"
#include "GA_Item_AntiHeal_Manager_parameters.hpp"


namespace SDK
{

// Function GA_Item_AntiHeal_Manager.GA_Item_AntiHeal_Manager_C.ApplyGameplayEffectBasedOnStrength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsInitialCheck_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Item_AntiHeal_Manager_C::ApplyGameplayEffectBasedOnStrength(bool IsInitialCheck_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_AntiHeal_Manager_C", "ApplyGameplayEffectBasedOnStrength");

	Params::GA_Item_AntiHeal_Manager_C_ApplyGameplayEffectBasedOnStrength Parms{};

	Parms.IsInitialCheck_ = IsInitialCheck_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_AntiHeal_Manager.GA_Item_AntiHeal_Manager_C.ExecuteUbergraph_GA_Item_AntiHeal_Manager
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Item_AntiHeal_Manager_C::ExecuteUbergraph_GA_Item_AntiHeal_Manager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_AntiHeal_Manager_C", "ExecuteUbergraph_GA_Item_AntiHeal_Manager");

	Params::GA_Item_AntiHeal_Manager_C_ExecuteUbergraph_GA_Item_AntiHeal_Manager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_AntiHeal_Manager.GA_Item_AntiHeal_Manager_C.HandleNewAndRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                                   TagCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHWAbilitySystemComponent*        AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_Item_AntiHeal_Manager_C::HandleNewAndRemoved(const struct FGameplayTag& Tag, int32 TagCount, class UHWAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_AntiHeal_Manager_C", "HandleNewAndRemoved");

	Params::GA_Item_AntiHeal_Manager_C_HandleNewAndRemoved Parms{};

	Parms.Tag = std::move(Tag);
	Parms.TagCount = TagCount;
	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_AntiHeal_Manager.GA_Item_AntiHeal_Manager_C.SetupListeners
// (Event, Protected, BlueprintEvent)

void UGA_Item_AntiHeal_Manager_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_AntiHeal_Manager_C", "SetupListeners");

	UObject::ProcessEvent(Func, nullptr);
}

}

