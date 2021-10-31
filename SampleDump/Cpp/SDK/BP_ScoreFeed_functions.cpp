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
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddSpawn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddSpawn(float Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddSpawn");

	UBP_ScoreFeed_C_AddSpawn_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddStructureDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddStructureDamage(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddStructureDamage");

	UBP_ScoreFeed_C_AddStructureDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddVehicleDamage(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleDamage");

	UBP_ScoreFeed_C_AddVehicleDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleTeamDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddVehicleTeamDamage(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddVehicleTeamDamage");

	UBP_ScoreFeed_C_AddVehicleTeamDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddRepair
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddRepair(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddRepair");

	UBP_ScoreFeed_C_AddRepair_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddObjective
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddObjective(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddObjective");

	UBP_ScoreFeed_C_AddObjective_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddWaveCleared
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddWaveCleared(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddWaveCleared");

	UBP_ScoreFeed_C_AddWaveCleared_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddHeal(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeal");

	UBP_ScoreFeed_C_AddHeal_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralized
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddNeutralized(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralized");

	UBP_ScoreFeed_C_AddNeutralized_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralizing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddNeutralizing(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddNeutralizing");

	UBP_ScoreFeed_C_AddNeutralizing_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddCaptured
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddCaptured(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddCaptured");

	UBP_ScoreFeed_C_AddCaptured_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddCapturing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddCapturing(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddCapturing");

	UBP_ScoreFeed_C_AddCapturing_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeadshot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddHeadshot(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddHeadshot");

	UBP_ScoreFeed_C_AddHeadshot_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateCurrentPointsText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ScoreFeed_C::UpdateCurrentPointsText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateCurrentPointsText");

	UBP_ScoreFeed_C_UpdateCurrentPointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateComboVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldHide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ScoreFeed_C::UpdateComboVisibility(bool ShouldHide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.UpdateComboVisibility");

	UBP_ScoreFeed_C_UpdateComboVisibility_Params params;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.RemoveFromFeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ScoreEntry_C*                            ToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::RemoveFromFeed(class UBP_ScoreEntry_C* ToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.RemoveFromFeed");

	UBP_ScoreFeed_C_RemoveFromFeed_Params params;
	params.ToRemove = ToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddTeamDamage(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamDamage");

	UBP_ScoreFeed_C_AddTeamDamage_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddDamage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                HitZone                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddDamage(float Points, int HitZone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddDamage");

	UBP_ScoreFeed_C_AddDamage_Params params;
	params.Points = Points;
	params.HitZone = HitZone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.CollectPoints
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::CollectPoints(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.CollectPoints");

	UBP_ScoreFeed_C_CollectPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddSuicide
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddSuicide(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddSuicide");

	UBP_ScoreFeed_C_AddSuicide_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamKill
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddTeamKill(float Points, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddTeamKill");

	UBP_ScoreFeed_C_AddTeamKill_Params params;
	params.Points = Points;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddAssist
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddAssist(float Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddAssist");

	UBP_ScoreFeed_C_AddAssist_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddKill
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::AddKill(float Points, const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddKill");

	UBP_ScoreFeed_C_AddKill_Params params;
	params.Points = Points;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.AddEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               CanGroup                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ScoreFeed_C::AddEntry(float Points, const struct FString& PlayerName, const struct FText& Label, bool CanGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.AddEntry");

	UBP_ScoreFeed_C_AddEntry_Params params;
	params.Points = Points;
	params.PlayerName = PlayerName;
	params.Label = Label;
	params.CanGroup = CanGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ScoreFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.Construct");

	UBP_ScoreFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UBP_ScoreFeed_C::WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1");

	UBP_ScoreFeed_C_WidgetAnimationEvt_FadeAnim_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ScoreFeed.BP_ScoreFeed_C.ExecuteUbergraph_BP_ScoreFeed
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreFeed_C::ExecuteUbergraph_BP_ScoreFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreFeed.BP_ScoreFeed_C.ExecuteUbergraph_BP_ScoreFeed");

	UBP_ScoreFeed_C_ExecuteUbergraph_BP_ScoreFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
