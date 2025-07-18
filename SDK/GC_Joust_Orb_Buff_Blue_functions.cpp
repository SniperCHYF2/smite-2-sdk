﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Joust_Orb_Buff_Blue

#include "Basic.hpp"

#include "GC_Joust_Orb_Buff_Blue_classes.hpp"
#include "GC_Joust_Orb_Buff_Blue_parameters.hpp"


namespace SDK
{

// Function GC_Joust_Orb_Buff_Blue.GC_Joust_Orb_Buff_Blue_C.CreateFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent**               SpawnedFX                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AGC_Joust_Orb_Buff_Blue_C::CreateFX(class UNiagaraComponent** SpawnedFX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Joust_Orb_Buff_Blue_C", "CreateFX");

	Params::GC_Joust_Orb_Buff_Blue_C_CreateFX Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnedFX != nullptr)
		*SpawnedFX = Parms.SpawnedFX;
}


// Function GC_Joust_Orb_Buff_Blue.GC_Joust_Orb_Buff_Blue_C.ExecuteUbergraph_GC_Joust_Orb_Buff_Blue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Joust_Orb_Buff_Blue_C::ExecuteUbergraph_GC_Joust_Orb_Buff_Blue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Joust_Orb_Buff_Blue_C", "ExecuteUbergraph_GC_Joust_Orb_Buff_Blue");

	Params::GC_Joust_Orb_Buff_Blue_C_ExecuteUbergraph_GC_Joust_Orb_Buff_Blue Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Joust_Orb_Buff_Blue.GC_Joust_Orb_Buff_Blue_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Joust_Orb_Buff_Blue_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Joust_Orb_Buff_Blue_C", "K2_HandleGameplayCue");

	Params::GC_Joust_Orb_Buff_Blue_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Joust_Orb_Buff_Blue.GC_Joust_Orb_Buff_Blue_C.ModifyOrbCount
// (BlueprintCallable, BlueprintEvent)

void AGC_Joust_Orb_Buff_Blue_C::ModifyOrbCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Joust_Orb_Buff_Blue_C", "ModifyOrbCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Joust_Orb_Buff_Blue.GC_Joust_Orb_Buff_Blue_C.SetOrbCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                System                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Joust_Orb_Buff_Blue_C::SetOrbCount(class UNiagaraComponent* System, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Joust_Orb_Buff_Blue_C", "SetOrbCount");

	Params::GC_Joust_Orb_Buff_Blue_C_SetOrbCount Parms{};

	Parms.System = System;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Joust_Orb_Buff_Blue.GC_Joust_Orb_Buff_Blue_C.ToggleFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Joust_Orb_Buff_Blue_C::ToggleFX(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Joust_Orb_Buff_Blue_C", "ToggleFX");

	Params::GC_Joust_Orb_Buff_Blue_C_ToggleFX Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}

