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

// Function BP_KillFeedEntry.BP_KillFeedEntry_C.Setup
struct UBP_KillFeedEntry_C_Setup_Params
{
	struct FText                                       Killer;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       KilledBy;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Victim;                                                    // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                KillerColor;                                               // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                KilledColor;                                               // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
