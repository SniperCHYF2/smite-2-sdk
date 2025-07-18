﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_G_Prototype_Training_Menu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "HemingwayUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_G_Prototype_Training_Menu.WBP_G_Prototype_Training_Menu_C
// 0x0148 (0x0740 - 0x05F8)
class UWBP_G_Prototype_Training_Menu_C final : public UHWWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_G_Prototype_Training_TargetDummy_Controls_C* BotsWidget;                              // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_AddLevel;                                   // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_ChangeTeam;                                 // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_DamageImmunity;                             // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_FullHeal;                                   // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_GiveGold;                                   // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_InfiniteMana;                               // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_MinusLevel;                                 // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_ReduceCooldowns;                            // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_ResetCooldowns;                             // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_SetLevel1;                                  // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_SetLevel20;                                 // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_SpawnTargetDummy;                           // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWButton*                              Button_ToggleAspect;                               // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWOverlay*                             Main_Overlay;                                      // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWVerticalBox*                         Main_VBox;                                         // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               StatusFill_DamageImmunity;                         // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               StatusFill_InfiniteMana;                           // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWImage*                               StatusFill_ReduceCooldowns;                        // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatusText_DamageImmunity;                         // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatusText_InfiniteMana;                           // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatusText_ReduceCooldowns;                        // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatusText_ToggleAspect_Off;                       // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           StatusText_ToggleAspect_On;                        // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_AddGold;                                      // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_AddLevel;                                     // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_ChangeTeam;                                   // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_DamageImmunity;                               // 0x06D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_FullHeal;                                     // 0x06E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_InfiniteMana;                                 // 0x06E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_ReducedCooldowns;                             // 0x06F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_ResetCooldowns;                               // 0x06F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_SetLevel1;                                    // 0x0700(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_SetLevel20;                                   // 0x0708(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWTextBlock*                           Text_ToggleAspect;                                 // 0x0710(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHWWidgetSwitcher*                      ToggleAspect_Switcher;                             // 0x0718(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_TrainingMenu_Component_C*           TrainingMenuComp;                                  // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_Interactable_TargetDummy_C*         Target_Dummy;                                      // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXClick;                                          // 0x0730(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SFXHover;                                          // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_AddLevel_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_AddLevel_K2Node_ComponentBoundEvent_32_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ChangeTeam_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ChangeTeam_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ChangeTeam_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_DamageImmunity_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_DamageImmunity_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_DamageImmunity_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_FullHeal_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_FullHeal_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_FullHeal_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_GiveGold_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_GiveGold_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_GiveGold_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_GiveLevel_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_InfiniteMana_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_InfiniteMana_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_InfiniteMana_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_MinusLevel_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ReduceCooldowns_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ReduceCooldowns_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ResetCooldowns_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ResetCooldowns_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ResetCooldowns_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ResetCooldowns_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SetLevel1_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SetLevel1_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SetLevel1_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SetLevel20_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SetLevel20_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SetLevel20_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_SpawnTargetDummy_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ToggleAspect_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ToggleAspect_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__WBP_G_Prototype_Training_Menu_Button_ToggleAspect_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BP_OnActivated();
	bool BP_OnHandleBackAction();
	void ChangeHoverState(class UHWTextBlock* Text, bool IsHovered_0, const struct FGameplayTag& UnHoverOverride);
	void ChangeVisibility(bool Force, ESlateVisibility ForcedVisibility);
	void Construct();
	void ExecuteUbergraph_WBP_G_Prototype_Training_Menu(int32 EntryPoint);
	const TArray<struct FHWUIActionBindingContainer> GetActionBindingContainers();
	class UBP_TrainingMenu_Component_C* GetTrainingMenuComponent();
	const class FText GetWidgetName();
	void Initialize(class UBP_TrainingMenu_Component_C* TrainingMenuComponent);
	void OnHide();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void OnShown();
	void PlayClickSFX();
	void PlayHoverSFX();
	void ResetWidgets();
	void ToggleAspect();
	void Update_Pressed_State(bool IsActive, class UHWTextBlock* Status_Text, class UHWImage* Status_Fill);
	void UpdateInitialAspectState();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_G_Prototype_Training_Menu_C">();
	}
	static class UWBP_G_Prototype_Training_Menu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_G_Prototype_Training_Menu_C>();
	}
};
static_assert(alignof(UWBP_G_Prototype_Training_Menu_C) == 0x000008, "Wrong alignment on UWBP_G_Prototype_Training_Menu_C");
static_assert(sizeof(UWBP_G_Prototype_Training_Menu_C) == 0x000740, "Wrong size on UWBP_G_Prototype_Training_Menu_C");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, UberGraphFrame) == 0x0005F8, "Member 'UWBP_G_Prototype_Training_Menu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, BotsWidget) == 0x000600, "Member 'UWBP_G_Prototype_Training_Menu_C::BotsWidget' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_AddLevel) == 0x000608, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_AddLevel' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_ChangeTeam) == 0x000610, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_ChangeTeam' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_DamageImmunity) == 0x000618, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_DamageImmunity' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_FullHeal) == 0x000620, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_FullHeal' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_GiveGold) == 0x000628, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_GiveGold' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_InfiniteMana) == 0x000630, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_InfiniteMana' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_MinusLevel) == 0x000638, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_MinusLevel' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_ReduceCooldowns) == 0x000640, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_ReduceCooldowns' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_ResetCooldowns) == 0x000648, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_ResetCooldowns' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_SetLevel1) == 0x000650, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_SetLevel1' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_SetLevel20) == 0x000658, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_SetLevel20' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_SpawnTargetDummy) == 0x000660, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_SpawnTargetDummy' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Button_ToggleAspect) == 0x000668, "Member 'UWBP_G_Prototype_Training_Menu_C::Button_ToggleAspect' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Main_Overlay) == 0x000670, "Member 'UWBP_G_Prototype_Training_Menu_C::Main_Overlay' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Main_VBox) == 0x000678, "Member 'UWBP_G_Prototype_Training_Menu_C::Main_VBox' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusFill_DamageImmunity) == 0x000680, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusFill_DamageImmunity' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusFill_InfiniteMana) == 0x000688, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusFill_InfiniteMana' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusFill_ReduceCooldowns) == 0x000690, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusFill_ReduceCooldowns' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusText_DamageImmunity) == 0x000698, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusText_DamageImmunity' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusText_InfiniteMana) == 0x0006A0, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusText_InfiniteMana' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusText_ReduceCooldowns) == 0x0006A8, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusText_ReduceCooldowns' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusText_ToggleAspect_Off) == 0x0006B0, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusText_ToggleAspect_Off' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, StatusText_ToggleAspect_On) == 0x0006B8, "Member 'UWBP_G_Prototype_Training_Menu_C::StatusText_ToggleAspect_On' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_AddGold) == 0x0006C0, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_AddGold' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_AddLevel) == 0x0006C8, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_AddLevel' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_ChangeTeam) == 0x0006D0, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_ChangeTeam' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_DamageImmunity) == 0x0006D8, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_DamageImmunity' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_FullHeal) == 0x0006E0, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_FullHeal' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_InfiniteMana) == 0x0006E8, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_InfiniteMana' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_ReducedCooldowns) == 0x0006F0, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_ReducedCooldowns' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_ResetCooldowns) == 0x0006F8, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_ResetCooldowns' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_SetLevel1) == 0x000700, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_SetLevel1' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_SetLevel20) == 0x000708, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_SetLevel20' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Text_ToggleAspect) == 0x000710, "Member 'UWBP_G_Prototype_Training_Menu_C::Text_ToggleAspect' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, ToggleAspect_Switcher) == 0x000718, "Member 'UWBP_G_Prototype_Training_Menu_C::ToggleAspect_Switcher' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, TrainingMenuComp) == 0x000720, "Member 'UWBP_G_Prototype_Training_Menu_C::TrainingMenuComp' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, Target_Dummy) == 0x000728, "Member 'UWBP_G_Prototype_Training_Menu_C::Target_Dummy' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, SFXClick) == 0x000730, "Member 'UWBP_G_Prototype_Training_Menu_C::SFXClick' has a wrong offset!");
static_assert(offsetof(UWBP_G_Prototype_Training_Menu_C, SFXHover) == 0x000738, "Member 'UWBP_G_Prototype_Training_Menu_C::SFXHover' has a wrong offset!");

}

