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
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OverrideAttackAngle
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAttackMotion*                               Motion                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UBP_VehicleLadderMover_C::OverrideAttackAngle(class UAttackMotion* Motion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OverrideAttackAngle");

	UBP_VehicleLadderMover_C_OverrideAttackAngle_Params params;
	params.Motion = Motion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.GetExitTransform
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UBP_VehicleLadderMover_C::GetExitTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.GetExitTransform");

	UBP_VehicleLadderMover_C_GetExitTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_VehicleLadderMover_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.ReceiveBeginPlay");

	UBP_VehicleLadderMover_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OnStoppedDriving
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VehicleLadderMover_C::OnStoppedDriving(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OnStoppedDriving");

	UBP_VehicleLadderMover_C_OnStoppedDriving_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.UpdateFPCameraFor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bRotationOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_VehicleLadderMover_C::UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.UpdateFPCameraFor");

	UBP_VehicleLadderMover_C_UpdateFPCameraFor_Params params;
	params.Character = Character;
	params.DeltaSeconds = DeltaSeconds;
	params.bRotationOnly = bRotationOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.UpdateAnimationFor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMordhauAnimInstance*                        AnimInst                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VehicleLadderMover_C::UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.UpdateAnimationFor");

	UBP_VehicleLadderMover_C_UpdateAnimationFor_Params params;
	params.Character = Character;
	params.AnimInst = AnimInst;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OnDriverChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
void UBP_VehicleLadderMover_C::OnDriverChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OnDriverChanged");

	UBP_VehicleLadderMover_C_OnDriverChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.ExecuteUbergraph_BP_VehicleLadderMover
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VehicleLadderMover_C::ExecuteUbergraph_BP_VehicleLadderMover(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.ExecuteUbergraph_BP_VehicleLadderMover");

	UBP_VehicleLadderMover_C_ExecuteUbergraph_BP_VehicleLadderMover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
