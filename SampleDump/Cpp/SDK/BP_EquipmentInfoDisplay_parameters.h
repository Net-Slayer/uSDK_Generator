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

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_2
struct UBP_EquipmentInfoDisplay_C_GetText_2_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetVisibility_1
struct UBP_EquipmentInfoDisplay_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.GetText_1
struct UBP_EquipmentInfoDisplay_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.Construct
struct UBP_EquipmentInfoDisplay_C_Construct_Params
{
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.OnRestockedAmmo
struct UBP_EquipmentInfoDisplay_C_OnRestockedAmmo_Params
{
	class AMordhauEquipment*                           Equipment;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.On AddAmmoAnim Finish
struct UBP_EquipmentInfoDisplay_C_On_AddAmmoAnim_Finish_Params
{
};

// Function BP_EquipmentInfoDisplay.BP_EquipmentInfoDisplay_C.ExecuteUbergraph_BP_EquipmentInfoDisplay
struct UBP_EquipmentInfoDisplay_C_ExecuteUbergraph_BP_EquipmentInfoDisplay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
