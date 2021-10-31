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
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.SetButtonText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_InformationDialog_C::SetButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.SetButtonText");

	UBP_InformationDialog_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.SetTitleText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_InformationDialog_C::SetTitleText(const struct FText& TitleText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.SetTitleText");

	UBP_InformationDialog_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.GetInfoText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_InformationDialog_C::GetInfoText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.GetInfoText");

	UBP_InformationDialog_C_GetInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_InformationDialog_C::BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature");

	UBP_InformationDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.Show
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_InformationDialog_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.Show");

	UBP_InformationDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.Hide
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_InformationDialog_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.Hide");

	UBP_InformationDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.ExecuteUbergraph_BP_InformationDialog
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InformationDialog_C::ExecuteUbergraph_BP_InformationDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.ExecuteUbergraph_BP_InformationDialog");

	UBP_InformationDialog_C_ExecuteUbergraph_BP_InformationDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InformationDialog.BP_InformationDialog_C.ButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_InformationDialog_C::ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InformationDialog.BP_InformationDialog_C.ButtonClicked__DelegateSignature");

	UBP_InformationDialog_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
