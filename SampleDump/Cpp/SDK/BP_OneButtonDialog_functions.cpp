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
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.GetButtonText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_OneButtonDialog_C::GetButtonText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.GetButtonText");

	UBP_OneButtonDialog_C_GetButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_OneButtonDialog_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.Construct");

	UBP_OneButtonDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_OneButtonDialog_C::BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature");

	UBP_OneButtonDialog_C_BndEvt__Button_K2Node_ComponentBoundEvent_150_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.Show
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_OneButtonDialog_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.Show");

	UBP_OneButtonDialog_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.Hide
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UBP_OneButtonDialog_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.Hide");

	UBP_OneButtonDialog_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.ExecuteUbergraph_BP_OneButtonDialog
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_OneButtonDialog_C::ExecuteUbergraph_BP_OneButtonDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.ExecuteUbergraph_BP_OneButtonDialog");

	UBP_OneButtonDialog_C_ExecuteUbergraph_BP_OneButtonDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OneButtonDialog.BP_OneButtonDialog_C.ButtonClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_OneButtonDialog_C::ButtonClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OneButtonDialog.BP_OneButtonDialog_C.ButtonClicked__DelegateSignature");

	UBP_OneButtonDialog_C_ButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
