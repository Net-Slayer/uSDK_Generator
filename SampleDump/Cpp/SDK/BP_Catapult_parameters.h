#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Catapult.BP_Catapult_C.PostProcessCameraPOV
struct ABP_Catapult_C_PostProcessCameraPOV_Params
{
	struct FPOV                                        InPOV;                                                     // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FPOV                                        ReturnValue;                                               // 0x001C(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function BP_Catapult.BP_Catapult_C.UserConstructionScript
struct ABP_Catapult_C_UserConstructionScript_Params
{
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_5
struct ABP_Catapult_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_4
struct ABP_Catapult_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Fire_K2Node_InputActionEvent_3
struct ABP_Catapult_C_InpActEvt_Fire_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Raise Catapult Arm_K2Node_InputActionEvent_2
struct ABP_Catapult_C_InpActEvt_Raise_Catapult_Arm_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpActEvt_Lower Catapult Arm_K2Node_InputActionEvent_1
struct ABP_Catapult_C_InpActEvt_Lower_Catapult_Arm_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.ReceiveUnpossessed
struct ABP_Catapult_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.OnDied
struct ABP_Catapult_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.OnCosmeticHit
struct ABP_Catapult_C_OnCosmeticHit_Params
{
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                      Agent;                                                     // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Move Right_K2Node_InputAxisEvent_21
struct ABP_Catapult_C_InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_36
struct ABP_Catapult_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_7
struct ABP_Catapult_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Catapult.BP_Catapult_C.ReceiveBeginPlay
struct ABP_Catapult_C_ReceiveBeginPlay_Params
{
};

// Function BP_Catapult.BP_Catapult_C.ExecuteUbergraph_BP_Catapult
struct ABP_Catapult_C_ExecuteUbergraph_BP_Catapult_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
