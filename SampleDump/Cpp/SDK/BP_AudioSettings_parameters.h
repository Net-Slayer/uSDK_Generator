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
// Parameters
//---------------------------------------------------------------------------

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyInstrumentsVolume
struct UBP_AudioSettings_C_ApplyInstrumentsVolume_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateInstrumentVolumeSlider
struct UBP_AudioSettings_C_UpdateInstrumentVolumeSlider_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateVoiceVolumeSlider
struct UBP_AudioSettings_C_UpdateVoiceVolumeSlider_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyVoiceVolume
struct UBP_AudioSettings_C_ApplyVoiceVolume_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.IsValueDifferenceValid
struct UBP_AudioSettings_C_IsValueDifferenceValid_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              prevValue;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              minDiff;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsValid;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyVideoVolume
struct UBP_AudioSettings_C_ApplyVideoVolume_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateVideoVolumeSlider
struct UBP_AudioSettings_C_UpdateVideoVolumeSlider_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyMusicVolume
struct UBP_AudioSettings_C_ApplyMusicVolume_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyEffectsVolume
struct UBP_AudioSettings_C_ApplyEffectsVolume_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyMasterVolume
struct UBP_AudioSettings_C_ApplyMasterVolume_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateMusicVolumeSlider
struct UBP_AudioSettings_C_UpdateMusicVolumeSlider_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateEffectsVolumeSlider
struct UBP_AudioSettings_C_UpdateEffectsVolumeSlider_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateMasterVolumeSlider
struct UBP_AudioSettings_C_UpdateMasterVolumeSlider_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ApplyAudioQuality
struct UBP_AudioSettings_C_ApplyAudioQuality_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.UpdateAudioQualityDropdown
struct UBP_AudioSettings_C_UpdateAudioQualityDropdown_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.Update Widgets
struct UBP_AudioSettings_C_Update_Widgets_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioSettings.BP_AudioSettings_C.OnShown
struct UBP_AudioSettings_C_OnShown_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ResetConfirm
struct UBP_AudioSettings_C_ResetConfirm_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.ResetCancel
struct UBP_AudioSettings_C_ResetCancel_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
{
};

// Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
struct UBP_AudioSettings_C_BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioSettings.BP_AudioSettings_C.ExecuteUbergraph_BP_AudioSettings
struct UBP_AudioSettings_C_ExecuteUbergraph_BP_AudioSettings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
