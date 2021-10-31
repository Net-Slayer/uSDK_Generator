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
//		Name   -> Function BP_HordeSpectator.BP_HordeSpectator_C.GetGrave
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_HordePlayerGrave_C*                      Grave                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeSpectator_C::GetGrave(class ABP_HordePlayerGrave_C** Grave)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpectator.BP_HordeSpectator_C.GetGrave");

	ABP_HordeSpectator_C_GetGrave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Grave != nullptr)
		*Grave = params.Grave;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpectator.BP_HordeSpectator_C.InpActEvt_Primary Spectator Action_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HordeSpectator_C::InpActEvt_Primary_Spectator_Action_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpectator.BP_HordeSpectator_C.InpActEvt_Primary Spectator Action_K2Node_InputActionEvent_3");

	ABP_HordeSpectator_C_InpActEvt_Primary_Spectator_Action_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpectator.BP_HordeSpectator_C.InpActEvt_Secondary Spectator Action_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HordeSpectator_C::InpActEvt_Secondary_Spectator_Action_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpectator.BP_HordeSpectator_C.InpActEvt_Secondary Spectator Action_K2Node_InputActionEvent_2");

	ABP_HordeSpectator_C_InpActEvt_Secondary_Spectator_Action_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpectator.BP_HordeSpectator_C.InpActEvt_Tertiary Spectator Action_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_HordeSpectator_C::InpActEvt_Tertiary_Spectator_Action_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpectator.BP_HordeSpectator_C.InpActEvt_Tertiary Spectator Action_K2Node_InputActionEvent_1");

	ABP_HordeSpectator_C_InpActEvt_Tertiary_Spectator_Action_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpectator.BP_HordeSpectator_C.SwitchToFreeCam
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_HordeSpectator_C::SwitchToFreeCam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpectator.BP_HordeSpectator_C.SwitchToFreeCam");

	ABP_HordeSpectator_C_SwitchToFreeCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_HordeSpectator.BP_HordeSpectator_C.ExecuteUbergraph_BP_HordeSpectator
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_HordeSpectator_C::ExecuteUbergraph_BP_HordeSpectator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HordeSpectator.BP_HordeSpectator_C.ExecuteUbergraph_BP_HordeSpectator");

	ABP_HordeSpectator_C_ExecuteUbergraph_BP_HordeSpectator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
