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

// Function BP_ContextPopup.BP_ContextPopup_C.Clear Entries
struct UBP_ContextPopup_C_Clear_Entries_Params
{
};

// Function BP_ContextPopup.BP_ContextPopup_C.Add Button Entry
struct UBP_ContextPopup_C_Add_Button_Entry_Params
{
	struct FText                                       ButtonLabel;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                ButtonIndex;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Hover_Text;                                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
