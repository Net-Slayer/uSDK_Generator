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

// Function BP_MapVote.BP_MapVote_C.UpdateVoteCount
struct UBP_MapVote_C_UpdateVoteCount_Params
{
	unsigned char                                      Count;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapVote.BP_MapVote_C.OnEntrySelected
struct UBP_MapVote_C_OnEntrySelected_Params
{
	class UBP_MapEntry_C*                              Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapVote.BP_MapVote_C.AddEntry
struct UBP_MapVote_C_AddEntry_Params
{
	struct FString                                     GameModeMapName;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UGameModeMetadata*                           GameModeMetadata;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapMetadata*                                MapMetadata;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapVote.BP_MapVote_C.ClearEntries
struct UBP_MapVote_C_ClearEntries_Params
{
};

// Function BP_MapVote.BP_MapVote_C.Init
struct UBP_MapVote_C_Init_Params
{
};

// Function BP_MapVote.BP_MapVote_C.UpdateVotes
struct UBP_MapVote_C_UpdateVotes_Params
{
};

// Function BP_MapVote.BP_MapVote_C.ExecuteUbergraph_BP_MapVote
struct UBP_MapVote_C_ExecuteUbergraph_BP_MapVote_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MapVote.BP_MapVote_C.Voted__DelegateSignature
struct UBP_MapVote_C_Voted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
