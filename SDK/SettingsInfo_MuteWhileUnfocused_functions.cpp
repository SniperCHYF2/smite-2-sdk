﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsInfo_MuteWhileUnfocused

#include "Basic.hpp"

#include "SettingsInfo_MuteWhileUnfocused_classes.hpp"
#include "SettingsInfo_MuteWhileUnfocused_parameters.hpp"


namespace SDK
{

// Function SettingsInfo_MuteWhileUnfocused.SettingsInfo_MuteWhileUnfocused_C.ApplyBoolValue
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    InBool                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USettingsInfo_MuteWhileUnfocused_C::ApplyBoolValue(bool InBool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsInfo_MuteWhileUnfocused_C", "ApplyBoolValue");

	Params::SettingsInfo_MuteWhileUnfocused_C_ApplyBoolValue Parms{};

	Parms.InBool = InBool;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SettingsInfo_MuteWhileUnfocused.SettingsInfo_MuteWhileUnfocused_C.UpdateMuteWhileUnfocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBool                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsInfo_MuteWhileUnfocused_C::UpdateMuteWhileUnfocused(bool InBool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsInfo_MuteWhileUnfocused_C", "UpdateMuteWhileUnfocused");

	Params::SettingsInfo_MuteWhileUnfocused_C_UpdateMuteWhileUnfocused Parms{};

	Parms.InBool = InBool;

	UObject::ProcessEvent(Func, &Parms);
}

}

