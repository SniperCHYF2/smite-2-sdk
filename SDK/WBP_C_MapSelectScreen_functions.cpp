﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_MapSelectScreen

#include "Basic.hpp"

#include "WBP_C_MapSelectScreen_classes.hpp"
#include "WBP_C_MapSelectScreen_parameters.hpp"


namespace SDK
{

// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.BndEvt__WBP_C_MapSelectScreen_BackBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_C_MapSelectScreen_C::BndEvt__WBP_C_MapSelectScreen_BackBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "BndEvt__WBP_C_MapSelectScreen_BackBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::WBP_C_MapSelectScreen_C_BndEvt__WBP_C_MapSelectScreen_BackBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.BndEvt__WBP_C_MapSelectScreen_BlockerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_C_MapSelectScreen_C::BndEvt__WBP_C_MapSelectScreen_BlockerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "BndEvt__WBP_C_MapSelectScreen_BlockerButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.BndEvt__WBP_C_MapSelectScreen_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_C_MapSelectScreen_C::BndEvt__WBP_C_MapSelectScreen_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "BndEvt__WBP_C_MapSelectScreen_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.ClearMapButtons
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_C_MapSelectScreen_C::ClearMapButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "ClearMapButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.ExecuteUbergraph_WBP_C_MapSelectScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_MapSelectScreen_C::ExecuteUbergraph_WBP_C_MapSelectScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "ExecuteUbergraph_WBP_C_MapSelectScreen");

	Params::WBP_C_MapSelectScreen_C_ExecuteUbergraph_WBP_C_MapSelectScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_MapSelectScreen_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_C_MapSelectScreen_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "InitializeWidgetNavigation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_C_MapSelectScreen_C::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "NavigateBack");

	Params::WBP_C_MapSelectScreen_C_NavigateBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.OnMapButtonAdded
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWMapButton*                     NewMapButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_C_MapSelectScreen_C::OnMapButtonAdded(class UHWMapButton* NewMapButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "OnMapButtonAdded");

	Params::WBP_C_MapSelectScreen_C_OnMapButtonAdded Parms{};

	Parms.NewMapButton = NewMapButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.OnMapButtonsPopulated
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_C_MapSelectScreen_C::OnMapButtonsPopulated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "OnMapButtonsPopulated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_C_MapSelectScreen.WBP_C_MapSelectScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_C_MapSelectScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_C_MapSelectScreen_C", "PreConstruct");

	Params::WBP_C_MapSelectScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

