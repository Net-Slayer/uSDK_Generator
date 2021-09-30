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
//		Name   -> Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_HomeScoreboardContainer_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.GetVisibility_1");

	UBP_HomeScoreboardContainer_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_HomeScoreboardContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.Construct");

	UBP_HomeScoreboardContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnShown
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_HomeScoreboardContainer_C::OnShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnShown");

	UBP_HomeScoreboardContainer_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnHidden
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_HomeScoreboardContainer_C::OnHidden()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.OnHidden");

	UBP_HomeScoreboardContainer_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.ExecuteUbergraph_BP_HomeScoreboardContainer
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HomeScoreboardContainer_C::ExecuteUbergraph_BP_HomeScoreboardContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HomeScoreboardContainer.BP_HomeScoreboardContainer_C.ExecuteUbergraph_BP_HomeScoreboardContainer");

	UBP_HomeScoreboardContainer_C_ExecuteUbergraph_BP_HomeScoreboardContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
