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
//		Name   -> Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SpawnProtectionBox_C::Disable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Disable");

	ABP_SpawnProtectionBox_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SpawnProtectionBox_C::Enable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.Enable");

	ABP_SpawnProtectionBox_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SpawnProtectionBox_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.UserConstructionScript");

	ABP_SpawnProtectionBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnProtectionBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorBeginOverlap");

	ABP_SpawnProtectionBox_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnProtectionBox_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ReceiveActorEndOverlap");

	ABP_SpawnProtectionBox_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SpawnProtectionBox_C::ExecuteUbergraph_BP_SpawnProtectionBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnProtectionBox.BP_SpawnProtectionBox_C.ExecuteUbergraph_BP_SpawnProtectionBox");

	ABP_SpawnProtectionBox_C_ExecuteUbergraph_BP_SpawnProtectionBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
