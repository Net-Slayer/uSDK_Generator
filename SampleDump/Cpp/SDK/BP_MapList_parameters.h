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

// Function BP_MapList.BP_MapList_C.GetSelectedEntry
struct UBP_MapList_C_GetSelectedEntry_Params
{
	class UBP_MapEntryLocalPlay_C*                     SelectedEntry;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapList.BP_MapList_C.SelectFirstEntry
struct UBP_MapList_C_SelectFirstEntry_Params
{
};

// Function BP_MapList.BP_MapList_C.OnEntrySelected
struct UBP_MapList_C_OnEntrySelected_Params
{
	class UBP_MapEntryLocalPlay_C*                     Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapList.BP_MapList_C.AddEntry
struct UBP_MapList_C_AddEntry_Params
{
	struct FString                                     GameModeMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameModeMetadata*                           GameModeMetadata;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapMetadata*                                MapMetadata;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapList.BP_MapList_C.ClearEntries
struct UBP_MapList_C_ClearEntries_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
