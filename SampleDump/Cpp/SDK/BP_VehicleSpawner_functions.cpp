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
//		Name   -> Function BP_VehicleSpawner.BP_VehicleSpawner_C.Activate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_VehicleSpawner_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.Activate");

	ABP_VehicleSpawner_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleSpawner.BP_VehicleSpawner_C.TrySpawnVehicle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_VehicleSpawner_C::TrySpawnVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.TrySpawnVehicle");

	ABP_VehicleSpawner_C_TrySpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleSpawner.BP_VehicleSpawner_C.Deactivate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_VehicleSpawner_C::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.Deactivate");

	ABP_VehicleSpawner_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_VehicleSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.ReceiveBeginPlay");

	ABP_VehicleSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnVehicle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_VehicleSpawner_C::SpawnVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.SpawnVehicle");

	ABP_VehicleSpawner_C_SpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_VehicleSpawner_C::ExecuteUbergraph_BP_VehicleSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleSpawner.BP_VehicleSpawner_C.ExecuteUbergraph_BP_VehicleSpawner");

	ABP_VehicleSpawner_C_ExecuteUbergraph_BP_VehicleSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
