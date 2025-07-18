﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TowerPad

#include "Basic.hpp"

#include "BP_TowerPad_classes.hpp"
#include "BP_TowerPad_parameters.hpp"


namespace SDK
{

// Function BP_TowerPad.BP_TowerPad_C.DisablePad
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TowerPad_C::DisablePad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TowerPad_C", "DisablePad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TowerPad.BP_TowerPad_C.ExecuteUbergraph_BP_TowerPad
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TowerPad_C::ExecuteUbergraph_BP_TowerPad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TowerPad_C", "ExecuteUbergraph_BP_TowerPad");

	Params::BP_TowerPad_C_ExecuteUbergraph_BP_TowerPad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TowerPad.BP_TowerPad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TowerPad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TowerPad_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TowerPad.BP_TowerPad_C.SetColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              NewColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TowerPad_C::SetColor(const struct FLinearColor& NewColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TowerPad_C", "SetColor");

	Params::BP_TowerPad_C_SetColor Parms{};

	Parms.NewColor = std::move(NewColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TowerPad.BP_TowerPad_C.SetColorByTeam
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Team_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TowerPad_C::SetColorByTeam(int32 Team_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TowerPad_C", "SetColorByTeam");

	Params::BP_TowerPad_C_SetColorByTeam Parms{};

	Parms.Team_0 = Team_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TowerPad.BP_TowerPad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TowerPad_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TowerPad_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

