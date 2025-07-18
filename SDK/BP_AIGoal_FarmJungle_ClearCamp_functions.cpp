﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_FarmJungle_ClearCamp

#include "Basic.hpp"

#include "BP_AIGoal_FarmJungle_ClearCamp_classes.hpp"
#include "BP_AIGoal_FarmJungle_ClearCamp_parameters.hpp"


namespace SDK
{

// Function BP_AIGoal_FarmJungle_ClearCamp.BP_AIGoal_FarmJungle_ClearCamp_C.CheckPreconditionsBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIGoal_FarmJungle_ClearCamp_C::CheckPreconditionsBP(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_FarmJungle_ClearCamp_C", "CheckPreconditionsBP");

	Params::BP_AIGoal_FarmJungle_ClearCamp_C_CheckPreconditionsBP Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_FarmJungle_ClearCamp.BP_AIGoal_FarmJungle_ClearCamp_C.EndGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_FarmJungle_ClearCamp_C::EndGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_FarmJungle_ClearCamp_C", "EndGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIGoal_FarmJungle_ClearCamp.BP_AIGoal_FarmJungle_ClearCamp_C.ExecuteUbergraph_BP_AIGoal_FarmJungle_ClearCamp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIGoal_FarmJungle_ClearCamp_C::ExecuteUbergraph_BP_AIGoal_FarmJungle_ClearCamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_FarmJungle_ClearCamp_C", "ExecuteUbergraph_BP_AIGoal_FarmJungle_ClearCamp");

	Params::BP_AIGoal_FarmJungle_ClearCamp_C_ExecuteUbergraph_BP_AIGoal_FarmJungle_ClearCamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIGoal_FarmJungle_ClearCamp.BP_AIGoal_FarmJungle_ClearCamp_C.StartGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_FarmJungle_ClearCamp_C::StartGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_FarmJungle_ClearCamp_C", "StartGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}

}

