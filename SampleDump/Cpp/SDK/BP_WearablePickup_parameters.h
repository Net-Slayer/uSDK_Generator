#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// Function BP_WearablePickup.BP_WearablePickup_C.EquipIfUpgrade
struct ABP_WearablePickup_C_EquipIfUpgrade_Params
{
	class AMordhauCharacter*                           Char;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearablePickup.BP_WearablePickup_C.Equip
struct ABP_WearablePickup_C_Equip_Params
{
	class AMordhauCharacter*                           Char;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearablePickup.BP_WearablePickup_C.IsAnUpgrade
struct ABP_WearablePickup_C_IsAnUpgrade_Params
{
	class AMordhauCharacter*                           Char;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WearablePickup.BP_WearablePickup_C.AssignToCharacter
struct ABP_WearablePickup_C_AssignToCharacter_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACustomizationReplicationActor*              CustomizatonReplicationActor;                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearablePickup.BP_WearablePickup_C.OnInteractionStart
struct ABP_WearablePickup_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WearablePickup.BP_WearablePickup_C.ReceiveBeginPlay
struct ABP_WearablePickup_C_ReceiveBeginPlay_Params
{
};

// Function BP_WearablePickup.BP_WearablePickup_C.ExecuteUbergraph_BP_WearablePickup
struct ABP_WearablePickup_C_ExecuteUbergraph_BP_WearablePickup_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
