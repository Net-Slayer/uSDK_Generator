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
//		Name   -> Function BP_TrainingMenu.BP_TrainingMenu_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_TrainingMenu_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.GetVisibility_1");

	UBP_TrainingMenu_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_TrainingMenu_C::TutorialPopupConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupConfirm");

	UBP_TrainingMenu_C_TutorialPopupConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_TrainingMenu_C::TutorialPopupCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.TutorialPopupCancel");

	UBP_TrainingMenu_C_TutorialPopupCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TrainingMenu.BP_TrainingMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_TrainingMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_TrainingMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_TrainingMenu.BP_TrainingMenu_C.ExecuteUbergraph_BP_TrainingMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_TrainingMenu_C::ExecuteUbergraph_BP_TrainingMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TrainingMenu.BP_TrainingMenu_C.ExecuteUbergraph_BP_TrainingMenu");

	UBP_TrainingMenu_C_ExecuteUbergraph_BP_TrainingMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
