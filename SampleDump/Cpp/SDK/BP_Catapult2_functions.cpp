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
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Catapult2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.UserConstructionScript");

	ABP_Catapult2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult2_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2");

	ABP_Catapult2_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult2_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1");

	ABP_Catapult2_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Catapult2_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.ReceiveBeginPlay");

	ABP_Catapult2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult2_C::InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_1");

	ABP_Catapult2_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult2_C::InpAxisEvt_Look_Up_K2Node_InputAxisEvent_2(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_2");

	ABP_Catapult2_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_2_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult2.BP_Catapult2_C.ExecuteUbergraph_BP_Catapult2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult2_C::ExecuteUbergraph_BP_Catapult2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult2.BP_Catapult2_C.ExecuteUbergraph_BP_Catapult2");

	ABP_Catapult2_C_ExecuteUbergraph_BP_Catapult2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
