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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.SetValue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.GetPercent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_SliderEntry_C::GetPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.GetPercent");

	UBP_SliderEntry_C_GetPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.GetNumericValue
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_SliderEntry_C::GetNumericValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.GetNumericValue");

	UBP_SliderEntry_C_GetNumericValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__TestSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_SliderEntry_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_136_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SliderEntry_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SliderEntry.BP_SliderEntry_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature");

	UBP_SliderEntry_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_150_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
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
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SliderEntry.BP_SliderEntry_C.ExecuteUbergraph_BP_SliderEntry
//		Flags  -> (Final, HasDefaults)
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
//		Offset -> 0x014E30D0
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
//		Offset -> 0x014E30D0
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
