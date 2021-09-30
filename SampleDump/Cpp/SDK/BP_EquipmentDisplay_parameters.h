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

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.GetVisibility_1
struct UBP_EquipmentDisplay_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Find Shield
struct UBP_EquipmentDisplay_C_Find_Shield_Params
{
	TArray<class AMordhauEquipment*>                   Equipment;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                               Found_Shield_;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Show
struct UBP_EquipmentDisplay_C_Show_Params
{
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Hide
struct UBP_EquipmentDisplay_C_Hide_Params
{
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.Tick
struct UBP_EquipmentDisplay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentDisplay.BP_EquipmentDisplay_C.ExecuteUbergraph_BP_EquipmentDisplay
struct UBP_EquipmentDisplay_C_ExecuteUbergraph_BP_EquipmentDisplay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
