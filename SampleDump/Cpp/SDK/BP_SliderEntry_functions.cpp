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
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.Update Slider
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FS_MordhauSlider                            Slider_Struct                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::Update_Slider(const struct FS_MordhauSlider& Slider_Struct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.Update Slider");

	UBP_SliderEntry_C_Update_Slider_Params params;
	params.Slider_Struct = Slider_Struct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.GetValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::GetValue(float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.GetValue");

	UBP_SliderEntry_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.SetValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::SetValue(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.SetValue");

	UBP_SliderEntry_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SliderEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.Construct");

	UBP_SliderEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_SliderEntry_C::BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__sliderEntry_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__BP_MordhauSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::ExecuteUbergraph_BP_SliderEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry");

	UBP_SliderEntry_C_ExecuteUbergraph_BP_SliderEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_SliderEntry_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.OnHovered__DelegateSignature");

	UBP_SliderEntry_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.OnValueChanged__DelegateSignature");

	UBP_SliderEntry_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
