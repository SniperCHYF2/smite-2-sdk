﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_Settings_Keybinder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_Settings_Keybinder.WBP_S_Settings_Keybinder_C
// 0x0030 (0x0698 - 0x0668)
class UWBP_S_Settings_Keybinder_C final : public UHWKeyBinderWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0668(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWVerticalBox*                         KeybindContainer;                                  // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWHorizontalBox*                       PresetContainer;                                   // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        PresetsCombobox;                                   // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           UnappliedKeybindingsText_1;                        // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             Warning_SizeBox;                                   // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void AddKeyBinderCategory(const class FText& InCategoryName);
	void AddKeyBinderEntryWidget(class UHWKeyBinderEntryWidget* EntryWidget);
	void BndEvt__WBP_S_Settings_Keybinder_PresetsCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Clear();
	void DisplayMappingName(const class FText& MappingName);
	void DisplayPresetOptions(const TArray<class FText>& Options, const class FText& SelectedOption);
	void ExecuteUbergraph_WBP_S_Settings_Keybinder(int32 EntryPoint);
	int32 GetSelectedPresetIndex();
	void UnappliedKeybindingsUpdated(bool bNewHasUnappliedKeybindings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_Settings_Keybinder_C">();
	}
	static class UWBP_S_Settings_Keybinder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_Settings_Keybinder_C>();
	}
};
static_assert(alignof(UWBP_S_Settings_Keybinder_C) == 0x000008, "Wrong alignment on UWBP_S_Settings_Keybinder_C");
static_assert(sizeof(UWBP_S_Settings_Keybinder_C) == 0x000698, "Wrong size on UWBP_S_Settings_Keybinder_C");
static_assert(offsetof(UWBP_S_Settings_Keybinder_C, UberGraphFrame) == 0x000668, "Member 'UWBP_S_Settings_Keybinder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_Keybinder_C, KeybindContainer) == 0x000670, "Member 'UWBP_S_Settings_Keybinder_C::KeybindContainer' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_Keybinder_C, PresetContainer) == 0x000678, "Member 'UWBP_S_Settings_Keybinder_C::PresetContainer' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_Keybinder_C, PresetsCombobox) == 0x000680, "Member 'UWBP_S_Settings_Keybinder_C::PresetsCombobox' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_Keybinder_C, UnappliedKeybindingsText_1) == 0x000688, "Member 'UWBP_S_Settings_Keybinder_C::UnappliedKeybindingsText_1' has a wrong offset!");
static_assert(offsetof(UWBP_S_Settings_Keybinder_C, Warning_SizeBox) == 0x000690, "Member 'UWBP_S_Settings_Keybinder_C::Warning_SizeBox' has a wrong offset!");

}

