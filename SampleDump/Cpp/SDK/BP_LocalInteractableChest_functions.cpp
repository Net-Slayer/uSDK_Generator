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
//		Name   -> Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Refilled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LocalInteractableChest_C::Refilled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Refilled");

	ABP_LocalInteractableChest_C_Refilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Depleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LocalInteractableChest_C::Depleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.Depleted");

	ABP_LocalInteractableChest_C_Depleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.ExecuteUbergraph_BP_LocalInteractableChest
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LocalInteractableChest_C::ExecuteUbergraph_BP_LocalInteractableChest(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LocalInteractableChest.BP_LocalInteractableChest_C.ExecuteUbergraph_BP_LocalInteractableChest");

	ABP_LocalInteractableChest_C_ExecuteUbergraph_BP_LocalInteractableChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
