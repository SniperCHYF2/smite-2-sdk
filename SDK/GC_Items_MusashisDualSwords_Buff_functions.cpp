﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Items_MusashisDualSwords_Buff

#include "Basic.hpp"

#include "GC_Items_MusashisDualSwords_Buff_classes.hpp"
#include "GC_Items_MusashisDualSwords_Buff_parameters.hpp"


namespace SDK
{

// Function GC_Items_MusashisDualSwords_Buff.GC_Items_MusashisDualSwords_Buff_C.ExecuteUbergraph_GC_Items_MusashisDualSwords_Buff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Items_MusashisDualSwords_Buff_C::ExecuteUbergraph_GC_Items_MusashisDualSwords_Buff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Items_MusashisDualSwords_Buff_C", "ExecuteUbergraph_GC_Items_MusashisDualSwords_Buff");

	Params::GC_Items_MusashisDualSwords_Buff_C_ExecuteUbergraph_GC_Items_MusashisDualSwords_Buff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Items_MusashisDualSwords_Buff.GC_Items_MusashisDualSwords_Buff_C.OnBurst_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// const struct FGameplayCueNotify_SpawnResult&SpawnResults                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Items_MusashisDualSwords_Buff_C::OnBurst_1(class AActor* Target, const struct FGameplayCueParameters& Parameters, const struct FGameplayCueNotify_SpawnResult& SpawnResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Items_MusashisDualSwords_Buff_C", "OnBurst_1");

	Params::GC_Items_MusashisDualSwords_Buff_C_OnBurst_1 Parms{};

	Parms.Target = Target;
	Parms.Parameters = std::move(Parameters);
	Parms.SpawnResults = std::move(SpawnResults);

	UObject::ProcessEvent(Func, &Parms);
}

}

