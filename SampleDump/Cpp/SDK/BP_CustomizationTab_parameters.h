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

// Function BP_CustomizationTab.BP_CustomizationTab_C.CreateSimpleItemEntries
struct UBP_CustomizationTab_C_CreateSimpleItemEntries_Params
{
	TArray<class UClass*>                              Items;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                Selected;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CustomizationItemEntry_C*                SelectedEntry;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.ClearCustomizationItemEntries
struct UBP_CustomizationTab_C_ClearCustomizationItemEntries_Params
{
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.GetCustomizationPlatform
struct UBP_CustomizationTab_C_GetCustomizationPlatform_Params
{
	class ABP_MordhauCustomizationPlatform_C*          Platform;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.OnCharacterDollUpdated
struct UBP_CustomizationTab_C_OnCharacterDollUpdated_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.OnProfileChanged
struct UBP_CustomizationTab_C_OnProfileChanged_Params
{
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.CompareItemEntries
struct UBP_CustomizationTab_C_CompareItemEntries_Params
{
	class UBP_CustomizationItemEntry_C*                A;                                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CustomizationItemEntry_C*                B;                                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AIsLess;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.SortItemEntries
struct UBP_CustomizationTab_C_SortItemEntries_Params
{
};

// Function BP_CustomizationTab.BP_CustomizationTab_C.SetActive
struct UBP_CustomizationTab_C_SetActive_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
