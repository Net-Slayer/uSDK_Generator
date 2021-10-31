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

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Disable
struct ABP_ItemDeliverySpawn_C_Disable_Params
{
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Activate
struct ABP_ItemDeliverySpawn_C_Activate_Params
{
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.CanInteract
struct ABP_ItemDeliverySpawn_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.OnInteractionStart
struct ABP_ItemDeliverySpawn_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.ExecuteUbergraph_BP_ItemDeliverySpawn
struct ABP_ItemDeliverySpawn_C_ExecuteUbergraph_BP_ItemDeliverySpawn_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
