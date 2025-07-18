﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamepadPromptBasic

#include "Basic.hpp"

#include "GamepadPromptBasic_classes.hpp"
#include "GamepadPromptBasic_parameters.hpp"


namespace SDK
{

// Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FButtonPromptData&         Data_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGamepadPromptBasic_C::SetPrompt(const struct FButtonPromptData& Data_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadPromptBasic_C", "SetPrompt");

	Params::GamepadPromptBasic_C_SetPrompt Parms{};

	Parms.Data_0 = std::move(Data_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
// (Private, BlueprintCallable, BlueprintEvent)

void UGamepadPromptBasic_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadPromptBasic_C", "Populate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadPromptBasic_C::ExecuteUbergraph_GamepadPromptBasic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadPromptBasic_C", "ExecuteUbergraph_GamepadPromptBasic");

	Params::GamepadPromptBasic_C_ExecuteUbergraph_GamepadPromptBasic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamepadPromptBasic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GamepadPromptBasic_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

