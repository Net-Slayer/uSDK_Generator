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
//		Name   -> Function BP_NetIndicator.BP_NetIndicator_C.Refresh
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_NetIndicator_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NetIndicator.BP_NetIndicator_C.Refresh");

	UBP_NetIndicator_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_NetIndicator.BP_NetIndicator_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_NetIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NetIndicator.BP_NetIndicator_C.Construct");

	UBP_NetIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_NetIndicator.BP_NetIndicator_C.ExecuteUbergraph_BP_NetIndicator
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_NetIndicator_C::ExecuteUbergraph_BP_NetIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_NetIndicator.BP_NetIndicator_C.ExecuteUbergraph_BP_NetIndicator");

	UBP_NetIndicator_C_ExecuteUbergraph_BP_NetIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
