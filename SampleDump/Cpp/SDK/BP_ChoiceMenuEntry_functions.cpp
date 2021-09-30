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
//		Name   -> Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ChoiceMenuEntry_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Update");

	UBP_ChoiceMenuEntry_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Get_SlotNumber_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ChoiceMenuEntry_C::Get_SlotNumber_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Get_SlotNumber_Text_1");

	UBP_ChoiceMenuEntry_C_Get_SlotNumber_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_ChoiceMenuEntry_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetVisibility_1");

	UBP_ChoiceMenuEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_ChoiceMenuEntry_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.GetText_1");

	UBP_ChoiceMenuEntry_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ChoiceMenuEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.Construct");

	UBP_ChoiceMenuEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.ExecuteUbergraph_BP_ChoiceMenuEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ChoiceMenuEntry_C::ExecuteUbergraph_BP_ChoiceMenuEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ChoiceMenuEntry.BP_ChoiceMenuEntry_C.ExecuteUbergraph_BP_ChoiceMenuEntry");

	UBP_ChoiceMenuEntry_C_ExecuteUbergraph_BP_ChoiceMenuEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
