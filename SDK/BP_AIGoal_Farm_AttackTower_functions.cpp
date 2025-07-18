﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIGoal_Farm_AttackTower

#include "Basic.hpp"

#include "BP_AIGoal_Farm_AttackTower_classes.hpp"
#include "BP_AIGoal_Farm_AttackTower_parameters.hpp"


namespace SDK
{

// Function BP_AIGoal_Farm_AttackTower.BP_AIGoal_Farm_AttackTower_C.CalculateWeight
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_AIGoal_Farm_AttackTower_C::CalculateWeight(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_AttackTower_C", "CalculateWeight");

	Params::BP_AIGoal_Farm_AttackTower_C_CalculateWeight Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_Farm_AttackTower.BP_AIGoal_Farm_AttackTower_C.CheckPreconditionsBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AIGoal_Farm_AttackTower_C::CheckPreconditionsBP(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_AttackTower_C", "CheckPreconditionsBP");

	Params::BP_AIGoal_Farm_AttackTower_C_CheckPreconditionsBP Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_Farm_AttackTower.BP_AIGoal_Farm_AttackTower_C.GetNearestValidEnemyTower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWAIController*                  InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHWCharacter_Base*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AHWCharacter_Base* UBP_AIGoal_Farm_AttackTower_C::GetNearestValidEnemyTower(class AHWAIController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_AttackTower_C", "GetNearestValidEnemyTower");

	Params::BP_AIGoal_Farm_AttackTower_C_GetNearestValidEnemyTower Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIGoal_Farm_AttackTower.BP_AIGoal_Farm_AttackTower_C.GetNumTankers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHWCharacter_Base*                SourceCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Tower                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32*                                  Tankers                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIGoal_Farm_AttackTower_C::GetNumTankers(class AHWCharacter_Base* SourceCharacter, class AActor* Tower, int32* Tankers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIGoal_Farm_AttackTower_C", "GetNumTankers");

	Params::BP_AIGoal_Farm_AttackTower_C_GetNumTankers Parms{};

	Parms.SourceCharacter = SourceCharacter;
	Parms.Tower = Tower;

	UObject::ProcessEvent(Func, &Parms);

	if (Tankers != nullptr)
		*Tankers = Parms.Tankers;
}

}

