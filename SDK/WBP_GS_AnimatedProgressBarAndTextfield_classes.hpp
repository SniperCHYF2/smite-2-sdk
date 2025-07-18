﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GS_AnimatedProgressBarAndTextfield

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GS_AnimatedProgressBarAndTextfield.WBP_GS_AnimatedProgressBarAndTextfield_C
// 0x0020 (0x08E0 - 0x08C0)
class UWBP_GS_AnimatedProgressBarAndTextfield_C final : public UHWAnimatedProgressBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHWTextBlock*                           GainedLabel;                                       // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWSizeBox*                             ProgressBarSizeBox;                                // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_GS_AnimatedProgressBarAndTextfield(int32 EntryPoint);
	void InitializeWidget();
	void OnProgressBarPercentChanged(float InPercent);
	void PreConstruct(bool IsDesignTime);
	void SetGainedProgressDisplay(int32 GainedProgress, bool bShow);
	void SetProgressDisplay(const class FText& DisplayText, bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GS_AnimatedProgressBarAndTextfield_C">();
	}
	static class UWBP_GS_AnimatedProgressBarAndTextfield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GS_AnimatedProgressBarAndTextfield_C>();
	}
};
static_assert(alignof(UWBP_GS_AnimatedProgressBarAndTextfield_C) == 0x000010, "Wrong alignment on UWBP_GS_AnimatedProgressBarAndTextfield_C");
static_assert(sizeof(UWBP_GS_AnimatedProgressBarAndTextfield_C) == 0x0008E0, "Wrong size on UWBP_GS_AnimatedProgressBarAndTextfield_C");
static_assert(offsetof(UWBP_GS_AnimatedProgressBarAndTextfield_C, UberGraphFrame) == 0x0008C0, "Member 'UWBP_GS_AnimatedProgressBarAndTextfield_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GS_AnimatedProgressBarAndTextfield_C, GainedLabel) == 0x0008C8, "Member 'UWBP_GS_AnimatedProgressBarAndTextfield_C::GainedLabel' has a wrong offset!");
static_assert(offsetof(UWBP_GS_AnimatedProgressBarAndTextfield_C, ProgressBarSizeBox) == 0x0008D0, "Member 'UWBP_GS_AnimatedProgressBarAndTextfield_C::ProgressBarSizeBox' has a wrong offset!");

}

