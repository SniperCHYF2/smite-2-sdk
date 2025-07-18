﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTTask_FindTowerAttackLocation

#include "Basic.hpp"

#include "BTTask_FindTowerAttackLocation_classes.hpp"
#include "BTTask_FindTowerAttackLocation_parameters.hpp"


namespace SDK
{

// Function BTTask_FindTowerAttackLocation.BTTask_FindTowerAttackLocation_C.ExecuteUbergraph_BTTask_FindTowerAttackLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_FindTowerAttackLocation_C::ExecuteUbergraph_BTTask_FindTowerAttackLocation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_FindTowerAttackLocation_C", "ExecuteUbergraph_BTTask_FindTowerAttackLocation");

	Params::BTTask_FindTowerAttackLocation_C_ExecuteUbergraph_BTTask_FindTowerAttackLocation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTTask_FindTowerAttackLocation.BTTask_FindTowerAttackLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTTask_FindTowerAttackLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTTask_FindTowerAttackLocation_C", "ReceiveExecuteAI");

	Params::BTTask_FindTowerAttackLocation_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

