﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_AncientSignet

#include "Basic.hpp"

#include "GA_Items_AncientSignet_classes.hpp"
#include "GA_Items_AncientSignet_parameters.hpp"


namespace SDK
{

// Function GA_Items_AncientSignet.GA_Items_AncientSignet_C.ExecuteUbergraph_GA_Items_AncientSignet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Items_AncientSignet_C::ExecuteUbergraph_GA_Items_AncientSignet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_AncientSignet_C", "ExecuteUbergraph_GA_Items_AncientSignet");

	Params::GA_Items_AncientSignet_C_ExecuteUbergraph_GA_Items_AncientSignet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_AncientSignet.GA_Items_AncientSignet_C.OnAbilityDealtDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDamageEventData&          DamageEventData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_AncientSignet_C::OnAbilityDealtDamage(const struct FDamageEventData& DamageEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_AncientSignet_C", "OnAbilityDealtDamage");

	Params::GA_Items_AncientSignet_C_OnAbilityDealtDamage Parms{};

	Parms.DamageEventData = std::move(DamageEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_AncientSignet.GA_Items_AncientSignet_C.OnMinionAssist
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FAssistEventData&          AssistEventData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGA_Items_AncientSignet_C::OnMinionAssist(const struct FAssistEventData& AssistEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_AncientSignet_C", "OnMinionAssist");

	Params::GA_Items_AncientSignet_C_OnMinionAssist Parms{};

	Parms.AssistEventData = std::move(AssistEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_AncientSignet.GA_Items_AncientSignet_C.OnMinionKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDamageEventData&          KillEventData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Items_AncientSignet_C::OnMinionKill(const struct FDamageEventData& KillEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_AncientSignet_C", "OnMinionKill");

	Params::GA_Items_AncientSignet_C_OnMinionKill Parms{};

	Parms.KillEventData = std::move(KillEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Items_AncientSignet.GA_Items_AncientSignet_C.SetupListeners
// (Event, Protected, BlueprintEvent)

void UGA_Items_AncientSignet_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_AncientSignet_C", "SetupListeners");

	UObject::ProcessEvent(Func, nullptr);
}

}

