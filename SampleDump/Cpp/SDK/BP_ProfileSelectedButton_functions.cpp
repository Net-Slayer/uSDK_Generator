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
//		Name   -> Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ProfileSelectedButton_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");

	UBP_ProfileSelectedButton_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ProfileSelectedButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.Construct");

	UBP_ProfileSelectedButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.ExecuteUbergraph_BP_ProfileSelectedButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ProfileSelectedButton_C::ExecuteUbergraph_BP_ProfileSelectedButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProfileSelectedButton.BP_ProfileSelectedButton_C.ExecuteUbergraph_BP_ProfileSelectedButton");

	UBP_ProfileSelectedButton_C_ExecuteUbergraph_BP_ProfileSelectedButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
