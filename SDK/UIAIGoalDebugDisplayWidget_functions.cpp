﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIAIGoalDebugDisplayWidget

#include "Basic.hpp"

#include "UIAIGoalDebugDisplayWidget_classes.hpp"
#include "UIAIGoalDebugDisplayWidget_parameters.hpp"


namespace SDK
{

// Function UIAIGoalDebugDisplayWidget.UIAIGoalDebugDisplayWidget_C.SetDisplayText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString&                          InNewText                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UUIAIGoalDebugDisplayWidget_C::SetDisplayText(class FString& InNewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIAIGoalDebugDisplayWidget_C", "SetDisplayText");

	Params::UIAIGoalDebugDisplayWidget_C_SetDisplayText Parms{};

	Parms.InNewText = std::move(InNewText);

	UObject::ProcessEvent(Func, &Parms);

	InNewText = std::move(Parms.InNewText);
}

}

