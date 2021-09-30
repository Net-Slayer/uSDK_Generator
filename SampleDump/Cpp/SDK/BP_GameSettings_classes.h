﻿#pragma once

// Name: Mordhau, Version: 4_25_hotfix


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C
// 0x0158 (FullSize[0x0390] - InheritedSize[0x0238])
class UBP_GameSettings_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ApplyAnim;                                                 // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         AmmoCheckbox;                                              // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         AnnouncementsCheckbox;                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ApplyButton;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ChatBoxCheckbox;                                           // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         CombatHintsEntry;                                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         CrosshairDropdown;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         DrawTracersCheckbox;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         EmotesMenuCheckbox;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         EquipmentCheckbox;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ForceFeedbackCheckbox;                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         FriendlyMarkersDropdown;                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         GoreDropdown;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           HeadbobSlider;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         HideHudCheckboxHIDDEN;                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         HideWatermarkCheckbox;                                     // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         HitMarkerCheckbox;                                         // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HoveredSetting_C*                        HoveredSetting;                                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_40;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         KilledByCheckbox;                                          // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         KillFeedCheckbox;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         LanguageDropdown;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           MouseSmoothingSlider;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         NoTeamColorsOnGear;                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ObjectivesCheckbox;                                        // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_2;                                                 // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         QuickSpawnCheckbox;                                        // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           RagdollLimitSlider;                                        // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           RagdollStayTimeSlider;                                     // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetButton;                                               // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ScoreFeedCheckbox;                                         // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ShowObservedDelayCheckbox;                                 // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ShowServerOnScoreboard;                                    // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         SpawnInfoCheckbox;                                         // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         StatusBarCheckbox;                                         // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         TargetInfoCheckbox;                                        // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ThirdPersonDeathCameraCheckbox;                            // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         TipsCheckbox;                                              // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           TracersStayTimeSlider;                                     // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GameSettings.BP_GameSettings_C");
		return ptr;
	}



	void ApplyForceFeedback();
	void UpdateForceFeedbackCheckbox();
	UMG_ESlateVisibility CollapseVisibilityIfConsole();
	void ApplyCombatHints();
	void UpdateCombatHintsCheckbox();
	void ApplyObjectiveHint();
	void UpdateObjectiveHintCheckbox();
	void ApplyCrosshairType();
	void UpdateCrosshairDropdown();
	void ApplyShowServerInScoreboard();
	void UpdateShowServerInScoreboardCheckbox();
	void UpdateThirdPersonDeathCameraCheckbox();
	void ApplyThirdPersonDeathCamera();
	void ApplyKilledBy();
	void UpdateKilledByCheckbox();
	void ApplyNoTeamColorsOnGear();
	void UpdateNoTeamColorsOnGearCheckbox();
	void ApplyFriendlyMarkers();
	void ApplyKillFeed();
	void ApplyScoreFeed();
	void ApplyTips();
	void ApplyAnnouncements();
	void ApplyAmmo();
	void ApplyEquipment();
	void ApplyEmotesMenu();
	void ApplyChatBox();
	void ApplySpawnInfo();
	void ApplyTargetInfo();
	void ApplyStatusBar();
	void ApplyHitmarker();
	void UpdateFriendlyMarkersDropdown();
	void UpdateKillFeedCheckbox();
	void UpdateScoreFeedCheckbox();
	void UpdateTipsCheckbox();
	void UpdateAnnouncementsCheckbox();
	void UpdateAmmoCheckbox();
	void UpdateEquipmentCheckbox();
	void UpdateEmotesMenuCheckbox();
	void UpdateChatBoxCheckbox();
	void UpdateSpawnInfoCheckbox();
	void UpdateTargetInfoCheckbox();
	void UpdateStatusBarCheckbox();
	void UpdateHitmarkerCheckbox();
	void ApplyHeadbob();
	void UpdateHeadbobSlider();
	void ApplyLanguage();
	void UpdateLanguageDropdown();
	void ApplyHideWatermark();
	void UpdateHideWatermarkCheckbox();
	void ApplyShowObservedDelay();
	void UpdateShowObservedDelayCheckbox();
	void ApplyMouseSmoothing();
	void UpdateMouseSmoothingSlider();
	void ApplyTracersStayTime();
	void UpdateTracersStayTimeSlider();
	void ApplyDrawTracers();
	void UpdateDrawTracersCheckbox();
	UMG_ESlateVisibility GetDevSettingsVisibility();
	void ApplyRagdollStayTime();
	void ApplyRagdollLimit();
	void ApplyGore();
	void ApplyHideHud();
	void ApplyQuickSpawn();
	void UpdateQuickSpawnCheckbox();
	void UpdateRagdollStayTimeSlider();
	void UpdateRagdollLimitSlider();
	void UpdateGoreDropdown();
	void UpdateHideHudCheckbox();
	void Update_Widgets();
	void OnShown();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HideHudCheckbox_K2Node_ComponentBoundEvent_26_OnHovered__DelegateSignature();
	void BndEvt__GoreDropdown_K2Node_ComponentBoundEvent_30_OnHovered__DelegateSignature();
	void BndEvt__RagdollLimitSlider_K2Node_ComponentBoundEvent_37_OnHovered__DelegateSignature();
	void BndEvt__RagdollStayTimeSlider_K2Node_ComponentBoundEvent_27_OnHovered__DelegateSignature();
	void BndEvt__QuickSpawnCheckbox_K2Node_ComponentBoundEvent_31_OnHovered__DelegateSignature();
	void BndEvt__MouseSmoothingSlider_K2Node_ComponentBoundEvent_63_OnHovered__DelegateSignature();
	void BndEvt__DrawTracersCheckbox_K2Node_ComponentBoundEvent_67_OnHovered__DelegateSignature();
	void BndEvt__TracersStayTimeSlider_K2Node_ComponentBoundEvent_79_OnHovered__DelegateSignature();
	void BndEvt__ShowObservedDelayCheckbox_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature();
	void BndEvt__HideWatermarkCheckbox_K2Node_ComponentBoundEvent_79_OnHovered__DelegateSignature();
	void BndEvt__LanguageDropdown_K2Node_ComponentBoundEvent_115_OnHovered__DelegateSignature();
	void BndEvt__ShowCrosshairCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__HeadbobSlider_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature();
	void BndEvt__HitMarkerCheckbox_K2Node_ComponentBoundEvent_137_OnHovered__DelegateSignature();
	void BndEvt__StatusBarCheckbox_K2Node_ComponentBoundEvent_213_OnHovered__DelegateSignature();
	void BndEvt__TargetInfoCheckbox_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature();
	void BndEvt__SpawnInfoCheckbox_K2Node_ComponentBoundEvent_414_OnHovered__DelegateSignature();
	void BndEvt__ChatBoxCheckbox_K2Node_ComponentBoundEvent_500_OnHovered__DelegateSignature();
	void BndEvt__EmotesMenuCheckbox_K2Node_ComponentBoundEvent_590_OnHovered__DelegateSignature();
	void BndEvt__EquipmentCheckbox_K2Node_ComponentBoundEvent_684_OnHovered__DelegateSignature();
	void BndEvt__AmmoCheckbox_K2Node_ComponentBoundEvent_782_OnHovered__DelegateSignature();
	void BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AnnouncementsCheckbox_K2Node_ComponentBoundEvent_1001_OnHovered__DelegateSignature();
	void BndEvt__TipsCheckbox_K2Node_ComponentBoundEvent_1133_OnHovered__DelegateSignature();
	void BndEvt__ScoreFeedCheckbox_K2Node_ComponentBoundEvent_1243_OnHovered__DelegateSignature();
	void BndEvt__KillFeedCheckbox_K2Node_ComponentBoundEvent_1357_OnHovered__DelegateSignature();
	void BndEvt__NoTeamColorsOnGear_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__KilledByCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__ThirdPersonDeathCameraCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__ShowServerOnScoreboard_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__ShowObjectivesCheckbox_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature();
	void BndEvt__CombatHintsEntry_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature();
	void ResetConfirm();
	void ResetCancel();
	void BndEvt__ForceFeedbackCheckbox_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void ExecuteUbergraph_BP_GameSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
