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
//		Name   -> Function BP_Catapult.BP_Catapult_C.PostProcessCameraPOV
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPOV                                        InPOV                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FPOV                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor)
struct FPOV ABP_Catapult_C::PostProcessCameraPOV(const struct FPOV& InPOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.PostProcessCameraPOV");

	ABP_Catapult_C_PostProcessCameraPOV_Params params;
	params.InPOV = InPOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Catapult_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.UserConstructionScript");

	ABP_Catapult_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_5");

	ABP_Catapult_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_4");

	ABP_Catapult_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpActEvt_Fire_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult_C::InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Fire_K2Node_InputActionEvent_3");

	ABP_Catapult_C_InpActEvt_Fire_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpActEvt_Raise Catapult Arm_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult_C::InpActEvt_Raise_Catapult_Arm_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Raise Catapult Arm_K2Node_InputActionEvent_2");

	ABP_Catapult_C_InpActEvt_Raise_Catapult_Arm_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpActEvt_Lower Catapult Arm_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_Catapult_C::InpActEvt_Lower_Catapult_Arm_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpActEvt_Lower Catapult Arm_K2Node_InputActionEvent_1");

	ABP_Catapult_C_InpActEvt_Lower_Catapult_Arm_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.ReceiveUnpossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.ReceiveUnpossessed");

	ABP_Catapult_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.OnDied
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnDied");

	ABP_Catapult_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.OnCosmeticHit
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EMordhauDamageType                         DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.OnCosmeticHit");

	ABP_Catapult_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Move Right_K2Node_InputAxisEvent_21
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Move Right_K2Node_InputAxisEvent_21");

	ABP_Catapult_C_InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_36
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_36");

	ABP_Catapult_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_7
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_7");

	ABP_Catapult_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Catapult_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.ReceiveBeginPlay");

	ABP_Catapult_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Catapult.BP_Catapult_C.ExecuteUbergraph_BP_Catapult
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Catapult_C::ExecuteUbergraph_BP_Catapult(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Catapult.BP_Catapult_C.ExecuteUbergraph_BP_Catapult");

	ABP_Catapult_C_ExecuteUbergraph_BP_Catapult_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
