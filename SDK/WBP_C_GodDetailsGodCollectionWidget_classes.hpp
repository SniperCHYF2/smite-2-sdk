﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_GodDetailsGodCollectionWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "Hemingway_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_GodDetailsGodCollectionWidget.WBP_C_GodDetailsGodCollectionWidget_C
// 0x00D8 (0x08E8 - 0x0810)
class UWBP_C_GodDetailsGodCollectionWidget_C final : public UHWGodDetailsGodCollectionWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0810(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWSizeBox*                             ActionButtons_SizeBox;                             // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             ButtonPrompt;                                      // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           ButtonText;                                        // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_C_GodDetails_Label_C*              CollectionHeading;                                 // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           CosmeticTypeDescription;                           // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GemButton_Purple_C*              EquipButton;                                       // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           EquipButtonLabel;                                  // 0x0848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWVerticalBox*                         ItemDetails_VerticalBox;                           // 0x0850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             LeftTriggerPrompt;                                 // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_LobbyModelPlayer_C*              ModelPlayer;                                       // 0x0860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               OwnershipIcon;                                     // 0x0868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           OwnershipText;                                     // 0x0870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      PendingPurchaseThrobber;                           // 0x0878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CurrencyPriceDisplay_C*          PremiumCurrencyDisplay;                            // 0x0880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             RightPromptTrigger;                                // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CollectionDescriptionDisplay_C*  SelectedItemDescription;                           // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           SelectedItemGodNameText;                           // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           SelectedItemNameText;                              // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CollectionRarityDisplay_C*       SelectedItemRarity;                                // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_SkinVoicePreviewButton_C*        SkinVoicePreviewButton;                            // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GemButton_Purple_C*              UnequipButton;                                     // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             UnequipButtonPrompt;                               // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           UnequipText;                                       // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             VoiceButtonCallout;                                // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWHorizontalBox*                       VoicePreviewBox;                                   // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWCollectionItem*                      SelectedCollectionItem;                            // 0x08E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_C_GodDetailsGodCollectionWidget_EquipButton_1_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature();
	void BndEvt__WBP_C_GodDetailsGodCollectionWidget_EquipButton_K2Node_ComponentBoundEvent_1_OnHWButtonEvent__DelegateSignature();
	void BndEvt__WBP_C_GodDetailsGodCollectionWidget_SkinVoicePreviewButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BP_HandleOnGodSet();
	void BP_HandlePreviewInventoryItem(class UHWInventoryItem* InventoryItem);
	void DisplayButtonEquipStatus(EHWButtonEquipStatus ButtonStatus);
	void DisplayCollectionItemStatus(EHWCollectionItemStatus ItemStatus);
	void DisplayCollectionType(EHWCollectionItemType CollectionType);
	void DisplayPriceItem(class URHStoreItemPrice* PriceItem, const struct FGameplayTag& PriceGroup);
	void EquipPreviewStateUpdated(bool bIsInEquipPreview);
	void ExecuteUbergraph_WBP_C_GodDetailsGodCollectionWidget(int32 EntryPoint);
	void InitializeWidget();
	void OnGodSet();
	void OnHide();
	void OnShown();
	void PreviewInventoryItem(class UHWItemDisplayWidget* EntryWidget, const class UHWInventoryItem* InventoryItem);
	void UninitializeWidget();
	void UpdateButtonAsVariant();
	void UpdateUnequipButtonDisplay(bool bIsVisible);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_GodDetailsGodCollectionWidget_C">();
	}
	static class UWBP_C_GodDetailsGodCollectionWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_GodDetailsGodCollectionWidget_C>();
	}
};
static_assert(alignof(UWBP_C_GodDetailsGodCollectionWidget_C) == 0x000008, "Wrong alignment on UWBP_C_GodDetailsGodCollectionWidget_C");
static_assert(sizeof(UWBP_C_GodDetailsGodCollectionWidget_C) == 0x0008E8, "Wrong size on UWBP_C_GodDetailsGodCollectionWidget_C");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, UberGraphFrame) == 0x000810, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, ActionButtons_SizeBox) == 0x000818, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::ActionButtons_SizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, ButtonPrompt) == 0x000820, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::ButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, ButtonText) == 0x000828, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, CollectionHeading) == 0x000830, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::CollectionHeading' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, CosmeticTypeDescription) == 0x000838, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::CosmeticTypeDescription' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, EquipButton) == 0x000840, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::EquipButton' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, EquipButtonLabel) == 0x000848, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::EquipButtonLabel' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, ItemDetails_VerticalBox) == 0x000850, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::ItemDetails_VerticalBox' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, LeftTriggerPrompt) == 0x000858, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::LeftTriggerPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, ModelPlayer) == 0x000860, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::ModelPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, OwnershipIcon) == 0x000868, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::OwnershipIcon' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, OwnershipText) == 0x000870, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::OwnershipText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, PendingPurchaseThrobber) == 0x000878, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::PendingPurchaseThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, PremiumCurrencyDisplay) == 0x000880, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::PremiumCurrencyDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, RightPromptTrigger) == 0x000888, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::RightPromptTrigger' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, SelectedItemDescription) == 0x000890, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::SelectedItemDescription' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, SelectedItemGodNameText) == 0x000898, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::SelectedItemGodNameText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, SelectedItemNameText) == 0x0008A0, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::SelectedItemNameText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, SelectedItemRarity) == 0x0008A8, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::SelectedItemRarity' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, SkinVoicePreviewButton) == 0x0008B0, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::SkinVoicePreviewButton' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, UnequipButton) == 0x0008B8, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::UnequipButton' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, UnequipButtonPrompt) == 0x0008C0, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::UnequipButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, UnequipText) == 0x0008C8, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::UnequipText' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, VoiceButtonCallout) == 0x0008D0, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::VoiceButtonCallout' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, VoicePreviewBox) == 0x0008D8, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::VoicePreviewBox' has a wrong offset!");
static_assert(offsetof(UWBP_C_GodDetailsGodCollectionWidget_C, SelectedCollectionItem) == 0x0008E0, "Member 'UWBP_C_GodDetailsGodCollectionWidget_C::SelectedCollectionItem' has a wrong offset!");

}

