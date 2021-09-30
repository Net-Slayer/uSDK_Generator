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

// Function BP_MapEntry.BP_MapEntry_C.SetVoteCount
struct UBP_MapEntry_C_SetVoteCount_Params
{
	struct FText                                       VoteCount;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapEntry.BP_MapEntry_C.Update
struct UBP_MapEntry_C_Update_Params
{
	struct FString                                     GameModeMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameModeMetadata*                           GameModeMetadata;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapMetadata*                                MapMetadata;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapEntry.BP_MapEntry_C.SetGameModeName
struct UBP_MapEntry_C_SetGameModeName_Params
{
	struct FText                                       GameModeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapEntry.BP_MapEntry_C.SetThumbnail
struct UBP_MapEntry_C_SetThumbnail_Params
{
	class UTexture2D*                                  Thumbnail;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapEntry.BP_MapEntry_C.SetMapName
struct UBP_MapEntry_C_SetMapName_Params
{
	struct FText                                       MapName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapEntry.BP_MapEntry_C.Deselect
struct UBP_MapEntry_C_Deselect_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.Select
struct UBP_MapEntry_C_Select_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.Construct
struct UBP_MapEntry_C_Construct_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UBP_MapEntry_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBP_MapEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBP_MapEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_MapEntry.BP_MapEntry_C.ExecuteUbergraph_BP_MapEntry
struct UBP_MapEntry_C_ExecuteUbergraph_BP_MapEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapEntry.BP_MapEntry_C.Selected__DelegateSignature
struct UBP_MapEntry_C_Selected__DelegateSignature_Params
{
	class UBP_MapEntry_C*                              Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
