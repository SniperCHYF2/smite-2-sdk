﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_GodHealthGainLossBar

#include "Basic.hpp"

#include "WBP_G_V2_GodHealthGainLossBar_classes.hpp"
#include "WBP_G_V2_GodHealthGainLossBar_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_G_V2_GodHealthGainLossBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.DisplayCurrentValuePercent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::DisplayCurrentValuePercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "DisplayCurrentValuePercent");

	Params::WBP_G_V2_GodHealthGainLossBar_C_DisplayCurrentValuePercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.DisplayGainPercent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::DisplayGainPercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "DisplayGainPercent");

	Params::WBP_G_V2_GodHealthGainLossBar_C_DisplayGainPercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.DisplayLossPercent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::DisplayLossPercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "DisplayLossPercent");

	Params::WBP_G_V2_GodHealthGainLossBar_C_DisplayLossPercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.ExecuteUbergraph_WBP_G_V2_GodHealthGainLossBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::ExecuteUbergraph_WBP_G_V2_GodHealthGainLossBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "ExecuteUbergraph_WBP_G_V2_GodHealthGainLossBar");

	Params::WBP_G_V2_GodHealthGainLossBar_C_ExecuteUbergraph_WBP_G_V2_GodHealthGainLossBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.PercentRageConfigChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHWGainLossBarPercentRangeConfig&NewPercentConfig                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_G_V2_GodHealthGainLossBar_C::PercentRageConfigChanged(float NewPercent, const struct FHWGainLossBarPercentRangeConfig& NewPercentConfig)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "PercentRageConfigChanged");

	Params::WBP_G_V2_GodHealthGainLossBar_C_PercentRageConfigChanged Parms{};

	Parms.NewPercent = NewPercent;
	Parms.NewPercentConfig = std::move(NewPercentConfig);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.SetBorderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::SetBorderColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "SetBorderColor");

	Params::WBP_G_V2_GodHealthGainLossBar_C_SetBorderColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.SetGainEnabled
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bGainIsEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::SetGainEnabled(bool bGainIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "SetGainEnabled");

	Params::WBP_G_V2_GodHealthGainLossBar_C_SetGainEnabled Parms{};

	Parms.bGainIsEnabled = bGainIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_GodHealthGainLossBar.WBP_G_V2_GodHealthGainLossBar_C.SetLossEnabled
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLossIsEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_GodHealthGainLossBar_C::SetLossEnabled(bool bLossIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_GodHealthGainLossBar_C", "SetLossEnabled");

	Params::WBP_G_V2_GodHealthGainLossBar_C_SetLossEnabled Parms{};

	Parms.bLossIsEnabled = bLossIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

