﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_Caestus

#include "Basic.hpp"

#include "GA_Items_Caestus_classes.hpp"
#include "GA_Items_Caestus_parameters.hpp"


namespace SDK
{

// Function GA_Items_Caestus.GA_Items_Caestus_C.BP_OnGameplayEffectAppliedToOwner
// (Event, Protected, BlueprintEvent)
// Parameters:
// const class AActor*                     Target                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FActiveGameplayEffectHandle&ActiveHandle                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     EffectAssetTags                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// const struct FGameplayEffectSpecHandle& EffectSpecHandle                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_Caestus_C::BP_OnGameplayEffectAppliedToOwner(const class AActor* Target, const struct FActiveGameplayEffectHandle& ActiveHandle, const struct FGameplayTagContainer& EffectAssetTags, const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_Caestus_C", "BP_OnGameplayEffectAppliedToOwner");

	Params::GA_Items_Caestus_C_BP_OnGameplayEffectAppliedToOwner Parms{};

	Parms.Target = Target;
	Parms.ActiveHandle = std::move(ActiveHandle);
	Parms.EffectAssetTags = std::move(EffectAssetTags);
	Parms.EffectSpecHandle = std::move(EffectSpecHandle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_Caestus.GA_Items_Caestus_C.ExecuteUbergraph_GA_Items_Caestus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_Caestus_C::ExecuteUbergraph_GA_Items_Caestus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_Caestus_C", "ExecuteUbergraph_GA_Items_Caestus");

	Params::GA_Items_Caestus_C_ExecuteUbergraph_GA_Items_Caestus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

