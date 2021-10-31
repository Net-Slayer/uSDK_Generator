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
//		Name   -> Function BP_SplinePushableActor.BP_SplinePushableActor_C.GetTransformAlongSplineOffset
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              OffsetA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OffsetB                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  Output                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_SplinePushableActor_C::GetTransformAlongSplineOffset(float OffsetA, float OffsetB, struct FTransform* Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.GetTransformAlongSplineOffset");

	ABP_SplinePushableActor_C_GetTransformAlongSplineOffset_Params params;
	params.OffsetA = OffsetA;
	params.OffsetB = OffsetB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SplinePushableActor.BP_SplinePushableActor_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SplinePushableActor_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.UserConstructionScript");

	ABP_SplinePushableActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SplinePushableActor.BP_SplinePushableActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_SplinePushableActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.ReceiveBeginPlay");

	ABP_SplinePushableActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SplinePushableActor.BP_SplinePushableActor_C.OnProgressUpdated
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              OldProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SplinePushableActor_C::OnProgressUpdated(float OldProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.OnProgressUpdated");

	ABP_SplinePushableActor_C_OnProgressUpdated_Params params;
	params.OldProgress = OldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SplinePushableActor.BP_SplinePushableActor_C.ExecuteUbergraph_BP_SplinePushableActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SplinePushableActor_C::ExecuteUbergraph_BP_SplinePushableActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SplinePushableActor.BP_SplinePushableActor_C.ExecuteUbergraph_BP_SplinePushableActor");

	ABP_SplinePushableActor_C_ExecuteUbergraph_BP_SplinePushableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
