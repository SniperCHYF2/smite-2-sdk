﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Spec_HUDScoreboard_BuffWidget

#include "Basic.hpp"

#include "WBP_G_Spec_HUDScoreboard_BuffWidget_classes.hpp"
#include "WBP_G_Spec_HUDScoreboard_BuffWidget_parameters.hpp"


namespace SDK
{

// Function WBP_G_Spec_HUDScoreboard_BuffWidget.WBP_G_Spec_HUDScoreboard_BuffWidget_C.DisplayBuff
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBuffApplied                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UHWGameplayEffectUIBuffData*UIData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_G_Spec_HUDScoreboard_BuffWidget_C::DisplayBuff(bool bBuffApplied, const class UHWGameplayEffectUIBuffData* UIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_Spec_HUDScoreboard_BuffWidget_C", "DisplayBuff");

	Params::WBP_G_Spec_HUDScoreboard_BuffWidget_C_DisplayBuff Parms{};

	Parms.bBuffApplied = bBuffApplied;
	Parms.UIData = UIData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_Spec_HUDScoreboard_BuffWidget.WBP_G_Spec_HUDScoreboard_BuffWidget_C.DisplayBuffDuration
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const float                             TimeRemaining                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_Spec_HUDScoreboard_BuffWidget_C::DisplayBuffDuration(const float TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_Spec_HUDScoreboard_BuffWidget_C", "DisplayBuffDuration");

	Params::WBP_G_Spec_HUDScoreboard_BuffWidget_C_DisplayBuffDuration Parms{};

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_Spec_HUDScoreboard_BuffWidget.WBP_G_Spec_HUDScoreboard_BuffWidget_C.FadeBuff
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_G_Spec_HUDScoreboard_BuffWidget_C::FadeBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_Spec_HUDScoreboard_BuffWidget_C", "FadeBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_Spec_HUDScoreboard_BuffWidget.WBP_G_Spec_HUDScoreboard_BuffWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_Spec_HUDScoreboard_BuffWidget_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_Spec_HUDScoreboard_BuffWidget_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

