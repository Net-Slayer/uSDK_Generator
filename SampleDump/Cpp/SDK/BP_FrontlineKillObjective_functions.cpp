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
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsInObjectiveArea
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineKillObjective_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsInObjectiveArea");

	ABP_FrontlineKillObjective_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCompleted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineKillObjective_C::IsCompleted(bool* Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCompleted");

	ABP_FrontlineKillObjective_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.GetObjectiveProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::GetObjectiveProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.GetObjectiveProgress");

	ABP_FrontlineKillObjective_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.AwardScorePointsIfApplicable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AController*                                 Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::AwardScorePointsIfApplicable(class AController* Instigator, int Points)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.AwardScorePointsIfApplicable");

	ABP_FrontlineKillObjective_C_AwardScorePointsIfApplicable_Params params;
	params.Instigator = Instigator;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.CompileCandidatesList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineKillObjective_C::CompileCandidatesList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.CompileCandidatesList");

	ABP_FrontlineKillObjective_C_CompileCandidatesList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCandidateValidForPossession
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ABP_FrontlinePlayerController_C*             Candidate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineKillObjective_C::IsCandidateValidForPossession(class ABP_FrontlinePlayerController_C* Candidate, bool* Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.IsCandidateValidForPossession");

	ABP_FrontlineKillObjective_C_IsCandidateValidForPossession_Params params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.NotifyCandidateForPossession
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineKillObjective_C::NotifyCandidateForPossession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.NotifyCandidateForPossession");

	ABP_FrontlineKillObjective_C_NotifyCandidateForPossession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UpdateUIWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineKillObjective_C::UpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UpdateUIWidgets");

	ABP_FrontlineKillObjective_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.SpawnOurEquipment
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineKillObjective_C::SpawnOurEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.SpawnOurEquipment");

	ABP_FrontlineKillObjective_C_SpawnOurEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineKillObjective_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.UserConstructionScript");

	ABP_FrontlineKillObjective_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FrontlineKillObjective_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveBeginPlay");

	ABP_FrontlineKillObjective_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineKillObjective_C::OnEnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineKillObjective_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineKillObjective_C::OnEnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnEnemyLostPrerequisites");

	ABP_FrontlineKillObjective_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveAnyDamage
//		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveAnyDamage");

	ABP_FrontlineKillObjective_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnInitialize");

	ABP_FrontlineKillObjective_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnDied
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnDied");

	ABP_FrontlineKillObjective_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnUpdateUIWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineKillObjective_C::OnUpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnUpdateUIWidgets");

	ABP_FrontlineKillObjective_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnHealthChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_FrontlineKillObjective_C::OnHealthChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnHealthChanged");

	ABP_FrontlineKillObjective_C_OnHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.BPLODTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::BPLODTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.BPLODTick");

	ABP_FrontlineKillObjective_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnAnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineKillObjective_C::OnAnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlineKillObjective_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.MoveBlockedBySlow
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Impact                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_FrontlineKillObjective_C::MoveBlockedBySlow(const struct FHitResult& Impact)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.MoveBlockedBySlow");

	ABP_FrontlineKillObjective_C_MoveBlockedBySlow_Params params;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_FrontlineKillObjective_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ReceiveDestroyed");

	ABP_FrontlineKillObjective_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ExecuteUbergraph_BP_FrontlineKillObjective
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineKillObjective_C::ExecuteUbergraph_BP_FrontlineKillObjective(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineKillObjective.BP_FrontlineKillObjective_C.ExecuteUbergraph_BP_FrontlineKillObjective");

	ABP_FrontlineKillObjective_C_ExecuteUbergraph_BP_FrontlineKillObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
