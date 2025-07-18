﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomLobbyPlayer

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Hemingway_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C
// 0x00D8 (0x0708 - 0x0630)
class UWBP_CustomLobbyPlayer_C final : public UHWCustomLobbyPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       PlayerContextHover;                                // 0x0638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ControlsEnterLeft;                                 // 0x0640(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ControlsEnterRight;                                // 0x0648(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       PlayerCardHover;                                   // 0x0650(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AddButtonHover;                                    // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               AddButtonIcon;                                     // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               BotIcon;                                           // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             BotState;                                          // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           BotText;                                           // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        CardSwitcher;                                      // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               EmptyState;                                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             EmptyText;                                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               FilledState;                                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HoverControls;                                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InvitePendingGroup;                                // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CustomKickButton_C*                KickButton;                                        // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*                LeftBackGamepadCallout;                            // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LeftBackGroup;                                     // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LobbyLeaderIcon;                                   // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                LobbyPlayerButton;                                 // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PlayerCardButton;                                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CustomSwapButton_C*                SwapButton;                                        // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerInfoDisplay_C*               WBP_PlayerInfoDisplay;                             // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ThrobberHorizontal_C*              WBP_ThrobberHorizontal;                            // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGameplayTag                           RouteTag;                                          // 0x06F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   PromptSwitchTeams;                                 // 0x0700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void DoHover(bool PlayControlsShow);
	void DoPlayerClicked();
	void DoUnhover(bool PlayControlsHide);
	void ExecuteUbergraph_WBP_CustomLobbyPlayer(int32 EntryPoint);
	void GamepadHover();
	void GamepadUnhover();
	void GetControlsHoverAnim(class UWidgetAnimation** Animation);
	void HandlePlayerClicked();
	void HandlePlayerContextHover();
	void HandlePlayerContextUnhover();
	void HandleSwitchTeams(bool bNext);
	void InitializeWidget();
	bool NavigateConfirm();
	void OnContextMenuClose();
	void OnContextMenuOpen(EViewSide side);
	void OnInitialized();
	void OnInputStateChange(ERH_INPUT_STATE InputState);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetBot(const struct FHWCustomBotConfig_Single& botConfig);
	void SetEmpty();
	void SetMatchMember(const struct FRH_CustomMatchMember& InMatchMember);
	void SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted);
	void UpdateHoveredPrompts();
	void UserIsOverUs(bool* IsOver);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CustomLobbyPlayer_C">();
	}
	static class UWBP_CustomLobbyPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CustomLobbyPlayer_C>();
	}
};
static_assert(alignof(UWBP_CustomLobbyPlayer_C) == 0x000008, "Wrong alignment on UWBP_CustomLobbyPlayer_C");
static_assert(sizeof(UWBP_CustomLobbyPlayer_C) == 0x000708, "Wrong size on UWBP_CustomLobbyPlayer_C");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, UberGraphFrame) == 0x000630, "Member 'UWBP_CustomLobbyPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, PlayerContextHover) == 0x000638, "Member 'UWBP_CustomLobbyPlayer_C::PlayerContextHover' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, ControlsEnterLeft) == 0x000640, "Member 'UWBP_CustomLobbyPlayer_C::ControlsEnterLeft' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, ControlsEnterRight) == 0x000648, "Member 'UWBP_CustomLobbyPlayer_C::ControlsEnterRight' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, PlayerCardHover) == 0x000650, "Member 'UWBP_CustomLobbyPlayer_C::PlayerCardHover' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, AddButtonHover) == 0x000658, "Member 'UWBP_CustomLobbyPlayer_C::AddButtonHover' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, AddButtonIcon) == 0x000660, "Member 'UWBP_CustomLobbyPlayer_C::AddButtonIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, BotIcon) == 0x000668, "Member 'UWBP_CustomLobbyPlayer_C::BotIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, BotState) == 0x000670, "Member 'UWBP_CustomLobbyPlayer_C::BotState' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, BotText) == 0x000678, "Member 'UWBP_CustomLobbyPlayer_C::BotText' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, CardSwitcher) == 0x000680, "Member 'UWBP_CustomLobbyPlayer_C::CardSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, EmptyState) == 0x000688, "Member 'UWBP_CustomLobbyPlayer_C::EmptyState' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, EmptyText) == 0x000690, "Member 'UWBP_CustomLobbyPlayer_C::EmptyText' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, FilledState) == 0x000698, "Member 'UWBP_CustomLobbyPlayer_C::FilledState' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, HoverControls) == 0x0006A0, "Member 'UWBP_CustomLobbyPlayer_C::HoverControls' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, InvitePendingGroup) == 0x0006A8, "Member 'UWBP_CustomLobbyPlayer_C::InvitePendingGroup' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, KickButton) == 0x0006B0, "Member 'UWBP_CustomLobbyPlayer_C::KickButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, LeftBackGamepadCallout) == 0x0006B8, "Member 'UWBP_CustomLobbyPlayer_C::LeftBackGamepadCallout' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, LeftBackGroup) == 0x0006C0, "Member 'UWBP_CustomLobbyPlayer_C::LeftBackGroup' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, LobbyLeaderIcon) == 0x0006C8, "Member 'UWBP_CustomLobbyPlayer_C::LobbyLeaderIcon' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, LobbyPlayerButton) == 0x0006D0, "Member 'UWBP_CustomLobbyPlayer_C::LobbyPlayerButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, PlayerCardButton) == 0x0006D8, "Member 'UWBP_CustomLobbyPlayer_C::PlayerCardButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, SwapButton) == 0x0006E0, "Member 'UWBP_CustomLobbyPlayer_C::SwapButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, WBP_PlayerInfoDisplay) == 0x0006E8, "Member 'UWBP_CustomLobbyPlayer_C::WBP_PlayerInfoDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, WBP_ThrobberHorizontal) == 0x0006F0, "Member 'UWBP_CustomLobbyPlayer_C::WBP_ThrobberHorizontal' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, RouteTag) == 0x0006F8, "Member 'UWBP_CustomLobbyPlayer_C::RouteTag' has a wrong offset!");
static_assert(offsetof(UWBP_CustomLobbyPlayer_C, PromptSwitchTeams) == 0x000700, "Member 'UWBP_CustomLobbyPlayer_C::PromptSwitchTeams' has a wrong offset!");

}

