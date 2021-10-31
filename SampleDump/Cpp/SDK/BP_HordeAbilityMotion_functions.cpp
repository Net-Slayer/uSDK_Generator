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
//		Name   -> Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnBegin
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_HordeAbilityMotion_C::OnBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnBegin");

	UBP_HordeAbilityMotion_C_OnBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnLeave
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               Interrupted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_HordeAbilityMotion_C::OnLeave(bool Interrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnLeave");

	UBP_HordeAbilityMotion_C_OnLeave_Params params;
	params.Interrupted = Interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HordeAbilityMotion_C::OnTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.OnTick");

	UBP_HordeAbilityMotion_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.ExecuteUbergraph_BP_HordeAbilityMotion
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HordeAbilityMotion_C::ExecuteUbergraph_BP_HordeAbilityMotion(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeAbilityMotion.BP_HordeAbilityMotion_C.ExecuteUbergraph_BP_HordeAbilityMotion");

	UBP_HordeAbilityMotion_C_ExecuteUbergraph_BP_HordeAbilityMotion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
