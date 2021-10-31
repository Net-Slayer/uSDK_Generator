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

// Function BP_HordePurchasable.BP_HordePurchasable_C.UpdateVisuals
struct ABP_HordePurchasable_C_UpdateVisuals_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.InitializeDisplay
struct ABP_HordePurchasable_C_InitializeDisplay_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.SpawnItem
struct ABP_HordePurchasable_C_SpawnItem_Params
{
	class ABP_BattleRoyaleCharacter_C*                 ForCharacter;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.SetAvailability
struct ABP_HordePurchasable_C_SetAvailability_Params
{
	bool                                               NewAvailable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.CanInteract
struct ABP_HordePurchasable_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.ReceiveBeginPlay
struct ABP_HordePurchasable_C_ReceiveBeginPlay_Params
{
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.OnInteractionStart
struct ABP_HordePurchasable_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HordePurchasable.BP_HordePurchasable_C.ExecuteUbergraph_BP_HordePurchasable
struct ABP_HordePurchasable_C_ExecuteUbergraph_BP_HordePurchasable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
