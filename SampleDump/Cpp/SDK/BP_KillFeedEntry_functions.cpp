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
//		Name   -> Function BP_KillFeedEntry.BP_KillFeedEntry_C.Setup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       KilledBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                KillerColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                KilledColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KillFeedEntry_C::Setup(const struct FText& Killer, const struct FText& KilledBy, const struct FText& Victim, const struct FLinearColor& KillerColor, const struct FLinearColor& KilledColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeedEntry.BP_KillFeedEntry_C.Setup");

	UBP_KillFeedEntry_C_Setup_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;
	params.KillerColor = KillerColor;
	params.KilledColor = KilledColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
