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

// Function BP_RankIcon.BP_RankIcon_C.GetRankIndexFromMMR
struct UBP_RankIcon_C_GetRankIndexFromMMR_Params
{
	int                                                MMR;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rank_Index;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RankIcon.BP_RankIcon_C.Update Widget with Rank Index
struct UBP_RankIcon_C_Update_Widget_with_Rank_Index_Params
{
	int                                                Rank_Index_;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Image_Size;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RankIcon.BP_RankIcon_C.UpdateRankIndexFromMMR
struct UBP_RankIcon_C_UpdateRankIndexFromMMR_Params
{
	int                                                MMR;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Rank_Index;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RankIcon.BP_RankIcon_C.GetRankDivisionColorFromIndex
struct UBP_RankIcon_C_GetRankDivisionColorFromIndex_Params
{
	int                                                Rank_Index;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Text_Color;                                                // 0x0008(0x0028)  (Parm, OutParm)
};

// Function BP_RankIcon.BP_RankIcon_C.Update Widget with MMR
struct UBP_RankIcon_C_Update_Widget_with_MMR_Params
{
	int                                                Rank_MMR;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Image_Size;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_RankIcon.BP_RankIcon_C.Construct
struct UBP_RankIcon_C_Construct_Params
{
};

// Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon
struct UBP_RankIcon_C_ExecuteUbergraph_BP_RankIcon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
