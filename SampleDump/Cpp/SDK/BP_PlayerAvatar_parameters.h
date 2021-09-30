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

// Function BP_PlayerAvatar.BP_PlayerAvatar_C.Update
struct UBP_PlayerAvatar_C_Update_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_PlayerAvatar.BP_PlayerAvatar_C.PreConstruct
struct UBP_PlayerAvatar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PlayerAvatar.BP_PlayerAvatar_C.OnPlayerInformationReceived
struct UBP_PlayerAvatar_C_OnPlayerInformationReceived_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_PlayerAvatar.BP_PlayerAvatar_C.ExecuteUbergraph_BP_PlayerAvatar
struct UBP_PlayerAvatar_C_ExecuteUbergraph_BP_PlayerAvatar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
