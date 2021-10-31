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
//		Name   -> Function BP_Checkbox.BP_Checkbox_C.Get_TextBlock_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_Checkbox_C::Get_TextBlock_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Checkbox.BP_Checkbox_C.Get_TextBlock_Text_1");

	UBP_Checkbox_C_Get_TextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Checkbox.BP_Checkbox_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Checkbox_C::BndEvt__Checkbox_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Checkbox.BP_Checkbox_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");

	UBP_Checkbox_C_BndEvt__Checkbox_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Checkbox.BP_Checkbox_C.ExecuteUbergraph_BP_Checkbox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Checkbox_C::ExecuteUbergraph_BP_Checkbox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Checkbox.BP_Checkbox_C.ExecuteUbergraph_BP_Checkbox");

	UBP_Checkbox_C_ExecuteUbergraph_BP_Checkbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Checkbox.BP_Checkbox_C.OnCheckStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Checkbox_C::OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Checkbox.BP_Checkbox_C.OnCheckStateChanged__DelegateSignature");

	UBP_Checkbox_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
