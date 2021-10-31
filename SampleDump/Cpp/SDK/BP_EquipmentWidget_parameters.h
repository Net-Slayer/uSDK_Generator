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

// Function BP_EquipmentWidget.BP_EquipmentWidget_C.GetVisibility_1
struct UBP_EquipmentWidget_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentReason
struct UBP_EquipmentWidget_C_UpdateEquipmentReason_Params
{
	struct FString                                     Reason;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_EquipmentWidget.BP_EquipmentWidget_C.UpdateEquipmentText
struct UBP_EquipmentWidget_C_UpdateEquipmentText_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Amount;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxAmount;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentWidget.BP_EquipmentWidget_C.Construct
struct UBP_EquipmentWidget_C_Construct_Params
{
};

// Function BP_EquipmentWidget.BP_EquipmentWidget_C.ExecuteUbergraph_BP_EquipmentWidget
struct UBP_EquipmentWidget_C_ExecuteUbergraph_BP_EquipmentWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
