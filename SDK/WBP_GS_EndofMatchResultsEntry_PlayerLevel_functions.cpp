﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GS_EndofMatchResultsEntry_PlayerLevel

#include "Basic.hpp"

#include "WBP_GS_EndofMatchResultsEntry_PlayerLevel_classes.hpp"
#include "WBP_GS_EndofMatchResultsEntry_PlayerLevel_parameters.hpp"


namespace SDK
{

// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.AnimateCurrentLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::AnimateCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "AnimateCurrentLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.AnimateLevelUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  StartingProgressPercentage                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StartingLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::AnimateLevelUp(double StartingProgressPercentage, int32 StartingLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "AnimateLevelUp");

	Params::WBP_GS_EndofMatchResultsEntry_PlayerLevel_C_AnimateLevelUp Parms{};

	Parms.StartingProgressPercentage = StartingProgressPercentage;
	Parms.StartingLevel = StartingLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.BndEvt__WBP_GS_EndofMatchResultsEntry_NewProgress_K2Node_ComponentBoundEvent_0_OnAnimationCompleted__DelegateSignature
// (BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::BndEvt__WBP_GS_EndofMatchResultsEntry_NewProgress_K2Node_ComponentBoundEvent_0_OnAnimationCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "BndEvt__WBP_GS_EndofMatchResultsEntry_NewProgress_K2Node_ComponentBoundEvent_0_OnAnimationCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.DisplayProgress
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::DisplayProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "DisplayProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.ExecuteUbergraph_WBP_GS_EndofMatchResultsEntry_PlayerLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::ExecuteUbergraph_WBP_GS_EndofMatchResultsEntry_PlayerLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "ExecuteUbergraph_WBP_GS_EndofMatchResultsEntry_PlayerLevel");

	Params::WBP_GS_EndofMatchResultsEntry_PlayerLevel_C_ExecuteUbergraph_WBP_GS_EndofMatchResultsEntry_PlayerLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.HandleLevelUpAnimationCompleted
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::HandleLevelUpAnimationCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "HandleLevelUpAnimationCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.OnLevelUpAnimationComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::OnLevelUpAnimationComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "OnLevelUpAnimationComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.PopulateDisplay
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHWEndOfMatchResultsProgressSource&ProgressData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::PopulateDisplay(const struct FHWEndOfMatchResultsProgressSource& ProgressData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "PopulateDisplay");

	Params::WBP_GS_EndofMatchResultsEntry_PlayerLevel_C_PopulateDisplay Parms{};

	Parms.ProgressData = std::move(ProgressData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "PreConstruct");

	Params::WBP_GS_EndofMatchResultsEntry_PlayerLevel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.SFXPlayRankUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::SFXPlayRankUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "SFXPlayRankUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.SFXStartProgressUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::SFXStartProgressUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "SFXStartProgressUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GS_EndofMatchResultsEntry_PlayerLevel.WBP_GS_EndofMatchResultsEntry_PlayerLevel_C.SFXStopProgressUp
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GS_EndofMatchResultsEntry_PlayerLevel_C::SFXStopProgressUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GS_EndofMatchResultsEntry_PlayerLevel_C", "SFXStopProgressUp");

	UObject::ProcessEvent(Func, nullptr);
}

}

