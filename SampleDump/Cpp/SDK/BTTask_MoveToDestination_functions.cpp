// Name: Mordhau, Version: 4_25_hotfix

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
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.GetFilterClass
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UClass*                                      FilterClass                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::GetFilterClass(class UClass** FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.GetFilterClass");

	UBTTask_MoveToDestination_C_GetFilterClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FilterClass != nullptr)
		*FilterClass = params.FilterClass;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.KeepMoving
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bKeepMoving                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_MoveToDestination_C::KeepMoving(bool* bKeepMoving)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.KeepMoving");

	UBTTask_MoveToDestination_C_KeepMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bKeepMoving != nullptr)
		*bKeepMoving = params.bKeepMoving;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ClearTarget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBTTask_MoveToDestination_C::ClearTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ClearTarget");

	UBTTask_MoveToDestination_C_ClearTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.GetTargetLoc
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::GetTargetLoc(struct FVector* TargetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.GetTargetLoc");

	UBTTask_MoveToDestination_C_GetTargetLoc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ResetTimeAndDistance
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBTTask_MoveToDestination_C::ResetTimeAndDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ResetTimeAndDistance");

	UBTTask_MoveToDestination_C_ResetTimeAndDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.Init
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::Init(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.Init");

	UBTTask_MoveToDestination_C_Init_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.SetPath
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBTTask_MoveToDestination_C::SetPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.SetPath");

	UBTTask_MoveToDestination_C_SetPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveTickAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveTickAI");

	UBTTask_MoveToDestination_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveAbortAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveAbortAI");

	UBTTask_MoveToDestination_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveExecuteAI");

	UBTTask_MoveToDestination_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ExecuteUbergraph_BTTask_MoveToDestination
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveToDestination_C::ExecuteUbergraph_BTTask_MoveToDestination(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ExecuteUbergraph_BTTask_MoveToDestination");

	UBTTask_MoveToDestination_C_ExecuteUbergraph_BTTask_MoveToDestination_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
