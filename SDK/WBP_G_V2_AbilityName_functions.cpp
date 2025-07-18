﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_AbilityName

#include "Basic.hpp"

#include "WBP_G_V2_AbilityName_classes.hpp"
#include "WBP_G_V2_AbilityName_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_AbilityName.WBP_G_V2_AbilityName_C.AnimateNumber
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AActor*                           OwnerActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_AbilityName_C::AnimateNumber(int32 Number, const struct FGameplayCueParameters& Parameters, class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_AbilityName_C", "AnimateNumber");

	Params::WBP_G_V2_AbilityName_C_AnimateNumber Parms{};

	Parms.Number = Number;
	Parms.Parameters = std::move(Parameters);
	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_AbilityName.WBP_G_V2_AbilityName_C.OnShown
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_AbilityName_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_AbilityName_C", "OnShown");

	UObject::ProcessEvent(Func, nullptr);
}

}

