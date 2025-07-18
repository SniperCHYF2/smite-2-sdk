﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GlobalEmoteEquipEntry

#include "Basic.hpp"

#include "RallyHereStart_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "Hemingway_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_GlobalEmoteEquipEntry.WBP_C_GlobalEmoteEquipEntry_C
// 0x0050 (0x0648 - 0x05F8)
class UWBP_C_GlobalEmoteEquipEntry_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URHAsyncImage*                          EquippedImage;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           EquippedText;                                      // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             GamepadKeys;                                       // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HoverDisabledImage;                                // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HoverImage;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             KBMKeys;                                           // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               LockImage;                                         // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Store;                                             // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsSlotAvailable;                                   // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHWCollectionItemType                         DisplayedCollectionType;                           // 0x0641(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_C_GlobalEmoteEquipEntry(int32 EntryPoint);
	void OnInputChange(ERH_INPUT_STATE InputState);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetHover(bool IsHovered_0);
	void UpdateKeybinds(int32 SlotIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_GlobalEmoteEquipEntry_C">();
	}
	static class UWBP_C_GlobalEmoteEquipEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_GlobalEmoteEquipEntry_C>();
	}
};
static_assert(alignof(UWBP_C_GlobalEmoteEquipEntry_C) == 0x000008, "Wrong alignment on UWBP_C_GlobalEmoteEquipEntry_C");
static_assert(sizeof(UWBP_C_GlobalEmoteEquipEntry_C) == 0x000648, "Wrong size on UWBP_C_GlobalEmoteEquipEntry_C");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, EquippedImage) == 0x000600, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::EquippedImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, EquippedText) == 0x000608, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::EquippedText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, GamepadKeys) == 0x000610, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::GamepadKeys' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, HoverDisabledImage) == 0x000618, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::HoverDisabledImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, HoverImage) == 0x000620, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::HoverImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, KBMKeys) == 0x000628, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::KBMKeys' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, LockImage) == 0x000630, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::LockImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, Store) == 0x000638, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::Store' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, IsSlotAvailable) == 0x000640, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::IsSlotAvailable' has a wrong offset!");
static_assert(offsetof(UWBP_C_GlobalEmoteEquipEntry_C, DisplayedCollectionType) == 0x000641, "Member 'UWBP_C_GlobalEmoteEquipEntry_C::DisplayedCollectionType' has a wrong offset!");

}

