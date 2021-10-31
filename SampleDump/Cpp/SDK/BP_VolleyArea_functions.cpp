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
//		Name   -> Function BP_VolleyArea.BP_VolleyArea_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_VolleyArea_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.ReceiveBeginPlay");

	ABP_VolleyArea_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VolleyArea.BP_VolleyArea_C.DamageTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_VolleyArea_C::DamageTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.DamageTick");

	ABP_VolleyArea_C_DamageTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VolleyArea.BP_VolleyArea_C.ExecuteUbergraph_BP_VolleyArea
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VolleyArea_C::ExecuteUbergraph_BP_VolleyArea(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VolleyArea.BP_VolleyArea_C.ExecuteUbergraph_BP_VolleyArea");

	ABP_VolleyArea_C_ExecuteUbergraph_BP_VolleyArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
