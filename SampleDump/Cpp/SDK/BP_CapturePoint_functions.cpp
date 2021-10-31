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
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.OnObjectivesCompleted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CapturePoint_C::OnObjectivesCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnObjectivesCompleted");

	ABP_CapturePoint_C_OnObjectivesCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.ShowPushDefenderAnnouncement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CapturePoint_C::ShowPushDefenderAnnouncement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ShowPushDefenderAnnouncement");

	ABP_CapturePoint_C_ShowPushDefenderAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.ShowPushAttackerAnnouncement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CapturePoint_C::ShowPushAttackerAnnouncement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ShowPushAttackerAnnouncement");

	ABP_CapturePoint_C_ShowPushAttackerAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.ObjectivesChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CapturePoint_C::ObjectivesChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ObjectivesChanged");

	ABP_CapturePoint_C_ObjectivesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.Set Cap Point Widget Colors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Fill_Color                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Progress_Bar_Color                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CapturePoint_C::Set_Cap_Point_Widget_Colors(const struct FLinearColor& Fill_Color, const struct FLinearColor& Progress_Bar_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.Set Cap Point Widget Colors");

	ABP_CapturePoint_C_Set_Cap_Point_Widget_Colors_Params params;
	params.Fill_Color = Fill_Color;
	params.Progress_Bar_Color = Progress_Bar_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.GetTeamRelevance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Relevance                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CapturePoint_C::GetTeamRelevance(unsigned char Team, int* Relevance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.GetTeamRelevance");

	ABP_CapturePoint_C_GetTeamRelevance_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Relevance != nullptr)
		*Relevance = params.Relevance;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CapturePoint_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.UserConstructionScript");

	ABP_CapturePoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CapturePoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ReceiveBeginPlay");

	ABP_CapturePoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.OnCapturingTeamChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CapturePoint_C::OnCapturingTeamChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnCapturingTeamChanged");

	ABP_CapturePoint_C_OnCapturingTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.OnOwningTeamChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CapturePoint_C::OnOwningTeamChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnOwningTeamChanged");

	ABP_CapturePoint_C_OnOwningTeamChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.EnemyGainedPrerequisites
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CapturePoint_C::EnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.EnemyGainedPrerequisites");

	ABP_CapturePoint_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.EnemyLostPrerequisites
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CapturePoint_C::EnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.EnemyLostPrerequisites");

	ABP_CapturePoint_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.UpdateUIWidgets
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CapturePoint_C::UpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.UpdateUIWidgets");

	ABP_CapturePoint_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.OnStartedFlashing
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CapturePoint_C::OnStartedFlashing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnStartedFlashing");

	ABP_CapturePoint_C_OnStartedFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.OnStoppedFlashing
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CapturePoint_C::OnStoppedFlashing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.OnStoppedFlashing");

	ABP_CapturePoint_C_OnStoppedFlashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.TriggerWinDelayed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CapturePoint_C::TriggerWinDelayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.TriggerWinDelayed");

	ABP_CapturePoint_C_TriggerWinDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.Pulse
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CapturePoint_C::Pulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.Pulse");

	ABP_CapturePoint_C_Pulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CapturePoint.BP_CapturePoint_C.ExecuteUbergraph_BP_CapturePoint
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CapturePoint_C::ExecuteUbergraph_BP_CapturePoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CapturePoint.BP_CapturePoint_C.ExecuteUbergraph_BP_CapturePoint");

	ABP_CapturePoint_C_ExecuteUbergraph_BP_CapturePoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
