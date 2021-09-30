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

// Function BP_Bow.BP_Bow_C.OnRep_FireArrows
struct ABP_Bow_C_OnRep_FireArrows_Params
{
};

// Function BP_Bow.BP_Bow_C.ClearFireEffects
struct ABP_Bow_C_ClearFireEffects_Params
{
};

// Function BP_Bow.BP_Bow_C.GetUsesFireArrows
struct ABP_Bow_C_GetUsesFireArrows_Params
{
	bool                                               UsesFireArrows;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Bow.BP_Bow_C.SetUseFireArrows
struct ABP_Bow_C_SetUseFireArrows_Params
{
	bool                                               UseFire;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Bow.BP_Bow_C.OnLoadedChanged
struct ABP_Bow_C_OnLoadedChanged_Params
{
};

// Function BP_Bow.BP_Bow_C.ReceiveBeginPlay
struct ABP_Bow_C_ReceiveBeginPlay_Params
{
};

// Function BP_Bow.BP_Bow_C.UpdateEquipmentVisualState
struct ABP_Bow_C_UpdateEquipmentVisualState_Params
{
};

// Function BP_Bow.BP_Bow_C.ReceiveDestroyed
struct ABP_Bow_C_ReceiveDestroyed_Params
{
};

// Function BP_Bow.BP_Bow_C.ExecuteUbergraph_BP_Bow
struct ABP_Bow_C_ExecuteUbergraph_BP_Bow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
