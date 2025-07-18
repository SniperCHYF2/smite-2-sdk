﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerStatus_ContextMenu

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"
#include "EPlayerStatusOption_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C
// 0x0088 (0x0640 - 0x05B8)
class UWBP_PlayerStatus_ContextMenu_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowAnim;                                          // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             OnlineStatus;                                      // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OptionsBg;                                         // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           OptionsContainer;                                  // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               OuterMenuContainer;                                // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons)> OnReadyNavigation; // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnMenuHidden;                                      // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(class UWBP_PlayerStatus_ContextMenuOption_C* FirstFocusableButton)> OnMenuStart; // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URH_PlayerInfo*                         LocalPlayerInfo;                                   // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             StatusColors;                                      // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> OptionButtons;                              // 0x0628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsOpen;                                            // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void DetermineToggleState();
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenu(int32 EntryPoint);
	void GetStatusColor(ERHPlayerOnlineStatus PlayerStatus, struct FSlateColor* StatusColor);
	void HandleOptionSelected(EPlayerStatusOption EPlayerStatus);
	void HideContextMenu();
	void InitializeWidget();
	void PreConstruct(bool IsDesignTime);
	void SetPlayerInfo(class URH_PlayerInfo* PlayerInfo);
	void SetupOptionButton();
	void ShowContextMenu();
	void UpdatePlayerStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerStatus_ContextMenu_C">();
	}
	static class UWBP_PlayerStatus_ContextMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerStatus_ContextMenu_C>();
	}
};
static_assert(alignof(UWBP_PlayerStatus_ContextMenu_C) == 0x000008, "Wrong alignment on UWBP_PlayerStatus_ContextMenu_C");
static_assert(sizeof(UWBP_PlayerStatus_ContextMenu_C) == 0x000640, "Wrong size on UWBP_PlayerStatus_ContextMenu_C");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_PlayerStatus_ContextMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, ShowAnim) == 0x0005C0, "Member 'UWBP_PlayerStatus_ContextMenu_C::ShowAnim' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OnlineStatus) == 0x0005C8, "Member 'UWBP_PlayerStatus_ContextMenu_C::OnlineStatus' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OptionsBg) == 0x0005D0, "Member 'UWBP_PlayerStatus_ContextMenu_C::OptionsBg' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OptionsContainer) == 0x0005D8, "Member 'UWBP_PlayerStatus_ContextMenu_C::OptionsContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OuterMenuContainer) == 0x0005E0, "Member 'UWBP_PlayerStatus_ContextMenu_C::OuterMenuContainer' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OnReadyNavigation) == 0x0005E8, "Member 'UWBP_PlayerStatus_ContextMenu_C::OnReadyNavigation' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OnMenuHidden) == 0x0005F8, "Member 'UWBP_PlayerStatus_ContextMenu_C::OnMenuHidden' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OnMenuStart) == 0x000608, "Member 'UWBP_PlayerStatus_ContextMenu_C::OnMenuStart' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, LocalPlayerInfo) == 0x000618, "Member 'UWBP_PlayerStatus_ContextMenu_C::LocalPlayerInfo' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, StatusColors) == 0x000620, "Member 'UWBP_PlayerStatus_ContextMenu_C::StatusColors' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, OptionButtons) == 0x000628, "Member 'UWBP_PlayerStatus_ContextMenu_C::OptionButtons' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenu_C, IsOpen) == 0x000638, "Member 'UWBP_PlayerStatus_ContextMenu_C::IsOpen' has a wrong offset!");

}

