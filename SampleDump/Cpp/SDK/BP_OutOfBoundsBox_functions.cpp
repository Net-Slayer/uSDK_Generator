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
//		Name   -> Function BP_OutOfBoundsBox.BP_OutOfBoundsBox_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OutOfBoundsBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutOfBoundsBox.BP_OutOfBoundsBox_C.ReceiveActorBeginOverlap");

	ABP_OutOfBoundsBox_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_OutOfBoundsBox.BP_OutOfBoundsBox_C.ReceiveActorEndOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OutOfBoundsBox_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutOfBoundsBox.BP_OutOfBoundsBox_C.ReceiveActorEndOverlap");

	ABP_OutOfBoundsBox_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_OutOfBoundsBox.BP_OutOfBoundsBox_C.ExecuteUbergraph_BP_OutOfBoundsBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OutOfBoundsBox_C::ExecuteUbergraph_BP_OutOfBoundsBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutOfBoundsBox.BP_OutOfBoundsBox_C.ExecuteUbergraph_BP_OutOfBoundsBox");

	ABP_OutOfBoundsBox_C_ExecuteUbergraph_BP_OutOfBoundsBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
