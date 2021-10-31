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
//		Name   -> Function BP_HordeSpawn.BP_HordeSpawn_C.OnRep_SpawnActivatedCounter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_HordeSpawn_C::OnRep_SpawnActivatedCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.OnRep_SpawnActivatedCounter");

	ABP_HordeSpawn_C_OnRep_SpawnActivatedCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpawn.BP_HordeSpawn_C.HideFloaterDelayed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_HordeSpawn_C::HideFloaterDelayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.HideFloaterDelayed");

	ABP_HordeSpawn_C_HideFloaterDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpawn.BP_HordeSpawn_C.ExecuteUbergraph_BP_HordeSpawn
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeSpawn_C::ExecuteUbergraph_BP_HordeSpawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpawn.BP_HordeSpawn_C.ExecuteUbergraph_BP_HordeSpawn");

	ABP_HordeSpawn_C_ExecuteUbergraph_BP_HordeSpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
