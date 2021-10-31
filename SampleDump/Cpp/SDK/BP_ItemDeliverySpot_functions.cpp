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
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsInObjectiveArea
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemDeliverySpot_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsInObjectiveArea");

	ABP_ItemDeliverySpot_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCompleted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemDeliverySpot_C::IsCompleted(bool* Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCompleted");

	ABP_ItemDeliverySpot_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.GetObjectiveProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemDeliverySpot_C::GetObjectiveProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.GetObjectiveProgress");

	ABP_ItemDeliverySpot_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFlipProgressBarState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::UpdateFlipProgressBarState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFlipProgressBarState");

	ABP_ItemDeliverySpot_C_UpdateFlipProgressBarState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFloater
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::UpdateFloater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateFloater");

	ABP_ItemDeliverySpot_C_UpdateFloater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.AnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::AnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.AnyObjectiveProgressChanged");

	ABP_ItemDeliverySpot_C_AnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCapturePointDone
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsDone                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemDeliverySpot_C::IsCapturePointDone(bool* IsDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.IsCapturePointDone");

	ABP_ItemDeliverySpot_C_IsCapturePointDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDone != nullptr)
		*IsDone = params.IsDone;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ActivateSpawns
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::ActivateSpawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ActivateSpawns");

	ABP_ItemDeliverySpot_C_ActivateSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.DisableSpawns
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::DisableSpawns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.DisableSpawns");

	ABP_ItemDeliverySpot_C_DisableSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateDeliverySpotVisuals
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::UpdateDeliverySpotVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UpdateDeliverySpotVisuals");

	ABP_ItemDeliverySpot_C_UpdateDeliverySpotVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::EnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyLostPrerequisites");

	ABP_ItemDeliverySpot_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::EnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.EnemyGainedPrerequisites");

	ABP_ItemDeliverySpot_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          CapturePoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemDeliverySpot_C::Initialize(class ABP_CapturePoint_C* CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Initialize");

	ABP_ItemDeliverySpot_C_Initialize_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Disable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               SlowDisable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemDeliverySpot_C::Disable(bool SlowDisable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Disable");

	ABP_ItemDeliverySpot_C_Disable_Params params;
	params.SlowDisable = SlowDisable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Activate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.Activate");

	ABP_ItemDeliverySpot_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnRep_Deliverables
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpot_C::OnRep_Deliverables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnRep_Deliverables");

	ABP_ItemDeliverySpot_C_OnRep_Deliverables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.UserConstructionScript");

	ABP_ItemDeliverySpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_ItemDeliverySpot_C::BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_ItemDeliverySpot_C_BndEvt__Area_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemDeliverySpot_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnInitialize");

	ABP_ItemDeliverySpot_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::OnEnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyGainedPrerequisites");

	ABP_ItemDeliverySpot_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::OnEnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnEnemyLostPrerequisites");

	ABP_ItemDeliverySpot_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnUpdateUIWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::OnUpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnUpdateUIWidgets");

	ABP_ItemDeliverySpot_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnDeliverablesChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::OnDeliverablesChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnDeliverablesChanged");

	ABP_ItemDeliverySpot_C_OnDeliverablesChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ProgressVisualStage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::ProgressVisualStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ProgressVisualStage");

	ABP_ItemDeliverySpot_C_ProgressVisualStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnAnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemDeliverySpot_C::OnAnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.OnAnyObjectiveProgressChanged");

	ABP_ItemDeliverySpot_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ExecuteUbergraph_BP_ItemDeliverySpot
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemDeliverySpot_C::ExecuteUbergraph_BP_ItemDeliverySpot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpot.BP_ItemDeliverySpot_C.ExecuteUbergraph_BP_ItemDeliverySpot");

	ABP_ItemDeliverySpot_C_ExecuteUbergraph_BP_ItemDeliverySpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
