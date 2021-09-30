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
//		Name   -> Function BP_FireField.BP_FireField_C.GetAgent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class AActor*                                      Agent                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireField_C::GetAgent(class AActor** Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.GetAgent");

	ABP_FireField_C_GetAgent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Agent != nullptr)
		*Agent = params.Agent;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FireField.BP_FireField_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireField_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.ReceiveTick");

	ABP_FireField_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FireField.BP_FireField_C.BeginFieldDeactivation
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FireField_C::BeginFieldDeactivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.BeginFieldDeactivation");

	ABP_FireField_C_BeginFieldDeactivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_FireField.BP_FireField_C.ExecuteUbergraph_BP_FireField
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FireField_C::ExecuteUbergraph_BP_FireField(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FireField.BP_FireField_C.ExecuteUbergraph_BP_FireField");

	ABP_FireField_C_ExecuteUbergraph_BP_FireField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
