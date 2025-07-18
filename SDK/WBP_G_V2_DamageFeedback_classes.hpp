﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_V2_DamageFeedback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_structs.hpp"
#include "HemingwayUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_V2_DamageFeedback.WBP_G_V2_DamageFeedback_C
// 0x0050 (0x07A0 - 0x0750)
class UWBP_G_V2_DamageFeedback_C final : public UHWDamageFeedbackWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BottomDamage;                                      // 0x0758(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TopDamage;                                         // 0x0760(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RightDamage;                                       // 0x0768(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LeftDamage;                                        // 0x0770(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHWImage*                               BottomImage;                                       // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             HealthFrameContainer;                              // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               LeftImage;                                         // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               RightImage;                                        // 0x0790(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               TopImage;                                          // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void DisplayDamageFeedback(EHWDamageFeedbackSide side, float Opacity);
	void ExecuteUbergraph_WBP_G_V2_DamageFeedback(int32 EntryPoint);
	void InitializeWidget();
	void UpdateHealthFeedback(float Opacity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_V2_DamageFeedback_C">();
	}
	static class UWBP_G_V2_DamageFeedback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_V2_DamageFeedback_C>();
	}
};
static_assert(alignof(UWBP_G_V2_DamageFeedback_C) == 0x000008, "Wrong alignment on UWBP_G_V2_DamageFeedback_C");
static_assert(sizeof(UWBP_G_V2_DamageFeedback_C) == 0x0007A0, "Wrong size on UWBP_G_V2_DamageFeedback_C");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, UberGraphFrame) == 0x000750, "Member 'UWBP_G_V2_DamageFeedback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, BottomDamage) == 0x000758, "Member 'UWBP_G_V2_DamageFeedback_C::BottomDamage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, TopDamage) == 0x000760, "Member 'UWBP_G_V2_DamageFeedback_C::TopDamage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, RightDamage) == 0x000768, "Member 'UWBP_G_V2_DamageFeedback_C::RightDamage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, LeftDamage) == 0x000770, "Member 'UWBP_G_V2_DamageFeedback_C::LeftDamage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, BottomImage) == 0x000778, "Member 'UWBP_G_V2_DamageFeedback_C::BottomImage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, HealthFrameContainer) == 0x000780, "Member 'UWBP_G_V2_DamageFeedback_C::HealthFrameContainer' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, LeftImage) == 0x000788, "Member 'UWBP_G_V2_DamageFeedback_C::LeftImage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, RightImage) == 0x000790, "Member 'UWBP_G_V2_DamageFeedback_C::RightImage' has a wrong offset!");
static_assert(offsetof(UWBP_G_V2_DamageFeedback_C, TopImage) == 0x000798, "Member 'UWBP_G_V2_DamageFeedback_C::TopImage' has a wrong offset!");

}

