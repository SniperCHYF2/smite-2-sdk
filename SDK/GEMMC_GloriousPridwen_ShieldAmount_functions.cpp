﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GEMMC_GloriousPridwen_ShieldAmount

#include "Basic.hpp"

#include "GEMMC_GloriousPridwen_ShieldAmount_classes.hpp"
#include "GEMMC_GloriousPridwen_ShieldAmount_parameters.hpp"


namespace SDK
{

// Function GEMMC_GloriousPridwen_ShieldAmount.GEMMC_GloriousPridwen_ShieldAmount_C.CalculateBaseMagnitude
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayEffectSpec&       Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGEMMC_GloriousPridwen_ShieldAmount_C::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GEMMC_GloriousPridwen_ShieldAmount_C", "CalculateBaseMagnitude");

	Params::GEMMC_GloriousPridwen_ShieldAmount_C_CalculateBaseMagnitude Parms{};

	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

