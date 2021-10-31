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
//		Name   -> Function BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C.OnSpawnChosen
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeployableSpawnPlayerStart_C::OnSpawnChosen(class AController* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C.OnSpawnChosen");

	ABP_DeployableSpawnPlayerStart_C_OnSpawnChosen_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C.StartDestroyProcess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DeployableSpawnPlayerStart_C::StartDestroyProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C.StartDestroyProcess");

	ABP_DeployableSpawnPlayerStart_C_StartDestroyProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C.ExecuteUbergraph_BP_DeployableSpawnPlayerStart
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_DeployableSpawnPlayerStart_C::ExecuteUbergraph_BP_DeployableSpawnPlayerStart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C.ExecuteUbergraph_BP_DeployableSpawnPlayerStart");

	ABP_DeployableSpawnPlayerStart_C_ExecuteUbergraph_BP_DeployableSpawnPlayerStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
