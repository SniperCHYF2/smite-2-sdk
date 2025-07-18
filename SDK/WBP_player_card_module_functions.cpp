﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_player_card_module

#include "Basic.hpp"

#include "WBP_player_card_module_classes.hpp"
#include "WBP_player_card_module_parameters.hpp"


namespace SDK
{

// Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::AddShowPlayerCardAnimation(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "AddShowPlayerCardAnimation");

	Params::WBP_player_card_module_C_AddShowPlayerCardAnimation Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::ExecuteUbergraph_WBP_player_card_module(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "ExecuteUbergraph_WBP_player_card_module");

	Params::WBP_player_card_module_C_ExecuteUbergraph_WBP_player_card_module Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.FriendUpdate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*    Friend_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::FriendUpdate(class URH_RHFriendAndPlatformFriend* Friend_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "FriendUpdate");

	Params::WBP_player_card_module_C_FriendUpdate Parms{};

	Parms.Friend_0 = Friend_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "GamepadHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "GamepadUnhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERH_INPUT_STATE                         InputState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::Handle_Input_State_Changed(ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "Handle Input State Changed");

	Params::WBP_player_card_module_C_Handle_Input_State_Changed Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.HideRankedBadge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Should_Hide                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::HideRankedBadge(bool Should_Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "HideRankedBadge");

	Params::WBP_player_card_module_C_HideRankedBadge Parms{};

	Parms.Should_Hide = Should_Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::Manual_Clicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "Manual Clicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::Manual_Hover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "Manual Hover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::Manual_Unhover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "Manual Unhover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_player_card_module_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "NavigateConfirm");

	Params::WBP_player_card_module_C_NavigateConfirm Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::NavigateLeftFailure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "NavigateLeftFailure");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::NavigateRightFailure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "NavigateRightFailure");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::OnContextMenuClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "OnContextMenuClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EViewSide                               side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::OnContextMenuOpen(EViewSide side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "OnContextMenuOpen");

	Params::WBP_player_card_module_C_OnContextMenuOpen Parms{};

	Parms.side = side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnRHFriendSet
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*    Friend_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::OnRHFriendSet(class URH_RHFriendAndPlatformFriend* Friend_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "OnRHFriendSet");

	Params::WBP_player_card_module_C_OnRHFriendSet Parms{};

	Parms.Friend_0 = Friend_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.PlayClickSFX
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::PlayClickSFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "PlayClickSFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.PlayHoverSFX
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::PlayHoverSFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "PlayHoverSFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "PreConstruct");

	Params::WBP_player_card_module_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerCardStyle                        PlayerCardStyle                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::SetPlayerCardStyle(EPlayerCardStyle PlayerCardStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "SetPlayerCardStyle");

	Params::WBP_player_card_module_C_SetPlayerCardStyle Parms{};

	Parms.PlayerCardStyle = PlayerCardStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldShow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTalking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMuted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "SetVoiceState");

	Params::WBP_player_card_module_C_SetVoiceState Parms{};

	Parms.ShouldShow = ShouldShow;
	Parms.IsTalking = IsTalking;
	Parms.IsMuted = IsMuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ElapsedAlpha                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_player_card_module_C::ShowPlayerCardAnimation(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "ShowPlayerCardAnimation");

	Params::WBP_player_card_module_C_ShowPlayerCardAnimation Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::ShowPlayerCardAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "ShowPlayerCardAnimationFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::View_ResetPlayerCardState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "View_ResetPlayerCardState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::View_SetDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "View_SetDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::View_SetEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_player_card_module_C", "View_SetEmpty");

	UObject::ProcessEvent(Func, nullptr);
}

}

