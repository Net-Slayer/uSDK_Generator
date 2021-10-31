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
//		Name   -> Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.Reroll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_RandomProfileDoll_C::Reroll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.Reroll");

	ABP_RandomProfileDoll_C_Reroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RandomProfileDoll_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ReceiveTick");

	ABP_RandomProfileDoll_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ExecuteUbergraph_BP_RandomProfileDoll
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_RandomProfileDoll_C::ExecuteUbergraph_BP_RandomProfileDoll(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RandomProfileDoll.BP_RandomProfileDoll_C.ExecuteUbergraph_BP_RandomProfileDoll");

	ABP_RandomProfileDoll_C_ExecuteUbergraph_BP_RandomProfileDoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
