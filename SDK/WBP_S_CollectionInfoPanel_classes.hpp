﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_CollectionInfoPanel

#include "Basic.hpp"

#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_CollectionInfoPanel.WBP_S_CollectionInfoPanel_C
// 0x0028 (0x0620 - 0x05F8)
class UWBP_S_CollectionInfoPanel_C final : public UHWWidget
{
public:
	class UHWSizeBox*                             ItemDetails_SizeBox;                               // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CollectionDescriptionDisplay_C*  SelectedItemDescription;                           // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           SelectedItemNameText;                              // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CollectionRarityDisplay_C*       SelectedItemRarity;                                // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           SelectedItemTypeText;                              // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void DisplayCollectionItem(class UHWCollectionItem* CollectionItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_CollectionInfoPanel_C">();
	}
	static class UWBP_S_CollectionInfoPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_CollectionInfoPanel_C>();
	}
};
static_assert(alignof(UWBP_S_CollectionInfoPanel_C) == 0x000008, "Wrong alignment on UWBP_S_CollectionInfoPanel_C");
static_assert(sizeof(UWBP_S_CollectionInfoPanel_C) == 0x000620, "Wrong size on UWBP_S_CollectionInfoPanel_C");
static_assert(offsetof(UWBP_S_CollectionInfoPanel_C, ItemDetails_SizeBox) == 0x0005F8, "Member 'UWBP_S_CollectionInfoPanel_C::ItemDetails_SizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_S_CollectionInfoPanel_C, SelectedItemDescription) == 0x000600, "Member 'UWBP_S_CollectionInfoPanel_C::SelectedItemDescription' has a wrong offset!");
static_assert(offsetof(UWBP_S_CollectionInfoPanel_C, SelectedItemNameText) == 0x000608, "Member 'UWBP_S_CollectionInfoPanel_C::SelectedItemNameText' has a wrong offset!");
static_assert(offsetof(UWBP_S_CollectionInfoPanel_C, SelectedItemRarity) == 0x000610, "Member 'UWBP_S_CollectionInfoPanel_C::SelectedItemRarity' has a wrong offset!");
static_assert(offsetof(UWBP_S_CollectionInfoPanel_C, SelectedItemTypeText) == 0x000618, "Member 'UWBP_S_CollectionInfoPanel_C::SelectedItemTypeText' has a wrong offset!");

}

