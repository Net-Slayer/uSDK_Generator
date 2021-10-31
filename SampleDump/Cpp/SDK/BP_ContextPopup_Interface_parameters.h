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

// Function BP_ContextPopup_Interface.BP_ContextPopup_Interface_C.ClearEntries
struct UBP_ContextPopup_Interface_C_ClearEntries_Params
{
};

// Function BP_ContextPopup_Interface.BP_ContextPopup_Interface_C.AddButtonEntry
struct UBP_ContextPopup_Interface_C_AddButtonEntry_Params
{
	struct FString                                     ButtonOption;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       HoverText;                                                 // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBP_ContextPopupWrapper_Interface_C*         Wrapper;                                                   // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
