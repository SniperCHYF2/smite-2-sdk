﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_Event_OB12

#include "Basic.hpp"

#include "WBP_C_Event_OB12_classes.hpp"
#include "WBP_C_Event_OB12_parameters.hpp"


namespace SDK
{

// Function WBP_C_Event_OB12.WBP_C_Event_OB12_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_C_Event_OB12_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Event_OB12_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_Event_OB12.WBP_C_Event_OB12_C.ExecuteUbergraph_WBP_C_Event_OB12
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_Event_OB12_C::ExecuteUbergraph_WBP_C_Event_OB12(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_Event_OB12_C", "ExecuteUbergraph_WBP_C_Event_OB12");

	Params::WBP_C_Event_OB12_C_ExecuteUbergraph_WBP_C_Event_OB12 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

