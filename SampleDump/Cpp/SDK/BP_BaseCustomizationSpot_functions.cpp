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
//		Name   -> Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_BaseCustomizationSpot_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ReceiveBeginPlay");

	ABP_BaseCustomizationSpot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ExecuteUbergraph_BP_BaseCustomizationSpot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseCustomizationSpot_C::ExecuteUbergraph_BP_BaseCustomizationSpot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseCustomizationSpot.BP_BaseCustomizationSpot_C.ExecuteUbergraph_BP_BaseCustomizationSpot");

	ABP_BaseCustomizationSpot_C_ExecuteUbergraph_BP_BaseCustomizationSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
