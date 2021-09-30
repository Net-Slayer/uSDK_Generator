// Name: Mordhau, Version: 4_25_hotfix

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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetPercent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_DiscreteSlider_C::GetPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetPercent");

	UBP_DiscreteSlider_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.ContinualizeValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ContinualizedValue                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::ContinualizeValue(int Value, float* ContinualizedValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.ContinualizeValue");

	UBP_DiscreteSlider_C_ContinualizeValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContinualizedValue != nullptr)
		*ContinualizedValue = params.ContinualizedValue;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChangedInternal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::OnValueChangedInternal(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChangedInternal");

	UBP_DiscreteSlider_C_OnValueChangedInternal_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::GetValue(int* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.GetValue");

	UBP_DiscreteSlider_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.SetValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NumOfIndices                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::SetValue(int Value, int NumOfIndices)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.SetValue");

	UBP_DiscreteSlider_C_SetValue_Params params;
	params.Value = Value;
	params.NumOfIndices = NumOfIndices;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.DiscretizeValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DiscretizedValue                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::DiscretizeValue(float Value, int* DiscretizedValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.DiscretizeValue");

	UBP_DiscreteSlider_C_DiscretizeValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DiscretizedValue != nullptr)
		*DiscretizedValue = params.DiscretizedValue;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature");

	UBP_DiscreteSlider_C_BndEvt__Slider_9174_K2Node_ComponentBoundEvent_17317_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_DiscreteSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature");

	UBP_DiscreteSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_8_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.ExecuteUbergraph_BP_DiscreteSlider
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::ExecuteUbergraph_BP_DiscreteSlider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.ExecuteUbergraph_BP_DiscreteSlider");

	UBP_DiscreteSlider_C_ExecuteUbergraph_BP_DiscreteSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnStartedTouching__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_DiscreteSlider_C::OnStartedTouching__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnStartedTouching__DelegateSignature");

	UBP_DiscreteSlider_C_OnStartedTouching__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DiscreteSlider_C::OnValueChanged__DelegateSignature(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DiscreteSlider.BP_DiscreteSlider_C.OnValueChanged__DelegateSignature");

	UBP_DiscreteSlider_C_OnValueChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
