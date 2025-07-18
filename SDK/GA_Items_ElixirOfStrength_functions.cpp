﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_ElixirOfStrength

#include "Basic.hpp"

#include "GA_Items_ElixirOfStrength_classes.hpp"
#include "GA_Items_ElixirOfStrength_parameters.hpp"


namespace SDK
{

// Function GA_Items_ElixirOfStrength.GA_Items_ElixirOfStrength_C.ExecuteUbergraph_GA_Items_ElixirOfStrength
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_ElixirOfStrength_C::ExecuteUbergraph_GA_Items_ElixirOfStrength(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_ElixirOfStrength_C", "ExecuteUbergraph_GA_Items_ElixirOfStrength");

	Params::GA_Items_ElixirOfStrength_C_ExecuteUbergraph_GA_Items_ElixirOfStrength Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_ElixirOfStrength.GA_Items_ElixirOfStrength_C.TriggerCustomFireAbilityLogic
// (Event, Protected, BlueprintEvent)

void UGA_Items_ElixirOfStrength_C::TriggerCustomFireAbilityLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_ElixirOfStrength_C", "TriggerCustomFireAbilityLogic");

	UObject::ProcessEvent(Func, nullptr);
}

}

