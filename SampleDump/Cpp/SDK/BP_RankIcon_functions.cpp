// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.GetRankIndexFromMMR
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                MMR                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Rank_Index                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RankIcon_C::GetRankIndexFromMMR(int MMR, int* Rank_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.GetRankIndexFromMMR");

	UBP_RankIcon_C_GetRankIndexFromMMR_Params params;
	params.MMR = MMR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rank_Index != nullptr)
		*Rank_Index = params.Rank_Index;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.Update Widget with Rank Index
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Rank_Index_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Image_Size                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RankIcon_C::Update_Widget_with_Rank_Index(int Rank_Index_, const struct FVector2D& Image_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.Update Widget with Rank Index");

	UBP_RankIcon_C_Update_Widget_with_Rank_Index_Params params;
	params.Rank_Index_ = Rank_Index_;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.UpdateRankIndexFromMMR
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MMR                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Rank_Index                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RankIcon_C::UpdateRankIndexFromMMR(int MMR, int* Rank_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.UpdateRankIndexFromMMR");

	UBP_RankIcon_C_UpdateRankIndexFromMMR_Params params;
	params.MMR = MMR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rank_Index != nullptr)
		*Rank_Index = params.Rank_Index;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.GetRankDivisionColorFromIndex
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Rank_Index                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSlateColor                                 Text_Color                                                 (Parm, OutParm)
void UBP_RankIcon_C::GetRankDivisionColorFromIndex(int Rank_Index, struct FSlateColor* Text_Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.GetRankDivisionColorFromIndex");

	UBP_RankIcon_C_GetRankDivisionColorFromIndex_Params params;
	params.Rank_Index = Rank_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text_Color != nullptr)
		*Text_Color = params.Text_Color;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.Update Widget with MMR
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Rank_MMR                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Image_Size                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RankIcon_C::Update_Widget_with_MMR(int Rank_MMR, const struct FVector2D& Image_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.Update Widget with MMR");

	UBP_RankIcon_C_Update_Widget_with_MMR_Params params;
	params.Rank_MMR = Rank_MMR;
	params.Image_Size = Image_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_RankIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.Construct");

	UBP_RankIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_RankIcon_C::ExecuteUbergraph_BP_RankIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RankIcon.BP_RankIcon_C.ExecuteUbergraph_BP_RankIcon");

	UBP_RankIcon_C_ExecuteUbergraph_BP_RankIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
