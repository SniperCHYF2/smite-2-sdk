﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_DeathRecapHudWidget

#include "Basic.hpp"

#include "WBP_G_V2_DeathRecapHudWidget_classes.hpp"
#include "WBP_G_V2_DeathRecapHudWidget_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_DeathRecapHudWidget.WBP_G_V2_DeathRecapHudWidget_C.DisplayCharacterRespawnState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsAlive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RemainingRespawnTime                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_DeathRecapHudWidget_C::DisplayCharacterRespawnState(bool bIsAlive, float RemainingRespawnTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_DeathRecapHudWidget_C", "DisplayCharacterRespawnState");

	Params::WBP_G_V2_DeathRecapHudWidget_C_DisplayCharacterRespawnState Parms{};

	Parms.bIsAlive = bIsAlive;
	Parms.RemainingRespawnTime = RemainingRespawnTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_DeathRecapHudWidget.WBP_G_V2_DeathRecapHudWidget_C.ExecuteUbergraph_WBP_G_V2_DeathRecapHudWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_DeathRecapHudWidget_C::ExecuteUbergraph_WBP_G_V2_DeathRecapHudWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_DeathRecapHudWidget_C", "ExecuteUbergraph_WBP_G_V2_DeathRecapHudWidget");

	Params::WBP_G_V2_DeathRecapHudWidget_C_ExecuteUbergraph_WBP_G_V2_DeathRecapHudWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_DeathRecapHudWidget.WBP_G_V2_DeathRecapHudWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_DeathRecapHudWidget_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_DeathRecapHudWidget_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

