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
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Get Discrete Slider Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Discretized_Value                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Get_Discrete_Slider_Value(int* Discretized_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Get Discrete Slider Value");

	UBP_MordhauSlider_C_Get_Discrete_Slider_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Discretized_Value != nullptr)
		*Discretized_Value = params.Discretized_Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Continualize Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Discrete_Value                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ContinualizedValue                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Continualize_Value(int Discrete_Value, float* ContinualizedValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Continualize Value");

	UBP_MordhauSlider_C_Continualize_Value_Params params;
	params.Discrete_Value = Discrete_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContinualizedValue != nullptr)
		*ContinualizedValue = params.ContinualizedValue;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Discretize Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Discretized_Value                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Discretize_Value(float Value, int* Discretized_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Discretize Value");

	UBP_MordhauSlider_C_Discretize_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Discretized_Value != nullptr)
		*Discretized_Value = params.Discretized_Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Shift slider step
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Shift_slider_step(int Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Shift slider step");

	UBP_MordhauSlider_C_Shift_slider_step_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Get_ProgressBar_1_Percent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_MordhauSlider_C::Get_ProgressBar_1_Percent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Get_ProgressBar_1_Percent_1");

	UBP_MordhauSlider_C_Get_ProgressBar_1_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FS_MordhauSlider                            Slider_Struct                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Skip_set_value                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_MordhauSlider_C::Initialize(const struct FS_MordhauSlider& Slider_Struct, bool Skip_set_value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Initialize");

	UBP_MordhauSlider_C_Initialize_Params params;
	params.Slider_Struct = Slider_Struct;
	params.Skip_set_value = Skip_set_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Get Slider Value
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Get_Slider_Value(float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Get Slider Value");

	UBP_MordhauSlider_C_Get_Slider_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Set Value
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Set_Value(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Set Value");

	UBP_MordhauSlider_C_Set_Value_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Get_NumericDisplay_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_MordhauSlider_C::Get_NumericDisplay_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Get_NumericDisplay_Visibility_1");

	UBP_MordhauSlider_C_Get_NumericDisplay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Get Numeric Value
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_MordhauSlider_C::Get_Numeric_Value()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Get Numeric Value");

	UBP_MordhauSlider_C_Get_Numeric_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MordhauSlider_C::BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UBP_MordhauSlider_C_BndEvt__Button_Right_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MordhauSlider_C::BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UBP_MordhauSlider_C_BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature");

	UBP_MordhauSlider_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_MordhauSlider_C::BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature");

	UBP_MordhauSlider_C_BndEvt__NumericDisplay_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UBP_MordhauSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Tick");

	UBP_MordhauSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MordhauSlider_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.Construct");

	UBP_MordhauSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MordhauSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");

	UBP_MordhauSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.ExecuteUbergraph_BP_MordhauSlider
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::ExecuteUbergraph_BP_MordhauSlider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.ExecuteUbergraph_BP_MordhauSlider");

	UBP_MordhauSlider_C_ExecuteUbergraph_BP_MordhauSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.OnMouseCapture__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_MordhauSlider_C::OnMouseCapture__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.OnMouseCapture__DelegateSignature");

	UBP_MordhauSlider_C_OnMouseCapture__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauSlider.BP_MordhauSlider_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MordhauSlider_C::OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauSlider.BP_MordhauSlider_C.OnValueChanged__DelegateSignature");

	UBP_MordhauSlider_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
