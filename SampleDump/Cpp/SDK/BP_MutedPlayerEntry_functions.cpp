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
//		Name   -> Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.OnContextButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MutedPlayerEntry_C::OnContextButtonClicked(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.OnContextButtonClicked");

	UBP_MutedPlayerEntry_C_OnContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_MutedPlayerEntry_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UBP_MutedPlayerEntry_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.ExecuteUbergraph_BP_MutedPlayerEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MutedPlayerEntry_C::ExecuteUbergraph_BP_MutedPlayerEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MutedPlayerEntry.BP_MutedPlayerEntry_C.ExecuteUbergraph_BP_MutedPlayerEntry");

	UBP_MutedPlayerEntry_C_ExecuteUbergraph_BP_MutedPlayerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
