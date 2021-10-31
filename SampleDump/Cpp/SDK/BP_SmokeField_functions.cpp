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
//		Name   -> Function BP_SmokeField.BP_SmokeField_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SmokeField_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.ReceiveTick");

	ABP_SmokeField_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SmokeField.BP_SmokeField_C.BeginFieldDeactivation
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmokeField_C::BeginFieldDeactivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.BeginFieldDeactivation");

	ABP_SmokeField_C_BeginFieldDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SmokeField.BP_SmokeField_C.ExecuteUbergraph_BP_SmokeField
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SmokeField_C::ExecuteUbergraph_BP_SmokeField(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmokeField.BP_SmokeField_C.ExecuteUbergraph_BP_SmokeField");

	ABP_SmokeField_C_ExecuteUbergraph_BP_SmokeField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
