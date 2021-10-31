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
//		Name   -> Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EnvironmentMovableLight_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ReceiveTick");

	ABP_EnvironmentMovableLight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ExecuteUbergraph_BP_EnvironmentMovableLight
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EnvironmentMovableLight_C::ExecuteUbergraph_BP_EnvironmentMovableLight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EnvironmentMovableLight.BP_EnvironmentMovableLight_C.ExecuteUbergraph_BP_EnvironmentMovableLight");

	ABP_EnvironmentMovableLight_C_ExecuteUbergraph_BP_EnvironmentMovableLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
