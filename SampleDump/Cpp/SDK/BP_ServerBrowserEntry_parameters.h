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

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.SetFavoriteServers
struct UBP_ServerBrowserEntry_C_SetFavoriteServers_Params
{
	bool                                               bAddOrRemove;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Update
struct UBP_ServerBrowserEntry_C_Update_Params
{
	struct FServerSearchResult                         Session;                                                   // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.GetServerBrowser
struct UBP_ServerBrowserEntry_C_GetServerBrowser_Params
{
	class UBP_ServerBrowser_C*                         ServerBrowser;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Select
struct UBP_ServerBrowserEntry_C_Select_Params
{
	bool                                               isSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.Construct
struct UBP_ServerBrowserEntry_C_Construct_Params
{
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowserEntry_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_386_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_ServerBrowserEntry_C_BndEvt__FavoriteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_ServerBrowserEntry.BP_ServerBrowserEntry_C.ExecuteUbergraph_BP_ServerBrowserEntry
struct UBP_ServerBrowserEntry_C_ExecuteUbergraph_BP_ServerBrowserEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
