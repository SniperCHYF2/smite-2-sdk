﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Farm_EnemyUnderTower

#include "Basic.hpp"

#include "BP_AIGoal_Farm_EnemyUnderTower_classes.hpp"
#include "BP_AIGoal_Farm_EnemyUnderTower_parameters.hpp"


namespace SDK
{

// Function BP_AIGoal_Farm_EnemyUnderTower.BP_AIGoal_Farm_EnemyUnderTower_C.CalculateWeight
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_AIGoal_Farm_EnemyUnderTower_C::CalculateWeight(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_EnemyUnderTower_C", "CalculateWeight");

	Params::BP_AIGoal_Farm_EnemyUnderTower_C_CalculateWeight Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_Farm_EnemyUnderTower.BP_AIGoal_Farm_EnemyUnderTower_C.CheckPreconditionsBP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIGoal_Farm_EnemyUnderTower_C::CheckPreconditionsBP(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_EnemyUnderTower_C", "CheckPreconditionsBP");

	Params::BP_AIGoal_Farm_EnemyUnderTower_C_CheckPreconditionsBP Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_Farm_EnemyUnderTower.BP_AIGoal_Farm_EnemyUnderTower_C.EndGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_Farm_EnemyUnderTower_C::EndGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_EnemyUnderTower_C", "EndGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIGoal_Farm_EnemyUnderTower.BP_AIGoal_Farm_EnemyUnderTower_C.ExecuteUbergraph_BP_AIGoal_Farm_EnemyUnderTower
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIGoal_Farm_EnemyUnderTower_C::ExecuteUbergraph_BP_AIGoal_Farm_EnemyUnderTower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_EnemyUnderTower_C", "ExecuteUbergraph_BP_AIGoal_Farm_EnemyUnderTower");

	Params::BP_AIGoal_Farm_EnemyUnderTower_C_ExecuteUbergraph_BP_AIGoal_Farm_EnemyUnderTower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIGoal_Farm_EnemyUnderTower.BP_AIGoal_Farm_EnemyUnderTower_C.StartGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_Farm_EnemyUnderTower_C::StartGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_EnemyUnderTower_C", "StartGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIGoal_Farm_EnemyUnderTower.BP_AIGoal_Farm_EnemyUnderTower_C.TickGoalBP
// (Event, Protected, BlueprintEvent)

void UBP_AIGoal_Farm_EnemyUnderTower_C::TickGoalBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_EnemyUnderTower_C", "TickGoalBP");

	UObject::ProcessEvent(Func, nullptr);
}

}

