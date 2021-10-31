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
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetWaitingMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsWaitingMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ChoiceDialog_C::SetWaitingMode(bool IsWaitingMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetWaitingMode");

	UBP_ChoiceDialog_C_SetWaitingMode_Params params;
	params.IsWaitingMode = IsWaitingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_ChoiceDialog_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.OnPreviewKeyDown");

	UBP_ChoiceDialog_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.GetChoiceText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ChoiceDialog_C::GetChoiceText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.GetChoiceText");

	UBP_ChoiceDialog_C_GetChoiceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetTitleText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ChoiceDialog_C::SetTitleText(const struct FText& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetTitleText");

	UBP_ChoiceDialog_C_SetTitleText_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetRightButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ChoiceDialog_C::SetRightButtonText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetRightButtonText");

	UBP_ChoiceDialog_C_SetRightButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetLeftButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_ChoiceDialog_C::SetLeftButtonText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.SetLeftButtonText");

	UBP_ChoiceDialog_C_SetLeftButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ChoiceDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ChoiceDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_ChoiceDialog_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.Show");

	UBP_ChoiceDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.Hide
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_ChoiceDialog_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.Hide");

	UBP_ChoiceDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChoiceDialog_C::ExecuteUbergraph_BP_ChoiceDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.ExecuteUbergraph_BP_ChoiceDialog");

	UBP_ChoiceDialog_C_ExecuteUbergraph_BP_ChoiceDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.RightButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ChoiceDialog_C::RightButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.RightButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ChoiceDialog.BP_ChoiceDialog_C.LeftButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_ChoiceDialog_C::LeftButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceDialog.BP_ChoiceDialog_C.LeftButtonClicked__DelegateSignature");

	UBP_ChoiceDialog_C_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
