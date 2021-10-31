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
//		Name   -> Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_FrontlinePlayerController_C::InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.InpActEvt_Show Team Select_K2Node_InputActionEvent_1");

	ABP_FrontlinePlayerController_C_InpActEvt_Show_Team_Select_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.OnAfterPossess
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       APawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePlayerController_C::OnAfterPossess(class APawn* APawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.OnAfterPossess");

	ABP_FrontlinePlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.NotifyOfferedParticipation
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePlayerController_C::NotifyOfferedParticipation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.NotifyOfferedParticipation");

	ABP_FrontlinePlayerController_C_NotifyOfferedParticipation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.DeclineParticipation
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_FrontlinePlayerController_C::DeclineParticipation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.DeclineParticipation");

	ABP_FrontlinePlayerController_C_DeclineParticipation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.ExecuteUbergraph_BP_FrontlinePlayerController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FrontlinePlayerController_C::ExecuteUbergraph_BP_FrontlinePlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlinePlayerController.BP_FrontlinePlayerController_C.ExecuteUbergraph_BP_FrontlinePlayerController");

	ABP_FrontlinePlayerController_C_ExecuteUbergraph_BP_FrontlinePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
