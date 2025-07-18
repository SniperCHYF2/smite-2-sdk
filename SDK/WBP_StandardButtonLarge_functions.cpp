﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StandardButtonLarge

#include "Basic.hpp"

#include "WBP_StandardButtonLarge_classes.hpp"
#include "WBP_StandardButtonLarge_parameters.hpp"


namespace SDK
{

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Do Hover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Do Unhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::ExecuteUbergraph_WBP_StandardButtonLarge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "ExecuteUbergraph_WBP_StandardButtonLarge");

	Params::WBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GamepadConfirm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GamepadHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GamepadUnhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName*                            FontName                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::GetFontStyleNameByType(class FName* FontName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GetFontStyleNameByType");

	Params::WBP_StandardButtonLarge_C_GetFontStyleNameByType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FontName != nullptr)
		*FontName = Parms.FontName;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   HasValidKeyPrompt                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey*                            GamepadKey                                             (Parm, OutParm, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GetGamepadPromptKey");

	Params::WBP_StandardButtonLarge_C_GetGamepadPromptKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = Parms.HasValidKeyPrompt;

	if (GamepadKey != nullptr)
		*GamepadKey = std::move(Parms.GamepadKey);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERH_INPUT_STATE                         InputState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::HandleInputStateChanged(ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "HandleInputStateChanged");

	Params::WBP_StandardButtonLarge_C_HandleInputStateChanged Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_StandardButtonLarge_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "NavigateConfirm");

	Params::WBP_StandardButtonLarge_C_NavigateConfirm Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "PreConstruct");

	Params::WBP_StandardButtonLarge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Gamepad Prompt for Action
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::Set_Gamepad_Prompt_for_Action(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Set Gamepad Prompt for Action");

	Params::WBP_StandardButtonLarge_C_Set_Gamepad_Prompt_for_Action Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FKey&                      Prompt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::Set_Key_Prompt(const struct FKey& Prompt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Set Key Prompt");

	Params::WBP_StandardButtonLarge_C_Set_Key_Prompt Parms{};

	Parms.Prompt = std::move(Prompt);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      ButtonText_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonLarge_C::SetButtonText(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetButtonText");

	Params::WBP_StandardButtonLarge_C_SetButtonText Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::SetDefaultDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetDefaultDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetDisabled(bool Disabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetDisabled");

	Params::WBP_StandardButtonLarge_C_SetDisabled Parms{};

	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetHeight(double InHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetHeight");

	Params::WBP_StandardButtonLarge_C_SetHeight Parms{};

	Parms.InHeight = InHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetWidth(double InWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetWidth");

	Params::WBP_StandardButtonLarge_C_SetWidth Parms{};

	Parms.InWidth = InWidth;

	UObject::ProcessEvent(Func, &Parms);
}

}

