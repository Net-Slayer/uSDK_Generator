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

// WidgetBlueprintGeneratedClass BP_AudioSettings.BP_AudioSettings_C
// 0x007C (FullSize[0x02B4] - InheritedSize[0x0238])
class UBP_AudioSettings_C : public UBP_MenuContentWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            ApplyAnim;                                                 // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     ApplyButton;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_DropdownEntry_C*                         AudioQualityDropdownhidden;                                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           EffectsVolumeSlider;                                       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_HoveredSetting_C*                        HoveredSetting;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                   // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_40;                                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           InstrumentVolumeSlider;                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           MasterVolumeSlider;                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           MusicVolumeSlider;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ResetButton;                                               // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           VideoVolumeSlider;                                         // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_SliderEntry_C*                           VoiceVolumeSlider;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               MusicAudioVolume;                                          // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VBPC[0x3];                                     // 0x02A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MasterAudioVolume;                                         // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EffectAudioVolume;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AudioSettings.BP_AudioSettings_C");
		return ptr;
	}



	void ApplyInstrumentsVolume();
	void UpdateInstrumentVolumeSlider();
	void UpdateVoiceVolumeSlider();
	void ApplyVoiceVolume();
	void IsValueDifferenceValid(float NewValue, float prevValue, float minDiff, bool* IsValid);
	void ApplyVideoVolume();
	void UpdateVideoVolumeSlider();
	void ApplyMusicVolume();
	void ApplyEffectsVolume();
	void ApplyMasterVolume();
	void UpdateMusicVolumeSlider();
	void UpdateEffectsVolumeSlider();
	void UpdateMasterVolumeSlider();
	void ApplyAudioQuality();
	void UpdateAudioQualityDropdown();
	void BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void Update_Widgets();
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature();
	void BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature();
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature();
	void BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature();
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void OnShown();
	void ResetConfirm();
	void ResetCancel();
	void BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
	void BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void ExecuteUbergraph_BP_AudioSettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
