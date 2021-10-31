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
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_Lock_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ColorPickerElement_C::Get_Lock_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_Lock_Visibility_1");

	UBP_ColorPickerElement_C_Get_Lock_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_ImageButton_ToolTipText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ColorPickerElement_C::Get_ImageButton_ToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.Get_ImageButton_ToolTipText_1");

	UBP_ColorPickerElement_C_Get_ImageButton_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.IsSelectedElement
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ColorPickerElement_C::IsSelectedElement(bool* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.IsSelectedElement");

	UBP_ColorPickerElement_C_IsSelectedElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerElement_C::SetData(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetData");

	UBP_ColorPickerElement_C_SetData_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetColor
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerElement_C::SetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.SetColor");

	UBP_ColorPickerElement_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ColorPickerElement_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.Construct");

	UBP_ColorPickerElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ColorPickerElement_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseEnter");

	UBP_ColorPickerElement_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ColorPickerElement_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.OnMouseLeave");

	UBP_ColorPickerElement_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ColorPickerElement_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature");

	UBP_ColorPickerElement_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_9595_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ColorPickerElement_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature");

	UBP_ColorPickerElement_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_2238_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ColorPickerElement.BP_ColorPickerElement_C.ExecuteUbergraph_BP_ColorPickerElement
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ColorPickerElement_C::ExecuteUbergraph_BP_ColorPickerElement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ColorPickerElement.BP_ColorPickerElement_C.ExecuteUbergraph_BP_ColorPickerElement");

	UBP_ColorPickerElement_C_ExecuteUbergraph_BP_ColorPickerElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
