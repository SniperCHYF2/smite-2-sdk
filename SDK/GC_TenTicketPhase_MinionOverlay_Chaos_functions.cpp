﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_TenTicketPhase_MinionOverlay_Chaos

#include "Basic.hpp"

#include "GC_TenTicketPhase_MinionOverlay_Chaos_classes.hpp"
#include "GC_TenTicketPhase_MinionOverlay_Chaos_parameters.hpp"


namespace SDK
{

// Function GC_TenTicketPhase_MinionOverlay_Chaos.GC_TenTicketPhase_MinionOverlay_Chaos_C.OnLoopingStart
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const struct FGameplayCueNotify_SpawnResult&SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_TenTicketPhase_MinionOverlay_Chaos_C::OnLoopingStart(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_TenTicketPhase_MinionOverlay_Chaos_C", "OnLoopingStart");

	Params::GC_TenTicketPhase_MinionOverlay_Chaos_C_OnLoopingStart Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_TenTicketPhase_MinionOverlay_Chaos.GC_TenTicketPhase_MinionOverlay_Chaos_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_TenTicketPhase_MinionOverlay_Chaos_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_TenTicketPhase_MinionOverlay_Chaos_C", "OnRemove");

	Params::GC_TenTicketPhase_MinionOverlay_Chaos_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

