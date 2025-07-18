﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_Scoreboard

#include "Basic.hpp"

#include "WBP_G_V2_Scoreboard_classes.hpp"
#include "WBP_G_V2_Scoreboard_parameters.hpp"


namespace SDK
{

// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.BndEvt__WBP_G_V2_Scoreboard_GodWidget_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature
// (BlueprintEvent)

void UWBP_G_V2_Scoreboard_C::BndEvt__WBP_G_V2_Scoreboard_GodWidget_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "BndEvt__WBP_G_V2_Scoreboard_GodWidget_K2Node_ComponentBoundEvent_1_OnBack__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.BndEvt__WBP_G_V2_Scoreboard_PlayerContextMenu_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::BndEvt__WBP_G_V2_Scoreboard_PlayerContextMenu_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "BndEvt__WBP_G_V2_Scoreboard_PlayerContextMenu_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");

	Params::WBP_G_V2_Scoreboard_C_BndEvt__WBP_G_V2_Scoreboard_PlayerContextMenu_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.CloseGodPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bRestoreFocusToSelectedPlayerWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::CloseGodPanel(bool bRestoreFocusToSelectedPlayerWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "CloseGodPanel");

	Params::WBP_G_V2_Scoreboard_C_CloseGodPanel Parms{};

	Parms.bRestoreFocusToSelectedPlayerWidget = bRestoreFocusToSelectedPlayerWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.ExecuteUbergraph_WBP_G_V2_Scoreboard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::ExecuteUbergraph_WBP_G_V2_Scoreboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "ExecuteUbergraph_WBP_G_V2_Scoreboard");

	Params::WBP_G_V2_Scoreboard_C_ExecuteUbergraph_WBP_G_V2_Scoreboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.HandlePlayerContextMenuEntryClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHWPlayerContextActions                 EntryAction                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGuid&                     PlayerUuid                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::HandlePlayerContextMenuEntryClicked(EHWPlayerContextActions EntryAction, const struct FGuid& PlayerUuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "HandlePlayerContextMenuEntryClicked");

	Params::WBP_G_V2_Scoreboard_C_HandlePlayerContextMenuEntryClicked Parms{};

	Parms.EntryAction = EntryAction;
	Parms.PlayerUuid = std::move(PlayerUuid);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_Scoreboard_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "InitializeWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.On Player Reported
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FGuid&                     PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::On_Player_Reported(const struct FGuid& PlayerId, bool Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "On Player Reported");

	Params::WBP_G_V2_Scoreboard_C_On_Player_Reported Parms{};

	Parms.PlayerId = std::move(PlayerId);
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.On Report Menu Closed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_G_V2_Scoreboard_C::On_Report_Menu_Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "On Report Menu Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.OnGodPortraitEntrySelected
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWScoreboardPlayerWidget*        PlayerWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const class UHWCharacterItem*           SelectedGodItem                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const bool                              bIsHover                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::OnGodPortraitEntrySelected(class UHWScoreboardPlayerWidget* PlayerWidget, const class UHWCharacterItem* SelectedGodItem, const bool bIsHover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "OnGodPortraitEntrySelected");

	Params::WBP_G_V2_Scoreboard_C_OnGodPortraitEntrySelected Parms{};

	Parms.PlayerWidget = PlayerWidget;
	Parms.SelectedGodItem = SelectedGodItem;
	Parms.bIsHover = bIsHover;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.OnPlayerEntrySelected
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWScoreboardTeamWidget*          TeamWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHWScoreboardPlayerWidget*        PlayerWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     SelectedPlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::OnPlayerEntrySelected(class UHWScoreboardTeamWidget* TeamWidget, class UHWScoreboardPlayerWidget* PlayerWidget, class APlayerState* SelectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "OnPlayerEntrySelected");

	Params::WBP_G_V2_Scoreboard_C_OnPlayerEntrySelected Parms{};

	Parms.TeamWidget = TeamWidget;
	Parms.PlayerWidget = PlayerWidget;
	Parms.SelectedPlayer = SelectedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.OnPlayerMuteSelected
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHWScoreboardTeamWidget*          TeamWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHWScoreboardPlayerWidget*        PlayerWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AHWPlayerState*                   SelectedPlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::OnPlayerMuteSelected(class UHWScoreboardTeamWidget* TeamWidget, class UHWScoreboardPlayerWidget* PlayerWidget, class AHWPlayerState* SelectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "OnPlayerMuteSelected");

	Params::WBP_G_V2_Scoreboard_C_OnPlayerMuteSelected Parms{};

	Parms.TeamWidget = TeamWidget;
	Parms.PlayerWidget = PlayerWidget;
	Parms.SelectedPlayer = SelectedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_G_V2_Scoreboard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "PreConstruct");

	Params::WBP_G_V2_Scoreboard_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_G_V2_Scoreboard.WBP_G_V2_Scoreboard_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_G_V2_Scoreboard_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_G_V2_Scoreboard_C", "BP_GetDesiredFocusTarget");

	Params::WBP_G_V2_Scoreboard_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

