﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Items_ScepterOfDominion

#include "Basic.hpp"

#include "GA_Items_ScepterOfDominion_classes.hpp"
#include "GA_Items_ScepterOfDominion_parameters.hpp"


namespace SDK
{

// Function GA_Items_ScepterOfDominion.GA_Items_ScepterOfDominion_C.GetFiringMontageInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FHWMontageInfo                   ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FHWMontageInfo UGA_Items_ScepterOfDominion_C::GetFiringMontageInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Items_ScepterOfDominion_C", "GetFiringMontageInfo");

	Params::GA_Items_ScepterOfDominion_C_GetFiringMontageInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

