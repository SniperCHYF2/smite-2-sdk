﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DGA_Items_DivineRuin_Chain

#include "Basic.hpp"

#include "DGA_Items_DivineRuin_Chain_classes.hpp"
#include "DGA_Items_DivineRuin_Chain_parameters.hpp"


namespace SDK
{

// Function DGA_Items_DivineRuin_Chain.DGA_Items_DivineRuin_Chain_C.ApplyGameplayEffectToHitTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           HitTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDGA_Items_DivineRuin_Chain_C::ApplyGameplayEffectToHitTarget(class AActor* HitTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DGA_Items_DivineRuin_Chain_C", "ApplyGameplayEffectToHitTarget");

	Params::DGA_Items_DivineRuin_Chain_C_ApplyGameplayEffectToHitTarget Parms{};

	Parms.HitTarget = HitTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DGA_Items_DivineRuin_Chain.DGA_Items_DivineRuin_Chain_C.ExecuteUbergraph_DGA_Items_DivineRuin_Chain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDGA_Items_DivineRuin_Chain_C::ExecuteUbergraph_DGA_Items_DivineRuin_Chain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DGA_Items_DivineRuin_Chain_C", "ExecuteUbergraph_DGA_Items_DivineRuin_Chain");

	Params::DGA_Items_DivineRuin_Chain_C_ExecuteUbergraph_DGA_Items_DivineRuin_Chain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DGA_Items_DivineRuin_Chain.DGA_Items_DivineRuin_Chain_C.MoveDeployableToHitTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           HitTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDGA_Items_DivineRuin_Chain_C::MoveDeployableToHitTarget(class AActor* HitTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DGA_Items_DivineRuin_Chain_C", "MoveDeployableToHitTarget");

	Params::DGA_Items_DivineRuin_Chain_C_MoveDeployableToHitTarget Parms{};

	Parms.HitTarget = HitTarget;

	UObject::ProcessEvent(Func, &Parms);
}

}

