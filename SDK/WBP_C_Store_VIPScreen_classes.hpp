﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_Store_VIPScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "Hemingway_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_Store_VIPScreen.WBP_C_Store_VIPScreen_C
// 0x0058 (0x06C8 - 0x0670)
class UWBP_C_Store_VIPScreen_C final : public UHWStoreVIPScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0670(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               BG;                                                // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               BG_1;                                              // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           ExpiresDurationText;                               // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               Gradient_2;                                        // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_199;                                       // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      OwnedSwitcher;                                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_GemButton_Purple_C*              PurchaseButton;                                    // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CurrencyPriceDisplay_C*          PurchaseButtonPrice;                               // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_MultiPromptWidget_C*             PurchaseButtonPrompt;                              // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWVerticalBox*                         PurchaseExpirationBox;                             // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_C_Store_VIPScreen_PurchaseButton_K2Node_ComponentBoundEvent_0_OnHWButtonEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_C_Store_VIPScreen(int32 EntryPoint);
	void InitializeWidget();
	void OnHide();
	void OnShown();
	void UpdateExpirationText(const struct FDateTime& ExpirationTime);
	void UpdatePurchaseButton(EHWVIPOwnershipLevel VIPOwnership, class URHStoreItemPrice* PriceItem, const struct FGameplayTag& PriceGroupTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_Store_VIPScreen_C">();
	}
	static class UWBP_C_Store_VIPScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_Store_VIPScreen_C>();
	}
};
static_assert(alignof(UWBP_C_Store_VIPScreen_C) == 0x000008, "Wrong alignment on UWBP_C_Store_VIPScreen_C");
static_assert(sizeof(UWBP_C_Store_VIPScreen_C) == 0x0006C8, "Wrong size on UWBP_C_Store_VIPScreen_C");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, UberGraphFrame) == 0x000670, "Member 'UWBP_C_Store_VIPScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, BG) == 0x000678, "Member 'UWBP_C_Store_VIPScreen_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, BG_1) == 0x000680, "Member 'UWBP_C_Store_VIPScreen_C::BG_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, ExpiresDurationText) == 0x000688, "Member 'UWBP_C_Store_VIPScreen_C::ExpiresDurationText' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, Gradient_2) == 0x000690, "Member 'UWBP_C_Store_VIPScreen_C::Gradient_2' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, HWImage_199) == 0x000698, "Member 'UWBP_C_Store_VIPScreen_C::HWImage_199' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, OwnedSwitcher) == 0x0006A0, "Member 'UWBP_C_Store_VIPScreen_C::OwnedSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, PurchaseButton) == 0x0006A8, "Member 'UWBP_C_Store_VIPScreen_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, PurchaseButtonPrice) == 0x0006B0, "Member 'UWBP_C_Store_VIPScreen_C::PurchaseButtonPrice' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, PurchaseButtonPrompt) == 0x0006B8, "Member 'UWBP_C_Store_VIPScreen_C::PurchaseButtonPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_C_Store_VIPScreen_C, PurchaseExpirationBox) == 0x0006C0, "Member 'UWBP_C_Store_VIPScreen_C::PurchaseExpirationBox' has a wrong offset!");

}

