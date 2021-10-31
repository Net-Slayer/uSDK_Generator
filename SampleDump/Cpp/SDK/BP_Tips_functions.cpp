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
//		Name   -> Function BP_Tips.BP_Tips_C.Get_TeamTip_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_Tips_C::Get_TeamTip_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_TeamTip_Visibility_1");

	UBP_Tips_C_Get_TeamTip_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_Tips_C::Get_LoadoutTip_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Visibility_1");

	UBP_Tips_C_Get_LoadoutTip_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.Get_TeamTip_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_Tips_C::Get_TeamTip_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_TeamTip_Text_1");

	UBP_Tips_C_Get_TeamTip_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_Tips_C::Get_LoadoutTip_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Get_LoadoutTip_Text_1");

	UBP_Tips_C_Get_LoadoutTip_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Tips_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Show");

	UBP_Tips_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Tips_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.Construct");

	UBP_Tips_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.WidgetAnimationEvt_Blink_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UBP_Tips_C::WidgetAnimationEvt_Blink_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.WidgetAnimationEvt_Blink_K2Node_WidgetAnimationEvent_1");

	UBP_Tips_C_WidgetAnimationEvt_Blink_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Tips.BP_Tips_C.ExecuteUbergraph_BP_Tips
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Tips_C::ExecuteUbergraph_BP_Tips(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Tips.BP_Tips_C.ExecuteUbergraph_BP_Tips");

	UBP_Tips_C_ExecuteUbergraph_BP_Tips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
