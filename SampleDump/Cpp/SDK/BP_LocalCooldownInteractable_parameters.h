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

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.UpdateValue
struct ABP_LocalCooldownInteractable_C_UpdateValue_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.CanInteract
struct ABP_LocalCooldownInteractable_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.OnInteractionStart
struct ABP_LocalCooldownInteractable_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.AvailableInteractionStart
struct ABP_LocalCooldownInteractable_C_AvailableInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.NotAvailableInteractionStart
struct ABP_LocalCooldownInteractable_C_NotAvailableInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Depleted
struct ABP_LocalCooldownInteractable_C_Depleted_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Refilled
struct ABP_LocalCooldownInteractable_C_Refilled_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.Deplete
struct ABP_LocalCooldownInteractable_C_Deplete_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.PopCooldown
struct ABP_LocalCooldownInteractable_C_PopCooldown_Params
{
};

// Function BP_LocalCooldownInteractable.BP_LocalCooldownInteractable_C.ExecuteUbergraph_BP_LocalCooldownInteractable
struct ABP_LocalCooldownInteractable_C_ExecuteUbergraph_BP_LocalCooldownInteractable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
