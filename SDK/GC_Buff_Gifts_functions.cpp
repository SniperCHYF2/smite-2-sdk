﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Buff_Gifts

#include "Basic.hpp"

#include "GC_Buff_Gifts_classes.hpp"
#include "GC_Buff_Gifts_parameters.hpp"


namespace SDK
{

// Function GC_Buff_Gifts.GC_Buff_Gifts_C.ApplyMaterialToChildMeshes
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AGC_Buff_Gifts_C::ApplyMaterialToChildMeshes(class USkeletalMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_Gifts_C", "ApplyMaterialToChildMeshes");

	Params::GC_Buff_Gifts_C_ApplyMaterialToChildMeshes Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_Gifts.GC_Buff_Gifts_C.ApplyMaterialToMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AGC_Buff_Gifts_C::ApplyMaterialToMesh(class USkeletalMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_Gifts_C", "ApplyMaterialToMesh");

	Params::GC_Buff_Gifts_C_ApplyMaterialToMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_Gifts.GC_Buff_Gifts_C.ExecuteUbergraph_GC_Buff_Gifts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Buff_Gifts_C::ExecuteUbergraph_GC_Buff_Gifts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_Gifts_C", "ExecuteUbergraph_GC_Buff_Gifts");

	Params::GC_Buff_Gifts_C_ExecuteUbergraph_GC_Buff_Gifts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_Gifts.GC_Buff_Gifts_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Buff_Gifts_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_Gifts_C", "K2_HandleGameplayCue");

	Params::GC_Buff_Gifts_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Buff_Gifts.GC_Buff_Gifts_C.RemoveMaterialFromMesh
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AGC_Buff_Gifts_C::RemoveMaterialFromMesh(class USkeletalMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Buff_Gifts_C", "RemoveMaterialFromMesh");

	Params::GC_Buff_Gifts_C_RemoveMaterialFromMesh Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}

}

