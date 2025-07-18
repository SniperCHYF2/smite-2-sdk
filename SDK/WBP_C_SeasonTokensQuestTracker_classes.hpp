﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_C_SeasonTokensQuestTracker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_C_SeasonTokensQuestTracker.WBP_C_SeasonTokensQuestTracker_C
// 0x0130 (0x0738 - 0x0608)
class UWBP_C_SeasonTokensQuestTracker_C final : public UHWSeasonShopQuestProgressWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0608(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWImage*                               Twox;                                              // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             TwoxBanner;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_S_CurrencyDisplay_C*               CoinPurse;                                         // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWHorizontalBox*                       CoinWallet;                                        // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           CurrencyCapWarningText;                            // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           CurrencyCapWarningText_1;                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           CurrencyCapWarningText_2;                          // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           CurrencyCapWarningText_3;                          // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           EarnRewardsText;                                   // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           EarnRewardsText_1;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage;                                           // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_45;                                        // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_59;                                        // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_101;                                       // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_103;                                       // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_132;                                       // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               HWImage_159;                                       // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               LockCCap;                                          // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             MaxCap;                                            // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           MaxPostProgressText;                               // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           MaxPreProgressText;                                // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               ProgressBackground;                                // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             ProgressBarSizeBox;                                // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               ProgressOuterBorder;                               // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           ProgressText;                                      // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      ProgressWidgetSwitcher;                            // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           QuestProgressAmountText;                           // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           QuestTimeRemainingText;                            // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           RewardAmountText;                                  // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           RewardAmountText_1;                                // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWVerticalBox*                         RewardCoins;                                       // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               SeasonTokenIcon;                                   // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWProgressBar*                         SeasonTokenQuestProgressBar;                       // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           WanderingMarketXP;                                 // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowEarnRewardsText;                               // 0x0720(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_721[0x7];                                      // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ProgressBarWidth;                                  // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Is_Multiplier_Active;                              // 0x0730(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void DisplayEOML();
	void ExecuteUbergraph_WBP_C_SeasonTokensQuestTracker(int32 EntryPoint);
	void HandleWanderingMarketMultiplierActive(bool bIsMultiplierActive);
	void InitializeWidget();
	void PreConstruct(bool IsDesignTime);
	void UnderOverCapLogic();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_C_SeasonTokensQuestTracker_C">();
	}
	static class UWBP_C_SeasonTokensQuestTracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_C_SeasonTokensQuestTracker_C>();
	}
};
static_assert(alignof(UWBP_C_SeasonTokensQuestTracker_C) == 0x000008, "Wrong alignment on UWBP_C_SeasonTokensQuestTracker_C");
static_assert(sizeof(UWBP_C_SeasonTokensQuestTracker_C) == 0x000738, "Wrong size on UWBP_C_SeasonTokensQuestTracker_C");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, UberGraphFrame) == 0x000608, "Member 'UWBP_C_SeasonTokensQuestTracker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, Twox) == 0x000610, "Member 'UWBP_C_SeasonTokensQuestTracker_C::Twox' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, TwoxBanner) == 0x000618, "Member 'UWBP_C_SeasonTokensQuestTracker_C::TwoxBanner' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, CoinPurse) == 0x000620, "Member 'UWBP_C_SeasonTokensQuestTracker_C::CoinPurse' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, CoinWallet) == 0x000628, "Member 'UWBP_C_SeasonTokensQuestTracker_C::CoinWallet' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, CurrencyCapWarningText) == 0x000630, "Member 'UWBP_C_SeasonTokensQuestTracker_C::CurrencyCapWarningText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, CurrencyCapWarningText_1) == 0x000638, "Member 'UWBP_C_SeasonTokensQuestTracker_C::CurrencyCapWarningText_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, CurrencyCapWarningText_2) == 0x000640, "Member 'UWBP_C_SeasonTokensQuestTracker_C::CurrencyCapWarningText_2' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, CurrencyCapWarningText_3) == 0x000648, "Member 'UWBP_C_SeasonTokensQuestTracker_C::CurrencyCapWarningText_3' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, EarnRewardsText) == 0x000650, "Member 'UWBP_C_SeasonTokensQuestTracker_C::EarnRewardsText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, EarnRewardsText_1) == 0x000658, "Member 'UWBP_C_SeasonTokensQuestTracker_C::EarnRewardsText_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage) == 0x000660, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage_45) == 0x000668, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage_45' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage_59) == 0x000670, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage_59' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage_101) == 0x000678, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage_101' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage_103) == 0x000680, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage_103' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage_132) == 0x000688, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage_132' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, HWImage_159) == 0x000690, "Member 'UWBP_C_SeasonTokensQuestTracker_C::HWImage_159' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, LockCCap) == 0x000698, "Member 'UWBP_C_SeasonTokensQuestTracker_C::LockCCap' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, MaxCap) == 0x0006A0, "Member 'UWBP_C_SeasonTokensQuestTracker_C::MaxCap' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, MaxPostProgressText) == 0x0006A8, "Member 'UWBP_C_SeasonTokensQuestTracker_C::MaxPostProgressText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, MaxPreProgressText) == 0x0006B0, "Member 'UWBP_C_SeasonTokensQuestTracker_C::MaxPreProgressText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ProgressBackground) == 0x0006B8, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ProgressBackground' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ProgressBarSizeBox) == 0x0006C0, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ProgressBarSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ProgressOuterBorder) == 0x0006C8, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ProgressOuterBorder' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ProgressText) == 0x0006D0, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ProgressText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ProgressWidgetSwitcher) == 0x0006D8, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ProgressWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, QuestProgressAmountText) == 0x0006E0, "Member 'UWBP_C_SeasonTokensQuestTracker_C::QuestProgressAmountText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, QuestTimeRemainingText) == 0x0006E8, "Member 'UWBP_C_SeasonTokensQuestTracker_C::QuestTimeRemainingText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, RewardAmountText) == 0x0006F0, "Member 'UWBP_C_SeasonTokensQuestTracker_C::RewardAmountText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, RewardAmountText_1) == 0x0006F8, "Member 'UWBP_C_SeasonTokensQuestTracker_C::RewardAmountText_1' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, RewardCoins) == 0x000700, "Member 'UWBP_C_SeasonTokensQuestTracker_C::RewardCoins' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, SeasonTokenIcon) == 0x000708, "Member 'UWBP_C_SeasonTokensQuestTracker_C::SeasonTokenIcon' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, SeasonTokenQuestProgressBar) == 0x000710, "Member 'UWBP_C_SeasonTokensQuestTracker_C::SeasonTokenQuestProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, WanderingMarketXP) == 0x000718, "Member 'UWBP_C_SeasonTokensQuestTracker_C::WanderingMarketXP' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ShowEarnRewardsText) == 0x000720, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ShowEarnRewardsText' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, ProgressBarWidth) == 0x000728, "Member 'UWBP_C_SeasonTokensQuestTracker_C::ProgressBarWidth' has a wrong offset!");
static_assert(offsetof(UWBP_C_SeasonTokensQuestTracker_C, Is_Multiplier_Active) == 0x000730, "Member 'UWBP_C_SeasonTokensQuestTracker_C::Is_Multiplier_Active' has a wrong offset!");

}

