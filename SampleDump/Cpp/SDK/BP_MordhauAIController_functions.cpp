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
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      FilterClass                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauAIController_C::GetTeamFilterClass(class UClass** FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.GetTeamFilterClass");

	ABP_MordhauAIController_C_GetTeamFilterClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FilterClass != nullptr)
		*FilterClass = params.FilterClass;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.ReceivePossess
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauAIController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.ReceivePossess");

	ABP_MordhauAIController_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.OnAfterUnPossess
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_MordhauAIController_C::OnAfterUnPossess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnAfterUnPossess");

	ABP_MordhauAIController_C_OnAfterUnPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MordhauAIController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.ReceiveBeginPlay");

	ABP_MordhauAIController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          PerceivedCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPerceptionInfo                             PerceptionInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void ABP_MordhauAIController_C::OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnStartedPerceivingCharacter");

	ABP_MordhauAIController_C_OnStartedPerceivingCharacter_Params params;
	params.PerceivedCharacter = PerceivedCharacter;
	params.PerceptionInfo = PerceptionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AAdvancedCharacter*                          PerceivedCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPerceptionInfo                             PerceptionInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void ABP_MordhauAIController_C::OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.OnStoppedPerceivingCharacter");

	ABP_MordhauAIController_C_OnStoppedPerceivingCharacter_Params params;
	params.PerceivedCharacter = PerceivedCharacter;
	params.PerceptionInfo = PerceptionInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauAIController_C::ExecuteUbergraph_BP_MordhauAIController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauAIController.BP_MordhauAIController_C.ExecuteUbergraph_BP_MordhauAIController");

	ABP_MordhauAIController_C_ExecuteUbergraph_BP_MordhauAIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
