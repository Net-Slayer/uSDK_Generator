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
//		Name   -> Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdatedInternal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseProgressActor_C::ProgressUpdatedInternal(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdatedInternal");

	ABP_BaseProgressActor_C_ProgressUpdatedInternal_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseProgressActor_C::ProgressUpdated(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ProgressUpdated");

	ABP_BaseProgressActor_C_ProgressUpdated_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BaseProgressActor.BP_BaseProgressActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_BaseProgressActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ReceiveBeginPlay");

	ABP_BaseProgressActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BaseProgressActor.BP_BaseProgressActor_C.ExecuteUbergraph_BP_BaseProgressActor
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BaseProgressActor_C::ExecuteUbergraph_BP_BaseProgressActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseProgressActor.BP_BaseProgressActor_C.ExecuteUbergraph_BP_BaseProgressActor");

	ABP_BaseProgressActor_C_ExecuteUbergraph_BP_BaseProgressActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
