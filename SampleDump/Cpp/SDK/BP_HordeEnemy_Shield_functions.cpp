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
//		Name   -> Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.BPLODTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_Shield_C::BPLODTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.BPLODTick");

	ABP_HordeEnemy_Shield_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.ExecuteUbergraph_BP_HordeEnemy_Shield
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeEnemy_Shield_C::ExecuteUbergraph_BP_HordeEnemy_Shield(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C.ExecuteUbergraph_BP_HordeEnemy_Shield");

	ABP_HordeEnemy_Shield_C_ExecuteUbergraph_BP_HordeEnemy_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
