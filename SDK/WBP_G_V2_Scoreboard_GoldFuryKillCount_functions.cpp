﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_Scoreboard_GoldFuryKillCount

#include "Basic.hpp"

#include "WBP_G_V2_Scoreboard_GoldFuryKillCount_classes.hpp"
#include "WBP_G_V2_Scoreboard_GoldFuryKillCount_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_Scoreboard_GoldFuryKillCount.WBP_G_V2_Scoreboard_GoldFuryKillCount_C.ExecuteUbergraph_WBP_G_V2_Scoreboard_GoldFuryKillCount
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_GoldFuryKillCount_C::ExecuteUbergraph_WBP_G_V2_Scoreboard_GoldFuryKillCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_GoldFuryKillCount_C", "ExecuteUbergraph_WBP_G_V2_Scoreboard_GoldFuryKillCount");

	Params::WBP_G_V2_Scoreboard_GoldFuryKillCount_C_ExecuteUbergraph_WBP_G_V2_Scoreboard_GoldFuryKillCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard_GoldFuryKillCount.WBP_G_V2_Scoreboard_GoldFuryKillCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_GoldFuryKillCount_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_GoldFuryKillCount_C", "PreConstruct");

	Params::WBP_G_V2_Scoreboard_GoldFuryKillCount_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard_GoldFuryKillCount.WBP_G_V2_Scoreboard_GoldFuryKillCount_C.SetFilledPips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NumFilled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_GoldFuryKillCount_C::SetFilledPips(int32 NumFilled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_GoldFuryKillCount_C", "SetFilledPips");

	Params::WBP_G_V2_Scoreboard_GoldFuryKillCount_C_SetFilledPips Parms{};

	Parms.NumFilled = NumFilled;

	UObject::ProcessEvent(Func, &Parms);
}

}

