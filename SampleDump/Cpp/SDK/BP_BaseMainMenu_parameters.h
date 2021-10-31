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

// Function BP_BaseMainMenu.BP_BaseMainMenu_C.HideMainMenu
struct UBP_BaseMainMenu_C_HideMainMenu_Params
{
};

// Function BP_BaseMainMenu.BP_BaseMainMenu_C.ShowMainMenu
struct UBP_BaseMainMenu_C_ShowMainMenu_Params
{
	TEnumAsByte<E_ArmoryStates_E_ArmoryStates>         ArmoryState;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
