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
//		Name   -> Function BP_HordeTask.BP_HordeTask_C.GetLocationTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ABP_HordeEnemy_C*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeTask_C::GetLocationTarget(class ABP_HordeEnemy_C* Character, struct FVector* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.GetLocationTarget");

	ABP_HordeTask_C_GetLocationTarget_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeTask.BP_HordeTask_C.IsTaskValidFor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ABP_HordeEnemy_C*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_HordeTask_C::IsTaskValidFor(class ABP_HordeEnemy_C* Character, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.IsTaskValidFor");

	ABP_HordeTask_C_IsTaskValidFor_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeTask.BP_HordeTask_C.TaskTriggered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_HordeEnemy_C*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeTask_C::TaskTriggered(class ABP_HordeEnemy_C* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeTask.BP_HordeTask_C.TaskTriggered");

	ABP_HordeTask_C_TaskTriggered_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
