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
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_BackgroundImage_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_UltimateDisplay_C::Get_BackgroundImage_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_BackgroundImage_Visibility_1");

	UBP_UltimateDisplay_C_Get_BackgroundImage_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_UltimateDisplay_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetVisibility_1");

	UBP_UltimateDisplay_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_IconImage_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UBP_UltimateDisplay_C::Get_IconImage_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Get_IconImage_ColorAndOpacity_1");

	UBP_UltimateDisplay_C_Get_IconImage_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_UltimateDisplay_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.GetText_1");

	UBP_UltimateDisplay_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.Set Percent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_UltimateDisplay_C::Set_Percent(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Set Percent");

	UBP_UltimateDisplay_C_Set_Percent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_UltimateDisplay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.PreConstruct");

	UBP_UltimateDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_UltimateDisplay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.Construct");

	UBP_UltimateDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.UltimateUsed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_UltimateDisplay_C::UltimateUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.UltimateUsed");

	UBP_UltimateDisplay_C_UltimateUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_UltimateDisplay.BP_UltimateDisplay_C.ExecuteUbergraph_BP_UltimateDisplay
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_UltimateDisplay_C::ExecuteUbergraph_BP_UltimateDisplay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UltimateDisplay.BP_UltimateDisplay_C.ExecuteUbergraph_BP_UltimateDisplay");

	UBP_UltimateDisplay_C_ExecuteUbergraph_BP_UltimateDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
