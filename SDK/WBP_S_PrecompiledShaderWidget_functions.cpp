﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PrecompiledShaderWidget

#include "Basic.hpp"

#include "WBP_S_PrecompiledShaderWidget_classes.hpp"
#include "WBP_S_PrecompiledShaderWidget_parameters.hpp"


namespace SDK
{

// Function WBP_S_PrecompiledShaderWidget.WBP_S_PrecompiledShaderWidget_C.UpdateTaskCount
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CompletedTaskCount                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TotalTasks                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PrecompiledShaderWidget_C::UpdateTaskCount(int32 CompletedTaskCount, int32 TotalTasks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PrecompiledShaderWidget_C", "UpdateTaskCount");

	Params::WBP_S_PrecompiledShaderWidget_C_UpdateTaskCount Parms{};

	Parms.CompletedTaskCount = CompletedTaskCount;
	Parms.TotalTasks = TotalTasks;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PrecompiledShaderWidget.WBP_S_PrecompiledShaderWidget_C.UpdatePrecompiledState
// (Event, Protected, BlueprintEvent)
// Parameters:
// EHWPrecompiledShaderState               NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PrecompiledShaderWidget_C::UpdatePrecompiledState(EHWPrecompiledShaderState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PrecompiledShaderWidget_C", "UpdatePrecompiledState");

	Params::WBP_S_PrecompiledShaderWidget_C_UpdatePrecompiledState Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_S_PrecompiledShaderWidget.WBP_S_PrecompiledShaderWidget_C.ExecuteUbergraph_WBP_S_PrecompiledShaderWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_S_PrecompiledShaderWidget_C::ExecuteUbergraph_WBP_S_PrecompiledShaderWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_S_PrecompiledShaderWidget_C", "ExecuteUbergraph_WBP_S_PrecompiledShaderWidget");

	Params::WBP_S_PrecompiledShaderWidget_C_ExecuteUbergraph_WBP_S_PrecompiledShaderWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

