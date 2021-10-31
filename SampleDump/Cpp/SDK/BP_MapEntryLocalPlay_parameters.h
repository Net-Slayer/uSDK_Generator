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

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Update
struct UBP_MapEntryLocalPlay_C_Update_Params
{
	struct FString                                     GameModeMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameModeMetadata*                           GameModeMetadata;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapMetadata*                                MapMetadata;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.SetThumbnail
struct UBP_MapEntryLocalPlay_C_SetThumbnail_Params
{
	class UTexture2D*                                  Thumbnail;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.SetMapName
struct UBP_MapEntryLocalPlay_C_SetMapName_Params
{
	struct FText                                       MapName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Deselect
struct UBP_MapEntryLocalPlay_C_Deselect_Params
{
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Select
struct UBP_MapEntryLocalPlay_C_Select_Params
{
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Construct
struct UBP_MapEntryLocalPlay_C_Construct_Params
{
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
struct UBP_MapEntryLocalPlay_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UBP_MapEntryLocalPlay_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UBP_MapEntryLocalPlay_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.ExecuteUbergraph_BP_MapEntryLocalPlay
struct UBP_MapEntryLocalPlay_C_ExecuteUbergraph_BP_MapEntryLocalPlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapEntryLocalPlay.BP_MapEntryLocalPlay_C.Selected__DelegateSignature
struct UBP_MapEntryLocalPlay_C_Selected__DelegateSignature_Params
{
	class UBP_MapEntryLocalPlay_C*                     Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
