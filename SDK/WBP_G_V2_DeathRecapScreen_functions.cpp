﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_DeathRecapScreen

#include "Basic.hpp"

#include "WBP_G_V2_DeathRecapScreen_classes.hpp"
#include "WBP_G_V2_DeathRecapScreen_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_DeathRecapScreen.WBP_G_V2_DeathRecapScreen_C.ExecuteUbergraph_WBP_G_V2_DeathRecapScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_DeathRecapScreen_C::ExecuteUbergraph_WBP_G_V2_DeathRecapScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_DeathRecapScreen_C", "ExecuteUbergraph_WBP_G_V2_DeathRecapScreen");

	Params::WBP_G_V2_DeathRecapScreen_C_ExecuteUbergraph_WBP_G_V2_DeathRecapScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_DeathRecapScreen.WBP_G_V2_DeathRecapScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_DeathRecapScreen_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_DeathRecapScreen_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

