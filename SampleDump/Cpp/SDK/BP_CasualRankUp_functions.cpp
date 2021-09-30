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
//		Name   -> Function BP_CasualRankUp.BP_CasualRankUp_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CasualRankUp_C::Update(int Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Update");

	UBP_CasualRankUp_C_Update_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankUp.BP_CasualRankUp_C.Get_RankText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_CasualRankUp_C::Get_RankText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Get_RankText_Text_1");

	UBP_CasualRankUp_C_Get_RankText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankUp.BP_CasualRankUp_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_CasualRankUp_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Construct");

	UBP_CasualRankUp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankUp.BP_CasualRankUp_C.Exit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_CasualRankUp_C::Exit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.Exit");

	UBP_CasualRankUp_C_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CasualRankUp.BP_CasualRankUp_C.ExecuteUbergraph_BP_CasualRankUp
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CasualRankUp_C::ExecuteUbergraph_BP_CasualRankUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankUp.BP_CasualRankUp_C.ExecuteUbergraph_BP_CasualRankUp");

	UBP_CasualRankUp_C_ExecuteUbergraph_BP_CasualRankUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
