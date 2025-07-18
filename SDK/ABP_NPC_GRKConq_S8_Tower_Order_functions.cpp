﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_NPC_GRKConq_S8_Tower_Order

#include "Basic.hpp"

#include "ABP_NPC_GRKConq_S8_Tower_Order_classes.hpp"
#include "ABP_NPC_GRKConq_S8_Tower_Order_parameters.hpp"


namespace SDK
{

// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_NPC_GRKConq_S8_Tower_Order_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "AnimGraph");

	Params::ABP_NPC_GRKConq_S8_Tower_Order_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_NPC_GRKConq_S8_Tower_Order_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_GRKConq_S8_Tower_Order_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "BlueprintThreadSafeUpdateAnimation");

	Params::ABP_NPC_GRKConq_S8_Tower_Order_C_BlueprintThreadSafeUpdateAnimation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_GRKConq_S8_Tower_Order_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "BlueprintUpdateAnimation");

	Params::ABP_NPC_GRKConq_S8_Tower_Order_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order_AnimGraphNode_ModifyBone_8AB0A7B040937B04A0DC8BBF51D93909
// (BlueprintEvent)

void UABP_NPC_GRKConq_S8_Tower_Order_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order_AnimGraphNode_ModifyBone_8AB0A7B040937B04A0DC8BBF51D93909()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order_AnimGraphNode_ModifyBone_8AB0A7B040937B04A0DC8BBF51D93909");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_GRKConq_S8_Tower_Order_C::ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order");

	Params::ABP_NPC_GRKConq_S8_Tower_Order_C_ExecuteUbergraph_ABP_NPC_GRKConq_S8_Tower_Order Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_NPC_GRKConq_S8_Tower_Order.ABP_NPC_GRKConq_S8_Tower_Order_C.UpdateSmoothRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delta                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_NPC_GRKConq_S8_Tower_Order_C::UpdateSmoothRotation(double Delta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_NPC_GRKConq_S8_Tower_Order_C", "UpdateSmoothRotation");

	Params::ABP_NPC_GRKConq_S8_Tower_Order_C_UpdateSmoothRotation Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);
}

}

