﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GMCC_SoulDevourer_Damage

#include "Basic.hpp"

#include "GMCC_SoulDevourer_Damage_classes.hpp"
#include "GMCC_SoulDevourer_Damage_parameters.hpp"


namespace SDK
{

// Function GMCC_SoulDevourer_Damage.GMCC_SoulDevourer_Damage_C.CalculateBaseMagnitude
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayEffectSpec&       Spec                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGMCC_SoulDevourer_Damage_C::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GMCC_SoulDevourer_Damage_C", "CalculateBaseMagnitude");

	Params::GMCC_SoulDevourer_Damage_C_CalculateBaseMagnitude Parms{};

	Parms.Spec = std::move(Spec);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

