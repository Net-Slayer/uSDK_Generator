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
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.IsChecked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CheckboxEntry_C::IsChecked(bool* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.IsChecked");

	UBP_CheckboxEntry_C_IsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetIsChecked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CheckboxEntry_C::SetIsChecked(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetIsChecked");

	UBP_CheckboxEntry_C_SetIsChecked_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.GetCheckedState
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_ECheckBoxState                           Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CheckboxEntry_C::GetCheckedState(SlateCore_ECheckBoxState* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.GetCheckedState");

	UBP_CheckboxEntry_C_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetCheckedState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_ECheckBoxState                           Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CheckboxEntry_C::SetCheckedState(SlateCore_ECheckBoxState Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.SetCheckedState");

	UBP_CheckboxEntry_C_SetCheckedState_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CheckboxEntry_C::BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_CheckboxEntry_C_BndEvt__EntryCheckbox_K2Node_ComponentBoundEvent_31_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_CheckboxEntry_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UBP_CheckboxEntry_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_CheckboxEntry_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_CheckboxEntry_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_CheckboxEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.Construct");

	UBP_CheckboxEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.ExecuteUbergraph_BP_CheckboxEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CheckboxEntry_C::ExecuteUbergraph_BP_CheckboxEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.ExecuteUbergraph_BP_CheckboxEntry");

	UBP_CheckboxEntry_C_ExecuteUbergraph_BP_CheckboxEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_CheckboxEntry_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnHovered__DelegateSignature");

	UBP_CheckboxEntry_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnCheckStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CheckboxEntry_C::OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CheckboxEntry.BP_CheckboxEntry_C.OnCheckStateChanged__DelegateSignature");

	UBP_CheckboxEntry_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
