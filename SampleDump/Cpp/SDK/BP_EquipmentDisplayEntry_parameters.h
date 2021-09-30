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

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_SlotNumber_Text
struct UBP_EquipmentDisplayEntry_C_Get_SlotNumber_Text_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetColorAndOpacity_1
struct UBP_EquipmentDisplayEntry_C_GetColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.GetEntryTypeAndName
struct UBP_EquipmentDisplayEntry_C_GetEntryTypeAndName_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Get_EquipmentName_Text
struct UBP_EquipmentDisplayEntry_C_Get_EquipmentName_Text_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Tick
struct UBP_EquipmentDisplayEntry_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Construct
struct UBP_EquipmentDisplayEntry_C_Construct_Params
{
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.Update Prompt
struct UBP_EquipmentDisplayEntry_C_Update_Prompt_Params
{
};

// Function BP_EquipmentDisplayEntry.BP_EquipmentDisplayEntry_C.ExecuteUbergraph_BP_EquipmentDisplayEntry
struct UBP_EquipmentDisplayEntry_C_ExecuteUbergraph_BP_EquipmentDisplayEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
