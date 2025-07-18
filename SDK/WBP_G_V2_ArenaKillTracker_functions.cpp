﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_ArenaKillTracker

#include "Basic.hpp"

#include "WBP_G_V2_ArenaKillTracker_classes.hpp"
#include "WBP_G_V2_ArenaKillTracker_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.DisplayGodKills
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   GodKillsCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ArenaKillTracker_C::DisplayGodKills(int32 GodKillsCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "DisplayGodKills");

	Params::WBP_G_V2_ArenaKillTracker_C_DisplayGodKills Parms{};

	Parms.GodKillsCount = GodKillsCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.ExecuteUbergraph_WBP_G_V2_ArenaKillTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ArenaKillTracker_C::ExecuteUbergraph_WBP_G_V2_ArenaKillTracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "ExecuteUbergraph_WBP_G_V2_ArenaKillTracker");

	Params::WBP_G_V2_ArenaKillTracker_C_ExecuteUbergraph_WBP_G_V2_ArenaKillTracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.GameStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AGameStateBase*                   GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ArenaKillTracker_C::GameStateSet(class AGameStateBase* GameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "GameStateSet");

	Params::WBP_G_V2_ArenaKillTracker_C_GameStateSet Parms{};

	Parms.GameState = GameState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.GetBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UWBP_G_V2_ArenaKillTracker_C::GetBrush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "GetBrush");

	Params::WBP_G_V2_ArenaKillTracker_C_GetBrush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_ArenaKillTracker_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.OnSiegeMinionSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   TeamId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ArenaKillTracker_C::OnSiegeMinionSpawned(int32 TeamId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "OnSiegeMinionSpawned");

	Params::WBP_G_V2_ArenaKillTracker_C_OnSiegeMinionSpawned Parms{};

	Parms.TeamId = TeamId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.RefreshGodKillUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ArenaKillTracker_C::RefreshGodKillUI(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "RefreshGodKillUI");

	Params::WBP_G_V2_ArenaKillTracker_C_RefreshGodKillUI Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.SiegeMinionSpawned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_ArenaKillTracker_C::SiegeMinionSpawned(int32 Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "SiegeMinionSpawned");

	Params::WBP_G_V2_ArenaKillTracker_C_SiegeMinionSpawned Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_ArenaKillTracker.WBP_G_V2_ArenaKillTracker_C.StopAlertAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_ArenaKillTracker_C::StopAlertAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_ArenaKillTracker_C", "StopAlertAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

