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
//		Name   -> Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.GetText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ContextPopupEntry_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.GetText_1");

	UBP_ContextPopupEntry_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ContextPopupEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UBP_ContextPopupEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.ExecuteUbergraph_BP_ContextPopupEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopupEntry_C::ExecuteUbergraph_BP_ContextPopupEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry.BP_ContextPopupEntry_C.ExecuteUbergraph_BP_ContextPopupEntry");

	UBP_ContextPopupEntry_C_ExecuteUbergraph_BP_ContextPopupEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
