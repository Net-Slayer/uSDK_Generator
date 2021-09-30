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
//		Name   -> Function BP_InGoreMesh.BP_InGoreMesh_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_InGoreMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InGoreMesh.BP_InGoreMesh_C.ReceiveBeginPlay");

	ABP_InGoreMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_InGoreMesh.BP_InGoreMesh_C.ExecuteUbergraph_BP_InGoreMesh
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_InGoreMesh_C::ExecuteUbergraph_BP_InGoreMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_InGoreMesh.BP_InGoreMesh_C.ExecuteUbergraph_BP_InGoreMesh");

	ABP_InGoreMesh_C_ExecuteUbergraph_BP_InGoreMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
