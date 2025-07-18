﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_Logger

#include "Basic.hpp"

#include "WBP_Debug_Logger_classes.hpp"
#include "WBP_Debug_Logger_parameters.hpp"


namespace SDK
{

// Function WBP_Debug_Logger.WBP_Debug_Logger_C.CreatedNewTextWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWDebugLoggerTextWidget*         TextBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Logger_C::CreatedNewTextWidget(class UHWDebugLoggerTextWidget* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Logger_C", "CreatedNewTextWidget");

	Params::WBP_Debug_Logger_C_CreatedNewTextWidget Parms{};

	Parms.TextBlock = TextBlock;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Logger.WBP_Debug_Logger_C.ExecuteUbergraph_WBP_Debug_Logger
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Logger_C::ExecuteUbergraph_WBP_Debug_Logger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Logger_C", "ExecuteUbergraph_WBP_Debug_Logger");

	Params::WBP_Debug_Logger_C_ExecuteUbergraph_WBP_Debug_Logger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Debug_Logger.WBP_Debug_Logger_C.UpdatedTexts
// (Event, Protected, BlueprintEvent)

void UWBP_Debug_Logger_C::UpdatedTexts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Logger_C", "UpdatedTexts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Debug_Logger.WBP_Debug_Logger_C.UpdatedTextWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWDebugLoggerTextWidget*         TextBlock                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_Logger_C::UpdatedTextWidget(class UHWDebugLoggerTextWidget* TextBlock)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Debug_Logger_C", "UpdatedTextWidget");

	Params::WBP_Debug_Logger_C_UpdatedTextWidget Parms{};

	Parms.TextBlock = TextBlock;

	UObject::ProcessEvent(Func, &Parms);
}

}

