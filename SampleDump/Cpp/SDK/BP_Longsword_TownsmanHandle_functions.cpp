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
//		Name   -> Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveBeginPlay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Longsword_TownsmanHandle_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveBeginPlay");

	UBP_Longsword_TownsmanHandle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveActorBeginOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Longsword_TownsmanHandle_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveActorBeginOverlap");

	UBP_Longsword_TownsmanHandle_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Longsword_TownsmanHandle_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ReceiveTick");

	UBP_Longsword_TownsmanHandle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ExecuteUbergraph_BP_Longsword_TownsmanHandle
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Longsword_TownsmanHandle_C::ExecuteUbergraph_BP_Longsword_TownsmanHandle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Longsword_TownsmanHandle.BP_Longsword_TownsmanHandle_C.ExecuteUbergraph_BP_Longsword_TownsmanHandle");

	UBP_Longsword_TownsmanHandle_C_ExecuteUbergraph_BP_Longsword_TownsmanHandle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
