// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PlayerWidget.BP_PlayerWidget_C.Update
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		int                                                Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_RankDisplayType_E_RankDisplayType>   Rank_Display_Type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PlayerWidget_C::Update(const struct FPlayFabPlayer& Player, int Rank, int Banner, TEnumAsByte<E_RankDisplayType_E_RankDisplayType> Rank_Display_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PlayerWidget.BP_PlayerWidget_C.Update");

	UBP_PlayerWidget_C_Update_Params params;
	params.Player = Player;
	params.Rank = Rank;
	params.Banner = Banner;
	params.Rank_Display_Type = Rank_Display_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
