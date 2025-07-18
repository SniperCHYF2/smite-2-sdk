﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTT_SetAbilityTarget

#include "Basic.hpp"

#include "BTT_SetAbilityTarget_classes.hpp"
#include "BTT_SetAbilityTarget_parameters.hpp"


namespace SDK
{

// Function BTT_SetAbilityTarget.BTT_SetAbilityTarget_C.ExecuteUbergraph_BTT_SetAbilityTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityTarget_C::ExecuteUbergraph_BTT_SetAbilityTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityTarget_C", "ExecuteUbergraph_BTT_SetAbilityTarget");

	Params::BTT_SetAbilityTarget_C_ExecuteUbergraph_BTT_SetAbilityTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTT_SetAbilityTarget.BTT_SetAbilityTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_SetAbilityTarget_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTT_SetAbilityTarget_C", "ReceiveExecuteAI");

	Params::BTT_SetAbilityTarget_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

