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

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnRep_Value
struct ABP_SwitchInteractable_C_OnRep_Value_Params
{
};

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.ReceiveBeginPlay
struct ABP_SwitchInteractable_C_ReceiveBeginPlay_Params
{
};

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnInteractionStart
struct ABP_SwitchInteractable_C_OnInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.PreventInteraction
struct ABP_SwitchInteractable_C_PreventInteraction_Params
{
};

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.OnValueToggled
struct ABP_SwitchInteractable_C_OnValueToggled_Params
{
};

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.ToggleValue
struct ABP_SwitchInteractable_C_ToggleValue_Params
{
};

// Function BP_SwitchInteractable.BP_SwitchInteractable_C.ExecuteUbergraph_BP_SwitchInteractable
struct ABP_SwitchInteractable_C_ExecuteUbergraph_BP_SwitchInteractable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
