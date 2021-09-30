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
//		Name   -> Function BP_GoldReward.BP_GoldReward_C.Get_EarnedGoldText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_GoldReward_C::Get_EarnedGoldText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.Get_EarnedGoldText_Text_1");

	UBP_GoldReward_C_Get_EarnedGoldText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GoldReward.BP_GoldReward_C.BeginGoldAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_GoldReward_C::BeginGoldAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.BeginGoldAnimation");

	UBP_GoldReward_C_BeginGoldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GoldReward.BP_GoldReward_C.MergeGold
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_GoldReward_C::MergeGold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.MergeGold");

	UBP_GoldReward_C_MergeGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GoldReward.BP_GoldReward_C.ExecuteUbergraph_BP_GoldReward
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GoldReward_C::ExecuteUbergraph_BP_GoldReward(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GoldReward.BP_GoldReward_C.ExecuteUbergraph_BP_GoldReward");

	UBP_GoldReward_C_ExecuteUbergraph_BP_GoldReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
