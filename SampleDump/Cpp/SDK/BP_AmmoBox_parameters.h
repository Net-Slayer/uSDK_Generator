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

// Function BP_AmmoBox.BP_AmmoBox_C.CanInteract
struct ABP_AmmoBox_C_CanInteract_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_AmmoBox.BP_AmmoBox_C.UpdateWidgetVisibilityOverride
struct ABP_AmmoBox_C_UpdateWidgetVisibilityOverride_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.Restock
struct ABP_AmmoBox_C_Restock_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AmmoBox.BP_AmmoBox_C.AvailableInteractionStart
struct ABP_AmmoBox_C_AvailableInteractionStart_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AmmoBox.BP_AmmoBox_C.Deplete
struct ABP_AmmoBox_C_Deplete_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AmmoBox.BP_AmmoBox_C.Refill
struct ABP_AmmoBox_C_Refill_Params
{
};

// Function BP_AmmoBox.BP_AmmoBox_C.ExecuteUbergraph_BP_AmmoBox
struct ABP_AmmoBox_C_ExecuteUbergraph_BP_AmmoBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
