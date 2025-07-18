﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Item_MeteorHammer

#include "Basic.hpp"

#include "GA_Item_MeteorHammer_classes.hpp"
#include "GA_Item_MeteorHammer_parameters.hpp"


namespace SDK
{

// Function GA_Item_MeteorHammer.GA_Item_MeteorHammer_C.ExecuteUbergraph_GA_Item_MeteorHammer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Item_MeteorHammer_C::ExecuteUbergraph_GA_Item_MeteorHammer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_MeteorHammer_C", "ExecuteUbergraph_GA_Item_MeteorHammer");

	Params::GA_Item_MeteorHammer_C_ExecuteUbergraph_GA_Item_MeteorHammer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_MeteorHammer.GA_Item_MeteorHammer_C.OnBeginSpawningDel_503F0D53461509CDA8E373B20350F0C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWDeployable*                    SpawnedDeployable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Item_MeteorHammer_C::OnBeginSpawningDel_503F0D53461509CDA8E373B20350F0C6(class AHWDeployable* SpawnedDeployable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_MeteorHammer_C", "OnBeginSpawningDel_503F0D53461509CDA8E373B20350F0C6");

	Params::GA_Item_MeteorHammer_C_OnBeginSpawningDel_503F0D53461509CDA8E373B20350F0C6 Parms{};

	Parms.SpawnedDeployable = SpawnedDeployable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_MeteorHammer.GA_Item_MeteorHammer_C.OnDamageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FDamageEventData&          DamageEventData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Item_MeteorHammer_C::OnDamageEvent(const struct FDamageEventData& DamageEventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_MeteorHammer_C", "OnDamageEvent");

	Params::GA_Item_MeteorHammer_C_OnDamageEvent Parms{};

	Parms.DamageEventData = std::move(DamageEventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_MeteorHammer.GA_Item_MeteorHammer_C.OnSpawnedDel_503F0D53461509CDA8E373B20350F0C6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWDeployable*                    SpawnedDeployable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Item_MeteorHammer_C::OnSpawnedDel_503F0D53461509CDA8E373B20350F0C6(class AHWDeployable* SpawnedDeployable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_MeteorHammer_C", "OnSpawnedDel_503F0D53461509CDA8E373B20350F0C6");

	Params::GA_Item_MeteorHammer_C_OnSpawnedDel_503F0D53461509CDA8E373B20350F0C6 Parms{};

	Parms.SpawnedDeployable = SpawnedDeployable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Item_MeteorHammer.GA_Item_MeteorHammer_C.SetupListeners
// (Event, Protected, BlueprintEvent)

void UGA_Item_MeteorHammer_C::SetupListeners()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Item_MeteorHammer_C", "SetupListeners");

	UObject::ProcessEvent(Func, nullptr);
}

}

