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
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_OfficialRules_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.Hide");

	UBP_OfficialRules_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_OfficialRules_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.Show");

	UBP_OfficialRules_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_OfficialRules_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.Construct");

	UBP_OfficialRules_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_OfficialRules_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_OfficialRules_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_OfficialRules_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_OfficialRules_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_OfficialRules_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_OfficialRules_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_OfficialRules.BP_OfficialRules_C.ExecuteUbergraph_BP_OfficialRules
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_OfficialRules_C::ExecuteUbergraph_BP_OfficialRules(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OfficialRules.BP_OfficialRules_C.ExecuteUbergraph_BP_OfficialRules");

	UBP_OfficialRules_C_ExecuteUbergraph_BP_OfficialRules_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
