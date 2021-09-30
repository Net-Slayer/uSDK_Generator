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
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetEnteredText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       EnteredText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_TextInputDialog_C::SetEnteredText(const struct FText& EnteredText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetEnteredText");

	UBP_TextInputDialog_C_SetEnteredText_Params params;
	params.EnteredText = EnteredText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.GetEnteredText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UBP_TextInputDialog_C::GetEnteredText(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.GetEnteredText");

	UBP_TextInputDialog_C_GetEnteredText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetTitleText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_TextInputDialog_C::SetTitleText(const struct FText& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetTitleText");

	UBP_TextInputDialog_C_SetTitleText_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetRightButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_TextInputDialog_C::SetRightButtonText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetRightButtonText");

	UBP_TextInputDialog_C_SetRightButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.SetLeftButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_TextInputDialog_C::SetLeftButtonText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.SetLeftButtonText");

	UBP_TextInputDialog_C_SetLeftButtonText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.GetHintText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_TextInputDialog_C::GetHintText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.GetHintText");

	UBP_TextInputDialog_C_GetHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TextInputDialog_C::BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__PasswordTextbox_K2Node_ComponentBoundEvent_23_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_TextInputDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_183_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_TextInputDialog_C::BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__BP_TwoButtonDialog_K2Node_ComponentBoundEvent_187_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.Show
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_TextInputDialog_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Show");

	UBP_TextInputDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.Hide
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_TextInputDialog_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.Hide");

	UBP_TextInputDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TextInputDialog_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_TextInputDialog_C::BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__NormalTextBox_K2Node_ComponentBoundEvent_19_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_TextInputDialog_C::BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature");

	UBP_TextInputDialog_C_BndEvt__PasswordTextBox_K2Node_ComponentBoundEvent_20_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TextInputDialog_C::ExecuteUbergraph_BP_TextInputDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.ExecuteUbergraph_BP_TextInputDialog");

	UBP_TextInputDialog_C_ExecuteUbergraph_BP_TextInputDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.TextChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_TextInputDialog_C::TextChanged__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.TextChanged__DelegateSignature");

	UBP_TextInputDialog_C_TextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.TextCommitted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ETextCommit>                 Commit_Method                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TextInputDialog_C::TextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> Commit_Method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.TextCommitted__DelegateSignature");

	UBP_TextInputDialog_C_TextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.RightButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_TextInputDialog_C::RightButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.RightButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_RightButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_TextInputDialog.BP_TextInputDialog_C.LeftButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_TextInputDialog_C::LeftButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TextInputDialog.BP_TextInputDialog_C.LeftButtonClicked__DelegateSignature");

	UBP_TextInputDialog_C_LeftButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
