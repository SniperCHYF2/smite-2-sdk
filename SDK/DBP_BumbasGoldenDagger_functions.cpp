﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBP_BumbasGoldenDagger

#include "Basic.hpp"

#include "DBP_BumbasGoldenDagger_classes.hpp"
#include "DBP_BumbasGoldenDagger_parameters.hpp"


namespace SDK
{

// Function DBP_BumbasGoldenDagger.DBP_BumbasGoldenDagger_C.ExecuteUbergraph_DBP_BumbasGoldenDagger
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADBP_BumbasGoldenDagger_C::ExecuteUbergraph_DBP_BumbasGoldenDagger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_BumbasGoldenDagger_C", "ExecuteUbergraph_DBP_BumbasGoldenDagger");

	Params::DBP_BumbasGoldenDagger_C_ExecuteUbergraph_DBP_BumbasGoldenDagger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DBP_BumbasGoldenDagger.DBP_BumbasGoldenDagger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADBP_BumbasGoldenDagger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DBP_BumbasGoldenDagger_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

