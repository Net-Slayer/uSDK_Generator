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
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.IsInObjectiveArea
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlinePushable_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.IsInObjectiveArea");

	ABP_FrontlinePushable_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.IsCompleted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FrontlinePushable_C::IsCompleted(bool* Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.IsCompleted");

	ABP_FrontlinePushable_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.GetObjectiveProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePushable_C::GetObjectiveProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.GetObjectiveProgress");

	ABP_FrontlinePushable_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.UpdateUIWidgets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlinePushable_C::UpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.UpdateUIWidgets");

	ABP_FrontlinePushable_C_UpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePushable_C::EnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyLostPrerequisites");

	ABP_FrontlinePushable_C_EnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FrontlinePushable_C::EnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.EnemyGainedPrerequisites");

	ABP_FrontlinePushable_C_EnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          CapturePoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePushable_C::Initialize(class ABP_CapturePoint_C* CapturePoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.Initialize");

	ABP_FrontlinePushable_C_Initialize_Params params;
	params.CapturePoint = CapturePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnProgressUpdated
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              OldProgress                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePushable_C::OnProgressUpdated(float OldProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnProgressUpdated");

	ABP_FrontlinePushable_C_OnProgressUpdated_Params params;
	params.OldProgress = OldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePushable_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnInitialize");

	ABP_FrontlinePushable_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePushable_C::OnEnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyLostPrerequisites");

	ABP_FrontlinePushable_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePushable_C::OnEnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnEnemyGainedPrerequisites");

	ABP_FrontlinePushable_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnUpdateUIWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePushable_C::OnUpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnUpdateUIWidgets");

	ABP_FrontlinePushable_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.PushableArrivedAtDestination
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePushable_C::PushableArrivedAtDestination()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.PushableArrivedAtDestination");

	ABP_FrontlinePushable_C_PushableArrivedAtDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnAnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePushable_C::OnAnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.OnAnyObjectiveProgressChanged");

	ABP_FrontlinePushable_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePushable.BP_FrontlinePushable_C.ExecuteUbergraph_BP_FrontlinePushable
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePushable_C::ExecuteUbergraph_BP_FrontlinePushable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePushable.BP_FrontlinePushable_C.ExecuteUbergraph_BP_FrontlinePushable");

	ABP_FrontlinePushable_C_ExecuteUbergraph_BP_FrontlinePushable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
