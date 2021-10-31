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

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams
struct ABP_HordePlayerController_C_GetScaledSkillLevelParams_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bias;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentA;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentB;                                                  // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntegerA;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeA;                                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime
struct ABP_HordePlayerController_C_OnRep_NextSpecialTime_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter
struct ABP_HordePlayerController_C_OnRep_CriticalCounter_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter
struct ABP_HordePlayerController_C_OnRep_BackstabCounter_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice
struct ABP_HordePlayerController_C_GetDiscountedPrice_Params
{
	int                                                BasePrice;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiscountedPrice;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues
struct ABP_HordePlayerController_C_AssignFireArrowValues_Params
{
	class AActor*                                      Arrow;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot
struct ABP_HordePlayerController_C_TryScatterShot_Params
{
	class AMordhauProjectile*                          SourceProjectile;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock
struct ABP_HordePlayerController_C_TryFletcherRestock_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat
struct ABP_HordePlayerController_C_GetSkillLevelFloat_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkillLevel;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated
struct ABP_HordePlayerController_C_SkillsUpdated_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite
struct ABP_HordePlayerController_C_HasPrerequisite_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel
struct ABP_HordePlayerController_C_GetSkillLevel_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Level;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill
struct ABP_HordePlayerController_C_UpgradeSkill_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Success;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
struct ABP_HordePlayerController_C_CustomizeEquipment_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
struct ABP_HordePlayerController_C_OnRep_PurchaseTrigger_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_3
struct ABP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_2
struct ABP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_1
struct ABP_HordePlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay
struct ABP_HordePlayerController_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
struct ABP_HordePlayerController_C_OnAfterPossess_Params
{
	class APawn*                                       APawn;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt
struct ABP_HordePlayerController_C_OnBuilt_Params
{
	class AActor*                                      Structure;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill
struct ABP_HordePlayerController_C_RequestUpgradeSkill_Params
{
	TEnumAsByte<E_HordeSkill_E_HordeSkill>             Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveEndPlay
struct ABP_HordePlayerController_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
struct ABP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
