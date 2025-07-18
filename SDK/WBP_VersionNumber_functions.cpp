﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_VersionNumber

#include "Basic.hpp"

#include "WBP_VersionNumber_classes.hpp"
#include "WBP_VersionNumber_parameters.hpp"


namespace SDK
{

// Function WBP_VersionNumber.WBP_VersionNumber_C.ExecuteUbergraph_WBP_VersionNumber
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VersionNumber_C::ExecuteUbergraph_WBP_VersionNumber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VersionNumber_C", "ExecuteUbergraph_WBP_VersionNumber");

	Params::WBP_VersionNumber_C_ExecuteUbergraph_WBP_VersionNumber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VersionNumber.WBP_VersionNumber_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_VersionNumber_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VersionNumber_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_VersionNumber.WBP_VersionNumber_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VersionNumber_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VersionNumber_C", "PreConstruct");

	Params::WBP_VersionNumber_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_VersionNumber.WBP_VersionNumber_C.Set Version Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_VersionNumber_C::Set_Version_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_VersionNumber_C", "Set Version Text");

	UObject::ProcessEvent(Func, nullptr);
}

}

