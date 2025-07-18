﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_SeasonTokensQuestTracker

#include "Basic.hpp"

#include "WBP_C_SeasonTokensQuestTracker_classes.hpp"
#include "WBP_C_SeasonTokensQuestTracker_parameters.hpp"


namespace SDK
{

// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_C_SeasonTokensQuestTracker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.DisplayEOML
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_SeasonTokensQuestTracker_C::DisplayEOML()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "DisplayEOML");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.ExecuteUbergraph_WBP_C_SeasonTokensQuestTracker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonTokensQuestTracker_C::ExecuteUbergraph_WBP_C_SeasonTokensQuestTracker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "ExecuteUbergraph_WBP_C_SeasonTokensQuestTracker");

	Params::WBP_C_SeasonTokensQuestTracker_C_ExecuteUbergraph_WBP_C_SeasonTokensQuestTracker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.HandleWanderingMarketMultiplierActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsMultiplierActive                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonTokensQuestTracker_C::HandleWanderingMarketMultiplierActive(bool bIsMultiplierActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "HandleWanderingMarketMultiplierActive");

	Params::WBP_C_SeasonTokensQuestTracker_C_HandleWanderingMarketMultiplierActive Parms{};

	Parms.bIsMultiplierActive = bIsMultiplierActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_SeasonTokensQuestTracker_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_SeasonTokensQuestTracker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "PreConstruct");

	Params::WBP_C_SeasonTokensQuestTracker_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C.UnderOverCapLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_C_SeasonTokensQuestTracker_C::UnderOverCapLogic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_SeasonTokensQuestTracker_C", "UnderOverCapLogic");

	UObject::ProcessEvent(Func, nullptr);
}

}

