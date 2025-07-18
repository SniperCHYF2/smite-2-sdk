﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AQ_Quest_CheckMultiGodHit

#include "Basic.hpp"

#include "AQ_Quest_CheckMultiGodHit_classes.hpp"
#include "AQ_Quest_CheckMultiGodHit_parameters.hpp"


namespace SDK
{

// Function AQ_Quest_CheckMultiGodHit.AQ_Quest_CheckMultiGodHit_C.CustomEvent
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHitResult&                HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// const struct FDamageEventData&          DamageEventData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAQ_Quest_CheckMultiGodHit_C::CustomEvent(const struct FHitResult& HitResult, const struct FDamageEventData& DamageEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AQ_Quest_CheckMultiGodHit_C", "CustomEvent");

	Params::AQ_Quest_CheckMultiGodHit_C_CustomEvent Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.DamageEventData = std::move(DamageEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AQ_Quest_CheckMultiGodHit.AQ_Quest_CheckMultiGodHit_C.ExecuteUbergraph_AQ_Quest_CheckMultiGodHit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAQ_Quest_CheckMultiGodHit_C::ExecuteUbergraph_AQ_Quest_CheckMultiGodHit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AQ_Quest_CheckMultiGodHit_C", "ExecuteUbergraph_AQ_Quest_CheckMultiGodHit");

	Params::AQ_Quest_CheckMultiGodHit_C_ExecuteUbergraph_AQ_Quest_CheckMultiGodHit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AQ_Quest_CheckMultiGodHit.AQ_Quest_CheckMultiGodHit_C.Timerwindow
// (Public, BlueprintCallable, BlueprintEvent)

void UAQ_Quest_CheckMultiGodHit_C::Timerwindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AQ_Quest_CheckMultiGodHit_C", "Timerwindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AQ_Quest_CheckMultiGodHit.AQ_Quest_CheckMultiGodHit_C.TrackQuestForPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// const class UHWQuest*                   TrackedQuest                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWCharacterAbilitySystemActor*   CharAbSysActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAQ_Quest_CheckMultiGodHit_C::TrackQuestForPlayer(const class UHWQuest* TrackedQuest, class AHWCharacterAbilitySystemActor* CharAbSysActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AQ_Quest_CheckMultiGodHit_C", "TrackQuestForPlayer");

	Params::AQ_Quest_CheckMultiGodHit_C_TrackQuestForPlayer Parms{};

	Parms.TrackedQuest = TrackedQuest;
	Parms.CharAbSysActor = CharAbSysActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

