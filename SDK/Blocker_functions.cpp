﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Blocker

#include "Basic.hpp"

#include "Blocker_classes.hpp"
#include "Blocker_parameters.hpp"


namespace SDK
{

// Function Blocker.Blocker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBlocker_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Blocker_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Blocker.Blocker_C.HandleBlockerChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBlocker_C::HandleBlockerChange(bool Show, class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Blocker_C", "HandleBlockerChange");

	Params::Blocker_C_HandleBlockerChange Parms{};

	Parms.Show = Show;
	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Blocker.Blocker_C.ExecuteUbergraph_Blocker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlocker_C::ExecuteUbergraph_Blocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Blocker_C", "ExecuteUbergraph_Blocker");

	Params::Blocker_C_ExecuteUbergraph_Blocker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Blocker.Blocker_C.BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBlocker_C::BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Blocker_C", "BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Blocker.Blocker_C.Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                        Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    ClickToClose_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlocker_C::Bind(class URHWidget* Widget, bool ClickToClose_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Blocker_C", "Bind");

	Params::Blocker_C_Bind Parms{};

	Parms.Widget = Widget;
	Parms.ClickToClose_0 = ClickToClose_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

