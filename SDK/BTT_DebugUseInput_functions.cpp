﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_DebugUseInput

#include "Basic.hpp"

#include "BTT_DebugUseInput_classes.hpp"
#include "BTT_DebugUseInput_parameters.hpp"


namespace SDK
{

// Function BTT_DebugUseInput.BTT_DebugUseInput_C.ExecuteUbergraph_BTT_DebugUseInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_DebugUseInput_C::ExecuteUbergraph_BTT_DebugUseInput(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_DebugUseInput_C", "ExecuteUbergraph_BTT_DebugUseInput");

	Params::BTT_DebugUseInput_C_ExecuteUbergraph_BTT_DebugUseInput Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_DebugUseInput.BTT_DebugUseInput_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_DebugUseInput_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_DebugUseInput_C", "ReceiveExecuteAI");

	Params::BTT_DebugUseInput_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

