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

// Function BP_KillFeed.BP_KillFeed_C.AddEntry
struct UBP_KillFeed_C_AddEntry_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KilledBy;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Victim;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KillFeed.BP_KillFeed_C.OnMessageReceived
struct UBP_KillFeed_C_OnMessageReceived_Params
{
	class APlayerState*                                Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       KilledBy;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class APlayerState*                                Victim;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KillFeed.BP_KillFeed_C.Construct
struct UBP_KillFeed_C_Construct_Params
{
};

// Function BP_KillFeed.BP_KillFeed_C.HideAfterSomeTime
struct UBP_KillFeed_C_HideAfterSomeTime_Params
{
};

// Function BP_KillFeed.BP_KillFeed_C.HideCallback
struct UBP_KillFeed_C_HideCallback_Params
{
};

// Function BP_KillFeed.BP_KillFeed_C.ExecuteUbergraph_BP_KillFeed
struct UBP_KillFeed_C_ExecuteUbergraph_BP_KillFeed_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
