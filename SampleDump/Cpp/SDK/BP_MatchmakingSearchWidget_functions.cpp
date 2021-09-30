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
//		Name   -> Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Get_TextBlock_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_MatchmakingSearchWidget_C::Get_TextBlock_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Get_TextBlock_Text_1");

	UBP_MatchmakingSearchWidget_C_Get_TextBlock_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_MatchmakingSearchWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Construct");

	UBP_MatchmakingSearchWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Activate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingSearchWidget_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Activate");

	UBP_MatchmakingSearchWidget_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Deactivate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MatchmakingSearchWidget_C::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.Deactivate");

	UBP_MatchmakingSearchWidget_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.ExecuteUbergraph_BP_MatchmakingSearchWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MatchmakingSearchWidget_C::ExecuteUbergraph_BP_MatchmakingSearchWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MatchmakingSearchWidget.BP_MatchmakingSearchWidget_C.ExecuteUbergraph_BP_MatchmakingSearchWidget");

	UBP_MatchmakingSearchWidget_C_ExecuteUbergraph_BP_MatchmakingSearchWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
