#pragma once

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

// WidgetBlueprintGeneratedClass BP_VideoSettings.BP_VideoSettings_C
// 0x0118 (FullSize[0x0350] - InheritedSize[0x0238])
class UBP_VideoSettings_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ApplyAnim;                                                 // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         AAMethodDropdown;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         AAQualityDropdownhidden;                                   // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         AmbientOcclusionCheckbox;                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ApplyButton;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           BloomSlider;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           CameraDistanceSlider;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         CharacterClothDropdown;                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         CharacterQualityDropdown;                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         EffectsQualityDropdown;                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         FoliageDensityDropdown;                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           FovSlider;                                                 // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           FrameRateSlider;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           GammaSlider;                                               // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HoveredSetting_C*                        HoveredSetting;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_40;                                                  // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         IndirectShadowsCheckbox;                                   // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         LensFlaresCheckbox;                                        // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           MotionBlurSlider;                                          // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_2;                                                 // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         PPQualityDropdown;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         RagdollQualityDropdown;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         ReflexDropdown;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetButton;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         ResolutionDropdown;                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           ResolutionScaleSlider;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         ShadowQualityDropdown;                                     // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         SSRDropdown;                                               // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         TextureQualityDropdown;                                    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         ViewDistanceDropdown;                                      // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CheckboxEntry_C*                         VsyncCheckbox;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         WindowModeDropdown;                                        // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_VideoSettings.BP_VideoSettings_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
	void ApplyReflex();
	void UpdateReflexDropdown();
	UMG_ESlateVisibility Get_ReflexDropdown_Visibility_1();
	void UpdateCharacterClothDropdown();
	void ApplyCharacterCloth();
	void ApplyLensFlares();
	void UpdateLensFlaresCheckbox();
	void ApplyAmbientOcclusion();
	void UpdateAmbientOcclusionCheckbox();
	void ApplyMotionBlur();
	void UpdateMotionBlurSlider();
	void ApplyBloom();
	void UpdateBloomSlider();
	void ApplySSR();
	void UpdateSSRDropdown();
	void ApplyGamma();
	void UpdateGammaSlider();
	void ApplyFoliageDensity();
	void UpdateFoliageDensityDropdown();
	void ApplyPPQuality();
	void UpdatePPQualityDropdown();
	void ApplyViewDistance();
	void UpdateViewDistanceDropdown();
	void ApplyEffectsQuality();
	void UpdateEffectsQualityDropdown();
	void ApplyShadowQuality();
	void UpdateShadowQualityDropdown();
	void ApplyTextureQuality();
	void UpdateTextureQualityDropdown();
	void ApplyAAQuality();
	void UpdateAAQualityDropdown();
	void ApplyAAMethod();
	void UpdateAAMethodDropdown();
	void ApplyResolutionScale();
	void UpdateResolutionScaleSlider();
	void ApplyWindowMode();
	void UpdateWindowModeDropdown();
	void ApplyVsync();
	void UpdateVsyncCheckbox();
	void ApplyIndirectShadows();
	void ApplyCameraDistance();
	void ApplyRagdollQuality();
	void ApplyCharacterQuality();
	void ApplyFramerate();
	void ApplyFov();
	void ApplyResolution();
	void UpdateResolutionDropdown();
	void UpdateIndirectShadowsCheckbox();
	void UpdateCameraDistanceSlider();
	void UpdateRagdollQualityDropdown();
	void UpdateCharacterQualityDropdown();
	void UpdateFramerateSlider();
	void UpdateFovSlider();
	void Update_Widgets();
	void UpdateGammaText();
	void BndEvt__GammaSlider_K2Node_ComponentBoundEvent_19_OnValueChanged__DelegateSignature(float Value);
	void OnShown();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResolutionDropdown_K2Node_ComponentBoundEvent_103_OnHovered__DelegateSignature();
	void BndEvt__ResolutionScaleSlider_K2Node_ComponentBoundEvent_145_OnHovered__DelegateSignature();
	void BndEvt__WindowModeDropdown_K2Node_ComponentBoundEvent_20_OnHovered__DelegateSignature();
	void BndEvt__FrameRateSlider_K2Node_ComponentBoundEvent_33_OnHovered__DelegateSignature();
	void BndEvt__VsyncCheckbox_K2Node_ComponentBoundEvent_52_OnHovered__DelegateSignature();
	void BndEvt__FovSlider_K2Node_ComponentBoundEvent_104_OnHovered__DelegateSignature();
	void BndEvt__CameraDistanceSlider_K2Node_ComponentBoundEvent_108_OnHovered__DelegateSignature();
	void BndEvt__GammaSlider_K2Node_ComponentBoundEvent_127_OnHovered__DelegateSignature();
	void BndEvt__AAMethodDropdown_K2Node_ComponentBoundEvent_142_OnHovered__DelegateSignature();
	void BndEvt__TextureQualityDropdown_K2Node_ComponentBoundEvent_217_OnHovered__DelegateSignature();
	void BndEvt__EffectsQualityDropdown_K2Node_ComponentBoundEvent_240_OnHovered__DelegateSignature();
	void BndEvt__ShadowQualityDropdown_K2Node_ComponentBoundEvent_315_OnHovered__DelegateSignature();
	void BndEvt__IndirectShadowsCheckbox_K2Node_ComponentBoundEvent_319_OnHovered__DelegateSignature();
	void BndEvt__ViewDistanceDropdown_K2Node_ComponentBoundEvent_342_OnHovered__DelegateSignature();
	void BndEvt__PPQualityDropdown_K2Node_ComponentBoundEvent_366_OnHovered__DelegateSignature();
	void BndEvt__FoliageDensityDropdown_K2Node_ComponentBoundEvent_391_OnHovered__DelegateSignature();
	void BndEvt__CharacterQualityDropdown_K2Node_ComponentBoundEvent_417_OnHovered__DelegateSignature();
	void BndEvt__RagdollQualityDropdown_K2Node_ComponentBoundEvent_444_OnHovered__DelegateSignature();
	void BndEvt__SSRDropdown_K2Node_ComponentBoundEvent_472_OnHovered__DelegateSignature();
	void BndEvt__BloomSlider_K2Node_ComponentBoundEvent_500_OnHovered__DelegateSignature();
	void BndEvt__MotionBlurSlider_K2Node_ComponentBoundEvent_527_OnHovered__DelegateSignature();
	void BndEvt__AmbientOcclusionCheckbox_K2Node_ComponentBoundEvent_556_OnHovered__DelegateSignature();
	void BndEvt__LensFlareCheckbox_K2Node_ComponentBoundEvent_97_OnHovered__DelegateSignature();
	void BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CharacterClothDropdown_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
	void BndEvt__ReflexDropdown_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
	void ResetConfirm();
	void ResetCancel();
	void ExecuteUbergraph_BP_VideoSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
