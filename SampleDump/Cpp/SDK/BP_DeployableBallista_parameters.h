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

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnRep_InitialRegeneration
struct ABP_DeployableBallista_C_OnRep_InitialRegeneration_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.CanDrive
struct ABP_DeployableBallista_C_CanDrive_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.PostProcessCameraPOV
struct ABP_DeployableBallista_C_PostProcessCameraPOV_Params
{
	struct FPOV                                        InPOV;                                                     // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FPOV                                        ReturnValue;                                               // 0x001C(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.UserConstructionScript
struct ABP_DeployableBallista_C_UserConstructionScript_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Fire_K2Node_InputActionEvent_3
struct ABP_DeployableBallista_C_InpActEvt_Fire_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2
struct ABP_DeployableBallista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
struct ABP_DeployableBallista_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveBeginPlay
struct ABP_DeployableBallista_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnDied
struct ABP_DeployableBallista_C_OnDied_Params
{
	float                                              Angle;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Point;                                                     // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Source;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Agent;                                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.OnCosmeticHit
struct ABP_DeployableBallista_C_OnCosmeticHit_Params
{
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                      Agent;                                                     // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Look Up_K2Node_InputAxisEvent_19
struct ABP_DeployableBallista_C_InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.InpAxisEvt_Turn Right_K2Node_InputAxisEvent_5
struct ABP_DeployableBallista_C_InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ReceiveAnyDamage
struct ABP_DeployableBallista_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_DeployableBallista.BP_DeployableBallista_C.ExecuteUbergraph_BP_DeployableBallista
struct ABP_DeployableBallista_C_ExecuteUbergraph_BP_DeployableBallista_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
