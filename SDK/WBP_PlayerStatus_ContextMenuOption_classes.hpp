﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerStatus_ContextMenuOption

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "RallyHereStart_classes.hpp"
#include "Engine_structs.hpp"
#include "EPlayerStatusOption_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C
// 0x0050 (0x0608 - 0x05B8)
class UWBP_PlayerStatus_ContextMenuOption_C final : public URHWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               GamepadIconWRapper;                                // 0x05C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionText;                                        // 0x05D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectGamepadIcon;                                 // 0x05D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                   WBP_ButtonStacked;                                 // 0x05E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPlayerStatusOption                           Assigned_Context_Option;                           // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void(EPlayerStatusOption Context_Option)> OnContextOptionSelected;      // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsActiveInMenu;                                    // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERH_INPUT_STATE                               Current_Input_State;                               // 0x0601(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Hovered;                                        // 0x0602(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad);
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption(int32 EntryPoint);
	void GamepadHover();
	void GamepadUnhover();
	void Handle_Input_State_Changed(ERH_INPUT_STATE InputState);
	void InitializeWidget();
	void IsActiveForNavigation(bool* Return_Value);
	bool NavigateConfirm();
	void PreConstruct(bool IsDesignTime);
	void SetActiveInMenu(bool IsActive);
	void Update_Callout_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PlayerStatus_ContextMenuOption_C">();
	}
	static class UWBP_PlayerStatus_ContextMenuOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PlayerStatus_ContextMenuOption_C>();
	}
};
static_assert(alignof(UWBP_PlayerStatus_ContextMenuOption_C) == 0x000008, "Wrong alignment on UWBP_PlayerStatus_ContextMenuOption_C");
static_assert(sizeof(UWBP_PlayerStatus_ContextMenuOption_C) == 0x000608, "Wrong size on UWBP_PlayerStatus_ContextMenuOption_C");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, UberGraphFrame) == 0x0005B8, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, Hover) == 0x0005C0, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, GamepadIconWRapper) == 0x0005C8, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::GamepadIconWRapper' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, OptionText) == 0x0005D0, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::OptionText' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, SelectGamepadIcon) == 0x0005D8, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::SelectGamepadIcon' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, WBP_ButtonStacked) == 0x0005E0, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::WBP_ButtonStacked' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, Assigned_Context_Option) == 0x0005E8, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::Assigned_Context_Option' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, OnContextOptionSelected) == 0x0005F0, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::OnContextOptionSelected' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, IsActiveInMenu) == 0x000600, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::IsActiveInMenu' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, Current_Input_State) == 0x000601, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::Current_Input_State' has a wrong offset!");
static_assert(offsetof(UWBP_PlayerStatus_ContextMenuOption_C, Is_Hovered) == 0x000602, "Member 'UWBP_PlayerStatus_ContextMenuOption_C::Is_Hovered' has a wrong offset!");

}

