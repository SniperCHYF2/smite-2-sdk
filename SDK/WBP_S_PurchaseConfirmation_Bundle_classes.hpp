﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_S_PurchaseConfirmation_Bundle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "Hemingway_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_S_PurchaseConfirmation_Bundle.WBP_S_PurchaseConfirmation_Bundle_C
// 0x0060 (0x06F0 - 0x0690)
class UWBP_S_PurchaseConfirmation_Bundle_C final : public UHWPurchaseConfirmWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0690(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_S_CurrencyPriceDisplay_C*          Item_PremiumCurrencyDisplay;                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                          ItemImage;                                         // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           ItemName;                                          // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_PercentageTag_C*                 PercentageTagDiscount;                             // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CurrencyPriceDisplay_C*          PremiumCurrencyDisplay;                            // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             PremiumCurrencyPrompt;                             // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           PriceReductionDisclaimer;                          // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GemButton_Purple_C*              PurchaseButton;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               RarityMaterial;                                    // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CollectionRarityDisplay_C*       SelectedItemRarity;                                // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Title;                                             // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_S_PurchaseConfirmation_Skin_Purchasebutton_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature();
	void DisplayItem(class UHWCollectionItem* Item, int32 Quantity);
	void DisplayPrice(class URHStoreItemPrice* PriceItem, const struct FGameplayTag& PriceGroup);
	void DisplayRarity(const struct FGameplayTag& RarityTag);
	void ExecuteUbergraph_WBP_S_PurchaseConfirmation_Bundle(int32 EntryPoint);
	void InitializeWidget();
	void PreConstruct(bool IsDesignTime);
	void UninitializeWidget();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_S_PurchaseConfirmation_Bundle_C">();
	}
	static class UWBP_S_PurchaseConfirmation_Bundle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_S_PurchaseConfirmation_Bundle_C>();
	}
};
static_assert(alignof(UWBP_S_PurchaseConfirmation_Bundle_C) == 0x000008, "Wrong alignment on UWBP_S_PurchaseConfirmation_Bundle_C");
static_assert(sizeof(UWBP_S_PurchaseConfirmation_Bundle_C) == 0x0006F0, "Wrong size on UWBP_S_PurchaseConfirmation_Bundle_C");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, UberGraphFrame) == 0x000690, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, Item_PremiumCurrencyDisplay) == 0x000698, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::Item_PremiumCurrencyDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, ItemImage) == 0x0006A0, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::ItemImage' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, ItemName) == 0x0006A8, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::ItemName' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, PercentageTagDiscount) == 0x0006B0, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::PercentageTagDiscount' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, PremiumCurrencyDisplay) == 0x0006B8, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::PremiumCurrencyDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, PremiumCurrencyPrompt) == 0x0006C0, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::PremiumCurrencyPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, PriceReductionDisclaimer) == 0x0006C8, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::PriceReductionDisclaimer' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, PurchaseButton) == 0x0006D0, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, RarityMaterial) == 0x0006D8, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::RarityMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, SelectedItemRarity) == 0x0006E0, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::SelectedItemRarity' has a wrong offset!");
static_assert(offsetof(UWBP_S_PurchaseConfirmation_Bundle_C, Title) == 0x0006E8, "Member 'UWBP_S_PurchaseConfirmation_Bundle_C::Title' has a wrong offset!");

}

