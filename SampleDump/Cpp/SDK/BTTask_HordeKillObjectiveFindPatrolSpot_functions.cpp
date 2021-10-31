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
//		Name   -> Function BTTask_HordeKillObjectiveFindPatrolSpot.BTTask_HordeKillObjectiveFindPatrolSpot_C.ReceiveExecuteAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HordeKillObjectiveFindPatrolSpot_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_HordeKillObjectiveFindPatrolSpot.BTTask_HordeKillObjectiveFindPatrolSpot_C.ReceiveExecuteAI");

	UBTTask_HordeKillObjectiveFindPatrolSpot_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BTTask_HordeKillObjectiveFindPatrolSpot.BTTask_HordeKillObjectiveFindPatrolSpot_C.ExecuteUbergraph_BTTask_HordeKillObjectiveFindPatrolSpot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_HordeKillObjectiveFindPatrolSpot_C::ExecuteUbergraph_BTTask_HordeKillObjectiveFindPatrolSpot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_HordeKillObjectiveFindPatrolSpot.BTTask_HordeKillObjectiveFindPatrolSpot_C.ExecuteUbergraph_BTTask_HordeKillObjectiveFindPatrolSpot");

	UBTTask_HordeKillObjectiveFindPatrolSpot_C_ExecuteUbergraph_BTTask_HordeKillObjectiveFindPatrolSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
