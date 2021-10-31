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
//		Name   -> Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_InGoreMeshNeck_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ReceiveBeginPlay");

	ABP_InGoreMeshNeck_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ExecuteUbergraph_BP_InGoreMeshNeck
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InGoreMeshNeck_C::ExecuteUbergraph_BP_InGoreMeshNeck(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InGoreMeshNeck.BP_InGoreMeshNeck_C.ExecuteUbergraph_BP_InGoreMeshNeck");

	ABP_InGoreMeshNeck_C_ExecuteUbergraph_BP_InGoreMeshNeck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
