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
//		Name   -> Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PlayHorn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_PushPlayerController_C::ShowCurrentObjective(bool PlayHorn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.ShowCurrentObjective");

	ABP_PushPlayerController_C_ShowCurrentObjective_Params params;
	params.PlayHorn = PlayHorn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       APawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushPlayerController_C::OnAfterPossess(class APawn* APawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.OnAfterPossess");

	ABP_PushPlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedKillScore
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushPlayerController_C::OnReceivedKillScore(class AMordhauCharacter* Killed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedKillScore");

	ABP_PushPlayerController_C_OnReceivedKillScore_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedAssistScore
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMordhauCharacter*                           Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushPlayerController_C::OnReceivedAssistScore(float Percentage, class AMordhauCharacter* Killed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.OnReceivedAssistScore");

	ABP_PushPlayerController_C_OnReceivedAssistScore_Params params;
	params.Percentage = Percentage;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushPlayerController_C::ExecuteUbergraph_BP_PushPlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushPlayerController.BP_PushPlayerController_C.ExecuteUbergraph_BP_PushPlayerController");

	ABP_PushPlayerController_C_ExecuteUbergraph_BP_PushPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
