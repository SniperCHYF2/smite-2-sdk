﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_VGS_MasteryEmote

#include "Basic.hpp"

#include "GC_VGS_MasteryEmote_classes.hpp"
#include "GC_VGS_MasteryEmote_parameters.hpp"


namespace SDK
{

// Function GC_VGS_MasteryEmote.GC_VGS_MasteryEmote_C.OnBurst
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const struct FGameplayCueNotify_SpawnResult&SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGC_VGS_MasteryEmote_C::OnBurst(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_VGS_MasteryEmote_C", "OnBurst");

	Params::GC_VGS_MasteryEmote_C_OnBurst Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

}

