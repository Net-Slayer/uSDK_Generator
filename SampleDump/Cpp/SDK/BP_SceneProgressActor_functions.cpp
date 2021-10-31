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
//		Name   -> Function BP_SceneProgressActor.BP_SceneProgressActor_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SceneProgressActor_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.UserConstructionScript");

	ABP_SceneProgressActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SceneProgressActor.BP_SceneProgressActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_SceneProgressActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.ReceiveBeginPlay");

	ABP_SceneProgressActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SceneProgressActor.BP_SceneProgressActor_C.ProgressUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SceneProgressActor_C::ProgressUpdated(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.ProgressUpdated");

	ABP_SceneProgressActor_C_ProgressUpdated_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SceneProgressActor.BP_SceneProgressActor_C.ExecuteUbergraph_BP_SceneProgressActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SceneProgressActor_C::ExecuteUbergraph_BP_SceneProgressActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SceneProgressActor.BP_SceneProgressActor_C.ExecuteUbergraph_BP_SceneProgressActor");

	ABP_SceneProgressActor_C_ExecuteUbergraph_BP_SceneProgressActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
