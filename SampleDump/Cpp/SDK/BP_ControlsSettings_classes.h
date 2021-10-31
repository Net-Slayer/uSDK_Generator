﻿#pragma once

// Name: Mordhau, Version: Patch23


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

// WidgetBlueprintGeneratedClass BP_ControlsSettings.BP_ControlsSettings_C
// 0x0100 (FullSize[0x0338] - InheritedSize[0x0238])
class UBP_ControlsSettings_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ApplyAnim;                                                 // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         AngleAttackAfterPressCheckbox;                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         AngleAttacksWithMovementCheckbox;                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ApplyButton;                                               // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HoveredSetting_C*                        BP_HoveredSetting;                                         // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         ControlSchemeDropdown;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         FlipAttackSideCheckbox;                                    // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadLeftXDeadzoneSlider;                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadLeftXSensitivitySlider;                             // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadLeftYDeadzoneSlider;                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadLeftYSensitivitySlider;                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadRangedSensitivitySlider;                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadRightXDeadzoneSlider;                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadRightXSensitivitySlider;                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadRightYDeadzoneSlider;                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GamepadRightYSensitivitySlider;                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InverseAttackDirectionXCheckbox;                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InverseAttackDirectionYCheckbox;                           // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InvertGamepadLeftXCheckbox;                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InvertGamepadLeftYCheckbox;                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InvertGamepadRightXCheckbox;                               // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InvertGamepadRightYCheckbox;                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InvertMouseXCheckbox;                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         InvertMouseYCheckbox;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           MouseXSensitivitySlider;                                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           MouseYSensitivitySlider;                                   // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetButton;                                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         ToggleSprintCheckbox;                                      // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                CurrentControlScheme;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4K0C[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_ChoiceDialog_C*                          ControlSchemeWarningDialog;                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ControlsSettings.BP_ControlsSettings_C");
		return ptr;
	}



	UMG_ESlateVisibility CollapseVisibilityIfConsole();
	void ApplyGamepadRangedSensitivity();
	void UpdateGamepadRangedSensititySlider();
	void UpdateControlSchemeDropdown();
	void ApplyAngleAttacksWithMovement();
	void UpdateAngleAttacksWithMovementCheckbox();
	void UpdateAngleAttackAfterPressCheckbox();
	void ApplyAngleAttackAfterPress();
	void ApplyInverseAttackDirection();
	void UpdateInverseAttackDirectionCheckbox();
	void ApplyToggleSprint();
	void GetSliderValue(class UBP_SliderEntry_C* Slider, const struct FVector2D& Limits, float* Value);
	void UpdateToggleSprintCheckbox();
	void UpdateSlider(class UBP_SliderEntry_C* Slider, float Value, const struct FVector2D& Limits);
	void ApplyGamepadRightYDeadzone();
	void ApplyGamepadRightXDeadzone();
	void ApplyGamepadLeftYDeadzone();
	void ApplyGamepadLeftXDeadzone();
	void ApplyInvertGamepadRightY();
	void ApplyInvertGamepadRightX();
	void UpdateInvertGamepadRightYCheckbox();
	void UpdateInvertGamepadRightXCheckbox();
	void UpdateGamepadRightYDeadzoneSlider();
	void UpdateGamepadRightXDeadzoneSlider();
	void UpdateGamepadLeftYDeadzoneSlider();
	void UpdateGamepadLeftXDeadzoneSlider();
	void ApplyGamepadRightYSensitivity();
	void ApplyGamepadRightXSensitivity();
	void ApplyGamepadLeftYSensitivity();
	void ApplyGamepadLeftXSensitivity();
	void ApplyMouseYSensitivity();
	void ApplyMouseXSensitivity();
	void UpdateGamepadRightYSensitivitySlider();
	void UpdateGamepadRightXSensitivitySlider();
	void UpdateGamepadLeftYSensitivitySlider();
	void UpdateGamepadLeftXSensitivitySlider();
	void UpdateMouseYSensitivitySlider();
	void UpdateMouseXSensitivitySlider();
	void ApplyFlipAttackSide();
	void UpdateFlipAttackSideCheckbox();
	void ApplyInvertGamepadLeftY();
	void ApplyInvertGamepadLeftX();
	void UpdateInvertGamepadLeftYCheckbox();
	void UpdateInvertGamepadLeftXCheckbox();
	void ApplyInvertMouseY();
	void UpdateInvertMouseYCheckbox();
	void ApplyInvertMouseX();
	void UpdateInvertMouseXCheckbox();
	void OnShown();
	void UpdateWidgets();
	void BndEvt__ToggleSprintCheckbox_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__InverseAttackDirectionCheckbox_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature();
	void BndEvt__AngleAttackAfterPressCheckbox_K2Node_ComponentBoundEvent_23_OnHovered__DelegateSignature();
	void BndEvt__FlipAttackSideCheckbox_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature();
	void BndEvt__InvertMouseXCheckbox_K2Node_ComponentBoundEvent_44_OnHovered__DelegateSignature();
	void BndEvt__MouseXSensitivitySlider_K2Node_ComponentBoundEvent_56_OnHovered__DelegateSignature();
	void BndEvt__InvertMouseYCheckbox_K2Node_ComponentBoundEvent_69_OnHovered__DelegateSignature();
	void BndEvt__MouseYSensitivitySlider_K2Node_ComponentBoundEvent_83_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadLeftXCheckbox_K2Node_ComponentBoundEvent_98_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftXSensitivitySlider_K2Node_ComponentBoundEvent_114_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftXDeadzoneSlider_K2Node_ComponentBoundEvent_131_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadLeftYCheckbox_K2Node_ComponentBoundEvent_149_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftYSensitivitySlider_K2Node_ComponentBoundEvent_168_OnHovered__DelegateSignature();
	void BndEvt__GamepadLeftYDeadzoneSlider_K2Node_ComponentBoundEvent_188_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadRightXCheckbox_K2Node_ComponentBoundEvent_209_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightXSensitivitySlider_K2Node_ComponentBoundEvent_231_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightXDeadzoneSlider_K2Node_ComponentBoundEvent_254_OnHovered__DelegateSignature();
	void BndEvt__InvertGamepadRightYCheckbox_K2Node_ComponentBoundEvent_278_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightYSensitivitySlider_K2Node_ComponentBoundEvent_303_OnHovered__DelegateSignature();
	void BndEvt__GamepadRightYDeadzoneSlider_K2Node_ComponentBoundEvent_329_OnHovered__DelegateSignature();
	void BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__InverseAttackDirectionYCheckbox_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void BndEvt__AngleAttacksWithMovementCheckbox_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
	void BndEvt__ControlSchemeDropdown_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void ContinueButtonClicked();
	void CancelButtonClicked();
	void BndEvt__GameoadRangedSensitivitySlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void ResetConfirm();
	void ResetCancel();
	void ExecuteUbergraph_BP_ControlsSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
