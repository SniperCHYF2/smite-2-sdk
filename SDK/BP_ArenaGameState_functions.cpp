﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ArenaGameState

#include "Basic.hpp"

#include "BP_ArenaGameState_classes.hpp"
#include "BP_ArenaGameState_parameters.hpp"


namespace SDK
{

// Function BP_ArenaGameState.BP_ArenaGameState_C.ExecuteUbergraph_BP_ArenaGameState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ArenaGameState_C::ExecuteUbergraph_BP_ArenaGameState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaGameState_C", "ExecuteUbergraph_BP_ArenaGameState");

	Params::BP_ArenaGameState_C_ExecuteUbergraph_BP_ArenaGameState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaGameState.BP_ArenaGameState_C.PlayEndSequence
// (Event, Protected, BlueprintEvent)
// Parameters:
// const struct FGenericTeamId&            Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_ArenaGameState_C::PlayEndSequence(const struct FGenericTeamId& Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaGameState_C", "PlayEndSequence");

	Params::BP_ArenaGameState_C_PlayEndSequence Parms{};

	Parms.Team = std::move(Team);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaGameState.BP_ArenaGameState_C.PlayFireworkVFX
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           fireworkActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ArenaGameState_C::PlayFireworkVFX(class AActor* fireworkActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaGameState_C", "PlayFireworkVFX");

	Params::BP_ArenaGameState_C_PlayFireworkVFX Parms{};

	Parms.fireworkActor = fireworkActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

