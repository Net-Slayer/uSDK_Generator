﻿// Name: Mordhau, Version: 4_25_hotfix

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
//		Name   -> Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ReceiveBeginPlay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_claymore_QuatrefoilGuard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ReceiveBeginPlay");

	UBP_claymore_QuatrefoilGuard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ReceiveActorBeginOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_claymore_QuatrefoilGuard_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ReceiveActorBeginOverlap");

	UBP_claymore_QuatrefoilGuard_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ReceiveTick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_claymore_QuatrefoilGuard_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ReceiveTick");

	UBP_claymore_QuatrefoilGuard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ExecuteUbergraph_BP_claymore_QuatrefoilGuard
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_claymore_QuatrefoilGuard_C::ExecuteUbergraph_BP_claymore_QuatrefoilGuard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_claymore_QuatrefoilGuard.BP_claymore_QuatrefoilGuard_C.ExecuteUbergraph_BP_claymore_QuatrefoilGuard");

	UBP_claymore_QuatrefoilGuard_C_ExecuteUbergraph_BP_claymore_QuatrefoilGuard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif