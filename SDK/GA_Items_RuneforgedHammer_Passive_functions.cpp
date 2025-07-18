﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_RuneforgedHammer_Passive

#include "Basic.hpp"

#include "GA_Items_RuneforgedHammer_Passive_classes.hpp"
#include "GA_Items_RuneforgedHammer_Passive_parameters.hpp"


namespace SDK
{

// Function GA_Items_RuneforgedHammer_Passive.GA_Items_RuneforgedHammer_Passive_C.BP_OnGameplayEffectAppliedToTarget
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class AActor*                     Target                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FActiveGameplayEffectHandle&ActiveHandle                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     EffectAssetTags                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// const struct FGameplayEffectSpecHandle& EffectSpecHandle                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_RuneforgedHammer_Passive_C::BP_OnGameplayEffectAppliedToTarget(const class AActor* Target, const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTagContainer& EffectAssetTags, const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_RuneforgedHammer_Passive_C", "BP_OnGameplayEffectAppliedToTarget");

	Params::GA_Items_RuneforgedHammer_Passive_C_BP_OnGameplayEffectAppliedToTarget Parms{};

	Parms.Target = Target;
	Parms.ActiveHandle = std::move(ActiveHandle);
	Parms.EffectAssetTags = std::move(EffectAssetTags);
	Parms.EffectSpecHandle = std::move(EffectSpecHandle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_RuneforgedHammer_Passive.GA_Items_RuneforgedHammer_Passive_C.ClearMap
// (BlueprintCallable, BlueprintEvent)

void UGA_Items_RuneforgedHammer_Passive_C::ClearMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_RuneforgedHammer_Passive_C", "ClearMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Items_RuneforgedHammer_Passive.GA_Items_RuneforgedHammer_Passive_C.ExecuteUbergraph_GA_Items_RuneforgedHammer_Passive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_RuneforgedHammer_Passive_C::ExecuteUbergraph_GA_Items_RuneforgedHammer_Passive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_RuneforgedHammer_Passive_C", "ExecuteUbergraph_GA_Items_RuneforgedHammer_Passive");

	Params::GA_Items_RuneforgedHammer_Passive_C_ExecuteUbergraph_GA_Items_RuneforgedHammer_Passive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_RuneforgedHammer_Passive.GA_Items_RuneforgedHammer_Passive_C.OnDamageReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDamageEventData&          DamageEventData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_RuneforgedHammer_Passive_C::OnDamageReceived(const struct FDamageEventData& DamageEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_RuneforgedHammer_Passive_C", "OnDamageReceived");

	Params::GA_Items_RuneforgedHammer_Passive_C_OnDamageReceived Parms{};

	Parms.DamageEventData = std::move(DamageEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_RuneforgedHammer_Passive.GA_Items_RuneforgedHammer_Passive_C.OnOwnerDealtDamage
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDamageEventData&          DamageEventData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_RuneforgedHammer_Passive_C::OnOwnerDealtDamage(const struct FDamageEventData& DamageEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_RuneforgedHammer_Passive_C", "OnOwnerDealtDamage");

	Params::GA_Items_RuneforgedHammer_Passive_C_OnOwnerDealtDamage Parms{};

	Parms.DamageEventData = std::move(DamageEventData);

	UObject::ProcessEvent(Func, &Parms);
}

}

