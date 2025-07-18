﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_StaffOfMyrddin

#include "Basic.hpp"

#include "GA_Items_StaffOfMyrddin_classes.hpp"
#include "GA_Items_StaffOfMyrddin_parameters.hpp"


namespace SDK
{

// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.ApplyCooldownReduction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ReturnValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_StaffOfMyrddin_C::ApplyCooldownReduction(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "ApplyCooldownReduction");

	Params::GA_Items_StaffOfMyrddin_C_ApplyCooldownReduction Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.ExecuteUbergraph_GA_Items_StaffOfMyrddin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_StaffOfMyrddin_C::ExecuteUbergraph_GA_Items_StaffOfMyrddin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "ExecuteUbergraph_GA_Items_StaffOfMyrddin");

	Params::GA_Items_StaffOfMyrddin_C_ExecuteUbergraph_GA_Items_StaffOfMyrddin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.OnAbilityStartFire
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilitySpecHandle&AbilityHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     AbilityTags_0                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// const struct FHWAbilityFiringInstanceId&FiringInstanceId                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGA_Items_StaffOfMyrddin_C::OnAbilityStartFire(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FGameplayTagContainer& AbilityTags_0, const struct FHWAbilityFiringInstanceId& FiringInstanceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "OnAbilityStartFire");

	Params::GA_Items_StaffOfMyrddin_C_OnAbilityStartFire Parms{};

	Parms.AbilityHandle = std::move(AbilityHandle);
	Parms.AbilityTags_0 = std::move(AbilityTags_0);
	Parms.FiringInstanceId = std::move(FiringInstanceId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.OnCooldownTagsApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayAbilitySpecHandle&AbilityHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Items_StaffOfMyrddin_C::OnCooldownTagsApplied(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "OnCooldownTagsApplied");

	Params::GA_Items_StaffOfMyrddin_C_OnCooldownTagsApplied Parms{};

	Parms.AbilityHandle = std::move(AbilityHandle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.SetupAbilityListener
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Items_StaffOfMyrddin_C::SetupAbilityListener()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "SetupAbilityListener");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.TriggerCustomFireAbilityLogic
// (Event, Protected, BlueprintEvent)

void UGA_Items_StaffOfMyrddin_C::TriggerCustomFireAbilityLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "TriggerCustomFireAbilityLogic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Items_StaffOfMyrddin.GA_Items_StaffOfMyrddin_C.Triggered_CA3BD955438CEA014B8C32930B0FF50E
// (BlueprintCallable, BlueprintEvent)

void UGA_Items_StaffOfMyrddin_C::Triggered_CA3BD955438CEA014B8C32930B0FF50E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_StaffOfMyrddin_C", "Triggered_CA3BD955438CEA014B8C32930B0FF50E");

	UObject::ProcessEvent(Func, nullptr);
}

}

