﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CustomGameLobbyNew

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CustomGameLobbyNew.WBP_CustomGameLobbyNew_C
// 0x00C8 (0x0758 - 0x0690)
class UWBP_CustomGameLobbyNew_C final : public UHWCustomGameLobby
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_S_GenericButton_C*                 AddBotTeamA;                                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GenericButton_C*                 AddBotTeamB;                                       // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Blocker;                                           // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*               ContextMenu;                                       // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWCheckBox*                            DoNotTrackCheckBox;                                // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWHorizontalBox*                       DoNotTrackHorizontalBox;                           // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           HWWarningMessage;                                  // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_StandardButton_C*                LeaveButton;                                       // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_CustomLobby_GameModeNew_C*       NewGameModeLabel;                                  // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_CustomLobby_PrivacyToggle_C*     PrivacyToggle;                                     // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GenericButton_C*                 RegionButton2;                                     // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      RegionSwitcher;                                    // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           RegionText;                                        // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GenericButton_C*                 SpectateButton;                                    // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Spectator;                                         // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               SpectatorDivider;                                  // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SpectatorGroup;                                    // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_StandardButton_C*                StartButtonNew;                                    // 0x0720(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TeamA;                                             // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TeamB;                                             // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_CustomLobby_Title_C*             Title;                                             // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         WarningWrapper;                                    // 0x0740(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*          WBP_VoiceActivityContainer;                        // 0x0748(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ContextMenuFocusGroup;                             // 0x0750(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_CustomGameLobbyNew_AddBotTeamA_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CustomGameLobbyNew_AddBotTeamB_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CustomGameLobbyNew_Blocker_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_CustomGameLobbyNew_ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuHidden__DelegateSignature();
	void BndEvt__WBP_CustomGameLobbyNew_ContextMenu_K2Node_ComponentBoundEvent_8_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>& NavWidgets, class UWidget* Default_Widget);
	void BndEvt__WBP_CustomGameLobbyNew_ContextMenu_K2Node_ComponentBoundEvent_9_OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void BndEvt__WBP_CustomGameLobbyNew_DoNotTrackCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__WBP_CustomGameLobbyNew_LeaveButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UHWWidget* Button_Widget);
	void BndEvt__WBP_CustomGameLobbyNew_RegionButton2_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CustomGameLobbyNew_SpectateButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_CustomGameLobbyNew_StartButtonNew_K2Node_ComponentBoundEvent_5_OnButtonClicked__DelegateSignature(class UHWWidget* Button_Widget);
	void BndEvt__WBP_CustomGameLobbyNew_WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_4_OnVoiceChatStateChanged__DelegateSignature(const struct FGuid& PlayerUuid, bool bInVoiceChannel, bool bIsTalking, bool bIsMuted);
	void ClearContextActions();
	void ExecuteUbergraph_WBP_CustomGameLobbyNew(int32 EntryPoint);
	class URHWidget* GetLeaveLobbyButton();
	class URHWidget* GetSpectatorButton();
	class URHWidget* GetStartGameButton();
	class URHWidget* GetTeam1AddBotButton();
	class URHWidget* GetTeam2AddBotButton();
	void HandleFinishEditingLobbyName(const class FText& NewTitle);
	void HandleLobbyLeaderDisplayNameResponse(bool bSuccess, const class FString& DisplayName);
	void HandleMapChanged();
	void HandlePlayerClicked(const struct FRH_CustomMatchMember& MatchMember, class URHCustomLobbyPlayer* PlayerWidget);
	void HandleVoiceMemberUpdated(const struct FGuid& PlayerUuid, bool InVoiceChannel, bool IsTalking, bool IsMuted);
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void LeaveCustomLobby();
	void MassInvite_Close();
	bool NavigateBack();
	void OnHide();
	void OnInitialized();
	void OnShown();
	void OpenMapSelect();
	void PlayerInputTypeChanged(bool bIsGamepad);
	void PopulateLobbyWithSessionData();
	void PreConstruct(bool IsDesignTime);
	void PushContextActions();
	void RefreshNavigationRegistration();
	void Set_Lobby_Privacy(EHWCustomMatchPrivacy PrivacyMode);
	void ToggleLobbyPrivacy();
	void ToggleRename();
	void UpdateCustomMatchStatus(bool bLaunching);
	void UpdateLobbyName(const class FString& NewName);
	void UpdateLobbyPrivacy(const EHWCustomMatchPrivacy& NewMatchPrivacy);
	void UpdateRegionDisplay(const class FString& RegionId);
	void UpdateSpectateButton();

	bool IsCustomBotEnabled() const;
	bool IsSpectatingEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CustomGameLobbyNew_C">();
	}
	static class UWBP_CustomGameLobbyNew_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CustomGameLobbyNew_C>();
	}
};
static_assert(alignof(UWBP_CustomGameLobbyNew_C) == 0x000008, "Wrong alignment on UWBP_CustomGameLobbyNew_C");
static_assert(sizeof(UWBP_CustomGameLobbyNew_C) == 0x000758, "Wrong size on UWBP_CustomGameLobbyNew_C");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, UberGraphFrame) == 0x000690, "Member 'UWBP_CustomGameLobbyNew_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, AddBotTeamA) == 0x000698, "Member 'UWBP_CustomGameLobbyNew_C::AddBotTeamA' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, AddBotTeamB) == 0x0006A0, "Member 'UWBP_CustomGameLobbyNew_C::AddBotTeamB' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, Blocker) == 0x0006A8, "Member 'UWBP_CustomGameLobbyNew_C::Blocker' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, ContextMenu) == 0x0006B0, "Member 'UWBP_CustomGameLobbyNew_C::ContextMenu' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, DoNotTrackCheckBox) == 0x0006B8, "Member 'UWBP_CustomGameLobbyNew_C::DoNotTrackCheckBox' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, DoNotTrackHorizontalBox) == 0x0006C0, "Member 'UWBP_CustomGameLobbyNew_C::DoNotTrackHorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, HWWarningMessage) == 0x0006C8, "Member 'UWBP_CustomGameLobbyNew_C::HWWarningMessage' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, LeaveButton) == 0x0006D0, "Member 'UWBP_CustomGameLobbyNew_C::LeaveButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, NewGameModeLabel) == 0x0006D8, "Member 'UWBP_CustomGameLobbyNew_C::NewGameModeLabel' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, PrivacyToggle) == 0x0006E0, "Member 'UWBP_CustomGameLobbyNew_C::PrivacyToggle' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, RegionButton2) == 0x0006E8, "Member 'UWBP_CustomGameLobbyNew_C::RegionButton2' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, RegionSwitcher) == 0x0006F0, "Member 'UWBP_CustomGameLobbyNew_C::RegionSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, RegionText) == 0x0006F8, "Member 'UWBP_CustomGameLobbyNew_C::RegionText' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, SpectateButton) == 0x000700, "Member 'UWBP_CustomGameLobbyNew_C::SpectateButton' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, Spectator) == 0x000708, "Member 'UWBP_CustomGameLobbyNew_C::Spectator' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, SpectatorDivider) == 0x000710, "Member 'UWBP_CustomGameLobbyNew_C::SpectatorDivider' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, SpectatorGroup) == 0x000718, "Member 'UWBP_CustomGameLobbyNew_C::SpectatorGroup' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, StartButtonNew) == 0x000720, "Member 'UWBP_CustomGameLobbyNew_C::StartButtonNew' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, TeamA) == 0x000728, "Member 'UWBP_CustomGameLobbyNew_C::TeamA' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, TeamB) == 0x000730, "Member 'UWBP_CustomGameLobbyNew_C::TeamB' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, Title) == 0x000738, "Member 'UWBP_CustomGameLobbyNew_C::Title' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, WarningWrapper) == 0x000740, "Member 'UWBP_CustomGameLobbyNew_C::WarningWrapper' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, WBP_VoiceActivityContainer) == 0x000748, "Member 'UWBP_CustomGameLobbyNew_C::WBP_VoiceActivityContainer' has a wrong offset!");
static_assert(offsetof(UWBP_CustomGameLobbyNew_C, ContextMenuFocusGroup) == 0x000750, "Member 'UWBP_CustomGameLobbyNew_C::ContextMenuFocusGroup' has a wrong offset!");

}

