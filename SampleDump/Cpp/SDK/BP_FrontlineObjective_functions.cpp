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
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsInObjectiveArea
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InArea                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FrontlineObjective_C::IsInObjectiveArea(const struct FVector& Location, bool* InArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsInObjectiveArea");

	UBP_FrontlineObjective_C_IsInObjectiveArea_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InArea != nullptr)
		*InArea = params.InArea;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsCompleted
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Completed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FrontlineObjective_C::IsCompleted(bool* Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.IsCompleted");

	UBP_FrontlineObjective_C_IsCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Completed != nullptr)
		*Completed = params.Completed;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnAnyObjectiveProgressChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FrontlineObjective_C::OnAnyObjectiveProgressChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnAnyObjectiveProgressChanged");

	UBP_FrontlineObjective_C_OnAnyObjectiveProgressChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FrontlineObjective_C::OnInitialize(class ABP_CapturePoint_C* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnInitialize");

	UBP_FrontlineObjective_C_OnInitialize_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FrontlineObjective_C::OnUpdateUIWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnUpdateUIWidgets");

	UBP_FrontlineObjective_C_OnUpdateUIWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FrontlineObjective_C::OnEnemyLostPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyLostPrerequisites");

	UBP_FrontlineObjective_C_OnEnemyLostPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FrontlineObjective_C::OnEnemyGainedPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.OnEnemyGainedPrerequisites");

	UBP_FrontlineObjective_C_OnEnemyGainedPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FrontlineObjective_C::GetObjectiveProgress(float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineObjective.BP_FrontlineObjective_C.GetObjectiveProgress");

	UBP_FrontlineObjective_C_GetObjectiveProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
