﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerContextMenu

#include "Basic.hpp"

#include "WBP_PlayerContextMenu_classes.hpp"
#include "WBP_PlayerContextMenu_parameters.hpp"


namespace SDK
{

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_2_OnVoiceChatStateChanged__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGuid&                     PlayerUuid                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVoiceChannel                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsTalking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsMuted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_2_OnVoiceChatStateChanged__DelegateSignature(const struct FGuid& PlayerUuid, bool bInVoiceChannel, bool bIsTalking, bool bIsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_2_OnVoiceChatStateChanged__DelegateSignature");

	Params::WBP_PlayerContextMenu_C_BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_2_OnVoiceChatStateChanged__DelegateSignature Parms{};

	Parms.PlayerUuid = std::move(PlayerUuid);
	Parms.bInVoiceChannel = bInVoiceChannel;
	Parms.bIsTalking = bIsTalking;
	Parms.bIsMuted = bIsMuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_3_OnVoiceChatDisconnected__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_3_OnVoiceChatDisconnected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "BndEvt__WBP_PlayerContextMenu_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_3_OnVoiceChatDisconnected__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PlayerContextMenu_C::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "BP_OnHandleBackAction");

	Params::WBP_PlayerContextMenu_C_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.DelayMoveMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                        Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const struct FMargin&                   Padding_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EViewSide                               side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::DelayMoveMenu(class URHWidget* Widget, const struct FMargin& Padding_0, EViewSide side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "DelayMoveMenu");

	Params::WBP_PlayerContextMenu_C_DelayMoveMenu Parms{};

	Parms.Widget = Widget;
	Parms.Padding_0 = std::move(Padding_0);
	Parms.side = side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ExecuteUbergraph_WBP_PlayerContextMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "ExecuteUbergraph_WBP_PlayerContextMenu");

	Params::WBP_PlayerContextMenu_C_ExecuteUbergraph_WBP_PlayerContextMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>*                 Buttons                                                (Parm, OutParm, ContainsInstancedReference)

void UWBP_PlayerContextMenu_C::GetAllActiveButtons(TArray<class UWidget*>* Buttons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "GetAllActiveButtons");

	Params::WBP_PlayerContextMenu_C_GetAllActiveButtons Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Buttons != nullptr)
		*Buttons = std::move(Parms.Buttons);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PlayerContextMenuOption_C*>*Option_Widgets                                         (Parm, OutParm, ContainsInstancedReference)

void UWBP_PlayerContextMenu_C::GetOptionWidgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "GetOptionWidgets");

	Params::WBP_PlayerContextMenu_C_GetOptionWidgets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Option_Widgets != nullptr)
		*Option_Widgets = std::move(Parms.Option_Widgets);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERH_INPUT_STATE                         InputState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Handle_Input_State_Changed(ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Handle Input State Changed");

	Params::WBP_PlayerContextMenu_C_Handle_Input_State_Changed Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGameplayTag&              CurrentRoute                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTag&              PreviousRoute                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// EViewManagerLayer                       Layer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Handle_View_State_Changed(const struct FGameplayTag& CurrentRoute, const struct FGameplayTag& PreviousRoute, EViewManagerLayer Layer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Handle View State Changed");

	Params::WBP_PlayerContextMenu_C_Handle_View_State_Changed Parms{};

	Parms.CurrentRoute = std::move(CurrentRoute);
	Parms.PreviousRoute = std::move(PreviousRoute);
	Parms.Layer = Layer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerContextOptions                   ContextOption                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::HandleOptionSelected(EPlayerContextOptions ContextOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "HandleOptionSelected");

	Params::WBP_PlayerContextMenu_C_HandleOptionSelected Parms{};

	Parms.ContextOption = ContextOption;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::HideContextMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "HideContextMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   Return_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Is_Any_Option_Visible(bool* Return_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Is Any Option Visible");

	Params::WBP_PlayerContextMenu_C_Is_Any_Option_Visible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsContextMenuOpen(bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsContextMenuOpen");

	Params::WBP_PlayerContextMenu_C_IsContextMenuOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentPlayerUuid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGuid&                     PlayerUuid                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   IsCurrentUuid                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsCurrentPlayerUuid(const struct FGuid& PlayerUuid, bool* IsCurrentUuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsCurrentPlayerUuid");

	Params::WBP_PlayerContextMenu_C_IsCurrentPlayerUuid Parms{};

	Parms.PlayerUuid = std::move(PlayerUuid);

	UObject::ProcessEvent(Func, &Parms);

	if (IsCurrentUuid != nullptr)
		*IsCurrentUuid = Parms.IsCurrentUuid;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingBot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// const struct FHWCustomBotConfig_Single& botConfig_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   TeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   Showing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsShowingBot(const struct FHWCustomBotConfig_Single& botConfig_0, int32 TeamNum, bool* Showing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsShowingBot");

	Params::WBP_PlayerContextMenu_C_IsShowingBot Parms{};

	Parms.botConfig_0 = std::move(botConfig_0);
	Parms.TeamNum = TeamNum;

	UObject::ProcessEvent(Func, &Parms);

	if (Showing != nullptr)
		*Showing = Parms.Showing;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URH_RHFriendAndPlatformFriend*    Friend                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool*                                   Showing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::IsShowingPlayer(class URH_RHFriendAndPlatformFriend* Friend, bool* Showing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "IsShowingPlayer");

	Params::WBP_PlayerContextMenu_C_IsShowingPlayer Parms{};

	Parms.Friend = Friend;

	UObject::ProcessEvent(Func, &Parms);

	if (Showing != nullptr)
		*Showing = Parms.Showing;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*        Selected_Player_Card                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::Move_To_Player_Card_And_Show(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "Move To Player Card And Show");

	Params::WBP_PlayerContextMenu_C_Move_To_Player_Card_And_Show Parms{};

	Parms.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::MoveToWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "MoveToWidget");

	Params::WBP_PlayerContextMenu_C_MoveToWidget Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EViewSide                               side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FMargin&                   Padding_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerContextMenu_C::MoveToWidgetSide(class UWidget* Widget, EViewSide side, const struct FMargin& Padding_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "MoveToWidgetSide");

	Params::WBP_PlayerContextMenu_C_MoveToWidgetSide Parms{};

	Parms.Widget = Widget;
	Parms.side = side;
	Parms.Padding_0 = std::move(Padding_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Context Option Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Succeeded                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::On_Context_Option_Completed(bool Succeeded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "On Context Option Completed");

	Params::WBP_PlayerContextMenu_C_On_Context_Option_Completed Parms{};

	Parms.Succeeded = Succeeded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.On Player Card Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*        Player_Card                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::On_Player_Card_Update(class UWBP_player_card_module_C* Player_Card)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "On Player Card Update");

	Params::WBP_PlayerContextMenu_C_On_Player_Card_Update Parms{};

	Parms.Player_Card = Player_Card;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PlayerContextMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnKeyDown");

	Params::WBP_PlayerContextMenu_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// const struct FKeyEvent&                 InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PlayerContextMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnKeyUp");

	Params::WBP_PlayerContextMenu_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnUpdateContextButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnUpdateContextButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "OnUpdateContextButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "PreConstruct");

	Params::WBP_PlayerContextMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::RefreshOptionsPadding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "RefreshOptionsPadding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetBotDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FHWCustomBotConfig_Single& botConfig_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerContextMenu_C::SetBotDisplay(const struct FHWCustomBotConfig_Single& botConfig_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "SetBotDisplay");

	Params::WBP_PlayerContextMenu_C_SetBotDisplay Parms{};

	Parms.botConfig_0 = std::move(botConfig_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_RHFriendAndPlatformFriend*    Friend_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIKSContextMenuTarget_C>TargetWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ShowForPlayer(class URH_RHFriendAndPlatformFriend* Friend_Info, TScriptInterface<class IIKSContextMenuTarget_C> TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "ShowForPlayer");

	Params::WBP_PlayerContextMenu_C_ShowForPlayer Parms{};

	Parms.Friend_Info = Friend_Info;
	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*        PlayerCard_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::ShowForPlayerCard(class UWBP_player_card_module_C* PlayerCard_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "ShowForPlayerCard");

	Params::WBP_PlayerContextMenu_C_ShowForPlayerCard Parms{};

	Parms.PlayerCard_0 = PlayerCard_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_PlayerContextMenu_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "BP_GetDesiredFocusTarget");

	Params::WBP_PlayerContextMenu_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget**                         FocusWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenu_C::GetFirstActiveButton(class UWidget** FocusWidget) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerContextMenu_C", "GetFirstActiveButton");

	Params::WBP_PlayerContextMenu_C_GetFirstActiveButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FocusWidget != nullptr)
		*FocusWidget = Parms.FocusWidget;
}

}

