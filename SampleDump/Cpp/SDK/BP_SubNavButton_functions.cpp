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
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_SubNavButton_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.GetVisibility_1");

	UBP_SubNavButton_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.Update
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_SubNavButton_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.Update");

	UBP_SubNavButton_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SubNavButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.Construct");

	UBP_SubNavButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_SubNavButton_C::BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature");

	UBP_SubNavButton_C_BndEvt__NavButton_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.Select SubNavButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_SubNavButton_C::Select_SubNavButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.Select SubNavButton");

	UBP_SubNavButton_C_Select_SubNavButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.ExecuteUbergraph_BP_SubNavButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SubNavButton_C::ExecuteUbergraph_BP_SubNavButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.ExecuteUbergraph_BP_SubNavButton");

	UBP_SubNavButton_C_ExecuteUbergraph_BP_SubNavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SubNavButton.BP_SubNavButton_C.OnClick__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_SubNavButton_C::OnClick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SubNavButton.BP_SubNavButton_C.OnClick__DelegateSignature");

	UBP_SubNavButton_C_OnClick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
