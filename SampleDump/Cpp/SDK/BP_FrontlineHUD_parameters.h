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

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowObjectives
struct ABP_FrontlineHUD_C_ShowObjectives_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ReceiveBeginPlay
struct ABP_FrontlineHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseMinimalHUD
struct ABP_FrontlineHUD_C_UseMinimalHUD_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.UseFullHUD
struct ABP_FrontlineHUD_C_UseFullHUD_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.OnGameStateReplicated
struct ABP_FrontlineHUD_C_OnGameStateReplicated_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.HideMainMenu
struct ABP_FrontlineHUD_C_HideMainMenu_Params
{
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ShowMainMenu
struct ABP_FrontlineHUD_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         Armory_State;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FrontlineHUD.BP_FrontlineHUD_C.ExecuteUbergraph_BP_FrontlineHUD
struct ABP_FrontlineHUD_C_ExecuteUbergraph_BP_FrontlineHUD_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
