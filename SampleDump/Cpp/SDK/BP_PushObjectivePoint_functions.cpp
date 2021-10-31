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
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.UpdateSpawnProtection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_PushObjectivePoint_C::UpdateSpawnProtection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.UpdateSpawnProtection");

	ABP_PushObjectivePoint_C_UpdateSpawnProtection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PushObjectivePoint_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.UserConstructionScript");

	ABP_PushObjectivePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_PushObjectivePoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ReceiveBeginPlay");

	ABP_PushObjectivePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.EnemyGainedPrerequisites
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PushObjectivePoint_C::EnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.EnemyGainedPrerequisites");

	ABP_PushObjectivePoint_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.OnOwningTeamChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_PushObjectivePoint_C::OnOwningTeamChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.OnOwningTeamChanged");

	ABP_PushObjectivePoint_C_OnOwningTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ShowPushAttackerAnnouncement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_PushObjectivePoint_C::ShowPushAttackerAnnouncement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ShowPushAttackerAnnouncement");

	ABP_PushObjectivePoint_C_ShowPushAttackerAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ShowPushDefenderAnnouncement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_PushObjectivePoint_C::ShowPushDefenderAnnouncement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ShowPushDefenderAnnouncement");

	ABP_PushObjectivePoint_C_ShowPushDefenderAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.OnObjectivesCompleted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_PushObjectivePoint_C::OnObjectivesCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.OnObjectivesCompleted");

	ABP_PushObjectivePoint_C_OnObjectivesCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ExecuteUbergraph_BP_PushObjectivePoint
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushObjectivePoint_C::ExecuteUbergraph_BP_PushObjectivePoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushObjectivePoint.BP_PushObjectivePoint_C.ExecuteUbergraph_BP_PushObjectivePoint");

	ABP_PushObjectivePoint_C_ExecuteUbergraph_BP_PushObjectivePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
