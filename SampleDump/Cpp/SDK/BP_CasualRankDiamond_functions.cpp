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
//		Name   -> Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CasualRankDiamond_C::Update(int Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Update");

	UBP_CasualRankDiamond_C_Update_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Get_RankText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_CasualRankDiamond_C::Get_RankText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CasualRankDiamond.BP_CasualRankDiamond_C.Get_RankText_Text_1");

	UBP_CasualRankDiamond_C_Get_RankText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
