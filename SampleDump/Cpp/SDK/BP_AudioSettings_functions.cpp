// Name: Mordhau, Version: Patch23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyInstrumentsVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyInstrumentsVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyInstrumentsVolume");

	UBP_AudioSettings_C_ApplyInstrumentsVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateInstrumentVolumeSlider
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateInstrumentVolumeSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateInstrumentVolumeSlider");

	UBP_AudioSettings_C_UpdateInstrumentVolumeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateVoiceVolumeSlider
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateVoiceVolumeSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateVoiceVolumeSlider");

	UBP_AudioSettings_C_UpdateVoiceVolumeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyVoiceVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyVoiceVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyVoiceVolume");

	UBP_AudioSettings_C_ApplyVoiceVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.IsValueDifferenceValid
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              prevValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              minDiff                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AudioSettings_C::IsValueDifferenceValid(float NewValue, float prevValue, float minDiff, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.IsValueDifferenceValid");

	UBP_AudioSettings_C_IsValueDifferenceValid_Params params;
	params.NewValue = NewValue;
	params.prevValue = prevValue;
	params.minDiff = minDiff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyVideoVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyVideoVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyVideoVolume");

	UBP_AudioSettings_C_ApplyVideoVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateVideoVolumeSlider
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateVideoVolumeSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateVideoVolumeSlider");

	UBP_AudioSettings_C_UpdateVideoVolumeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyMusicVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyMusicVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyMusicVolume");

	UBP_AudioSettings_C_ApplyMusicVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyEffectsVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyEffectsVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyEffectsVolume");

	UBP_AudioSettings_C_ApplyEffectsVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyMasterVolume
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyMasterVolume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyMasterVolume");

	UBP_AudioSettings_C_ApplyMasterVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateMusicVolumeSlider
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateMusicVolumeSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateMusicVolumeSlider");

	UBP_AudioSettings_C_UpdateMusicVolumeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateEffectsVolumeSlider
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateEffectsVolumeSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateEffectsVolumeSlider");

	UBP_AudioSettings_C_UpdateEffectsVolumeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateMasterVolumeSlider
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateMasterVolumeSlider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateMasterVolumeSlider");

	UBP_AudioSettings_C_UpdateMasterVolumeSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ApplyAudioQuality
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::ApplyAudioQuality()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ApplyAudioQuality");

	UBP_AudioSettings_C_ApplyAudioQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.UpdateAudioQualityDropdown
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_AudioSettings_C::UpdateAudioQualityDropdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.UpdateAudioQualityDropdown");

	UBP_AudioSettings_C_UpdateAudioQualityDropdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.Update Widgets
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_AudioSettings_C::Update_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.Update Widgets");

	UBP_AudioSettings_C_Update_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_161_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_166_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_175_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_28_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AudioSettings_C::BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AudioSettings_C::BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AudioSettings_C::BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__EffectsVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.OnShown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_AudioSettings_C::OnShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.OnShown");

	UBP_AudioSettings_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ResetConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_AudioSettings_C::ResetConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ResetConfirm");

	UBP_AudioSettings_C_ResetConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ResetCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_AudioSettings_C::ResetCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ResetCancel");

	UBP_AudioSettings_C_ResetCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AudioSettings_C::BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__VoiceVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_AudioSettings_C::BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AudioSettings_C::BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UBP_AudioSettings_C_BndEvt__InstrumentVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_AudioSettings.BP_AudioSettings_C.ExecuteUbergraph_BP_AudioSettings
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_AudioSettings_C::ExecuteUbergraph_BP_AudioSettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioSettings.BP_AudioSettings_C.ExecuteUbergraph_BP_AudioSettings");

	UBP_AudioSettings_C_ExecuteUbergraph_BP_AudioSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
