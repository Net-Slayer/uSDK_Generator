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
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.SkinColorHovered
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewSkinColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::SkinColorHovered(int NewSkinColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.SkinColorHovered");

	UBP_BodyCustomization_C_SkinColorHovered_Params params;
	params.NewSkinColor = NewSkinColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               OnlyUpdateMaterials                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BodyCustomization_C::UpdateDoll(bool OnlyUpdateMaterials)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateDoll");

	UBP_BodyCustomization_C_UpdateDoll_Params params;
	params.OnlyUpdateMaterials = OnlyUpdateMaterials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_BodyCustomization_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.UpdateWidget");

	UBP_BodyCustomization_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.GetValues
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Voice                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Fat                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Skinny                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Strong                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SkinColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                VoiceCount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FatCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SkinnyCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StrongCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsFemale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BodyCustomization_C::GetValues(int* Voice, int* Fat, int* Skinny, int* Strong, int* SkinColor, int* VoiceCount, int* FatCount, int* SkinnyCount, int* StrongCount, bool* IsFemale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.GetValues");

	UBP_BodyCustomization_C_GetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Voice != nullptr)
		*Voice = params.Voice;
	if (Fat != nullptr)
		*Fat = params.Fat;
	if (Skinny != nullptr)
		*Skinny = params.Skinny;
	if (Strong != nullptr)
		*Strong = params.Strong;
	if (SkinColor != nullptr)
		*SkinColor = params.SkinColor;
	if (VoiceCount != nullptr)
		*VoiceCount = params.VoiceCount;
	if (FatCount != nullptr)
		*FatCount = params.FatCount;
	if (SkinnyCount != nullptr)
		*SkinnyCount = params.SkinnyCount;
	if (StrongCount != nullptr)
		*StrongCount = params.StrongCount;
	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.RegisterPreviewEvents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_BodyCustomization_C::RegisterPreviewEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.RegisterPreviewEvents");

	UBP_BodyCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.OnDrag
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::OnDrag(float DeltaDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.OnDrag");

	UBP_BodyCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.OnScroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ScrollDelta                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::OnScroll(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.OnScroll");

	UBP_BodyCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BodyCustomization_C::BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__MaleButton_K2Node_ComponentBoundEvent_238_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BodyCustomization_C::BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__FemaleButton_K2Node_ComponentBoundEvent_251_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_108_OnColorClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_115_OnColorHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                LstSelectedColorIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature(int LstSelectedColorIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__SkinColorPicker_K2Node_ComponentBoundEvent_127_OnColorPickerClosed__DelegateSignature_Params params;
	params.LstSelectedColorIndex = LstSelectedColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_BodyCustomization_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.SetActive");

	UBP_BodyCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.OnProfileChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_BodyCustomization_C::OnProfileChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.OnProfileChanged");

	UBP_BodyCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__BP_MordhauSlider_Fat_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::BndEvt__BP_MordhauSlider_Fat_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__BP_MordhauSlider_Fat_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__BP_MordhauSlider_Fat_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__BP_MordhauSlider_Skinny_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::BndEvt__BP_MordhauSlider_Skinny_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__BP_MordhauSlider_Skinny_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__BP_MordhauSlider_Skinny_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__BP_MordhauSlider_Strong_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::BndEvt__BP_MordhauSlider_Strong_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.BndEvt__BP_MordhauSlider_Strong_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UBP_BodyCustomization_C_BndEvt__BP_MordhauSlider_Strong_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BodyCustomization.BP_BodyCustomization_C.ExecuteUbergraph_BP_BodyCustomization
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BodyCustomization_C::ExecuteUbergraph_BP_BodyCustomization(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BodyCustomization.BP_BodyCustomization_C.ExecuteUbergraph_BP_BodyCustomization");

	UBP_BodyCustomization_C_ExecuteUbergraph_BP_BodyCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
