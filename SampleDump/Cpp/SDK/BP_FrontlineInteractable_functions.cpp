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
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IsInObjectiveArea
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineInteractable_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IsInObjectiveArea");

	ABP_FrontlineInteractable_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IsCompleted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlineInteractable_C::IsCompleted(bool* Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IsCompleted");

	ABP_FrontlineInteractable_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.GetObjectiveProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::GetObjectiveProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.GetObjectiveProgress");

	ABP_FrontlineInteractable_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UpdateUIWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineInteractable_C::UpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.UpdateUIWidgets");

	ABP_FrontlineInteractable_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanHeldInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_FrontlineInteractable_C::CanHeldInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanHeldInteract");

	ABP_FrontlineInteractable_C_CanHeldInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_FrontlineInteractable_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.CanInteract");

	ABP_FrontlineInteractable_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IncrementInteractions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AController*                                 Interactor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::IncrementInteractions(class AController* Interactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.IncrementInteractions");

	ABP_FrontlineInteractable_C_IncrementInteractions_Params params;
	params.Interactor = Interactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnRep_Interactions
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineInteractable_C::OnRep_Interactions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnRep_Interactions");

	ABP_FrontlineInteractable_C_OnRep_Interactions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::EnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyLostPrerequisites");

	ABP_FrontlineInteractable_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlineInteractable_C::EnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.EnemyGainedPrerequisites");

	ABP_FrontlineInteractable_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          CapturePoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::Initialize(class ABP_CapturePoint_C* CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Initialize");

	ABP_FrontlineInteractable_C_Initialize_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Disable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::Disable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Disable");

	ABP_FrontlineInteractable_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Activate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.Activate");

	ABP_FrontlineInteractable_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInitialize");

	ABP_FrontlineInteractable_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::OnEnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyGainedPrerequisites");

	ABP_FrontlineInteractable_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::OnEnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnEnemyLostPrerequisites");

	ABP_FrontlineInteractable_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnUpdateUIWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::OnUpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnUpdateUIWidgets");

	ABP_FrontlineInteractable_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionsChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::OnInteractionsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionsChanged");

	ABP_FrontlineInteractable_C_OnInteractionsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ProgressVisualStage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::ProgressVisualStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ProgressVisualStage");

	ABP_FrontlineInteractable_C_ProgressVisualStage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnHeldInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::OnHeldInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnHeldInteractionStart");

	ABP_FrontlineInteractable_C_OnHeldInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnAnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlineInteractable_C::OnAnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlineInteractable_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.OnInteractionStart");

	ABP_FrontlineInteractable_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ExecuteUbergraph_BP_FrontlineInteractable
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlineInteractable_C::ExecuteUbergraph_BP_FrontlineInteractable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineInteractable.BP_FrontlineInteractable_C.ExecuteUbergraph_BP_FrontlineInteractable");

	ABP_FrontlineInteractable_C_ExecuteUbergraph_BP_FrontlineInteractable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
