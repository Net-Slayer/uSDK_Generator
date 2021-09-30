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

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.Update
struct UBP_PartyMembersEntry_C_Update_Params
{
	struct FPlayFabPlayer                              Player;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                Rank;                                                      // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Banner;                                                    // 0x0064(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_RankDisplayType_E_RankDisplayType>   Rank_Display_Type;                                         // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPartyLeader;                                             // 0x0069(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowKickButton;                                            // 0x006A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowPromoteButton;                                         // 0x006B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowJoinButton;                                            // 0x006C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnFailure_10991A754B7F75B1C3A772A4D170C5CE
struct UBP_PartyMembersEntry_C_OnFailure_10991A754B7F75B1C3A772A4D170C5CE_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnSuccess_10991A754B7F75B1C3A772A4D170C5CE
struct UBP_PartyMembersEntry_C_OnSuccess_10991A754B7F75B1C3A772A4D170C5CE_Params
{
	struct FServerSearchResult                         Result;                                                    // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMembersEntry_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMembersEntry_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UBP_PartyMembersEntry_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.ExecuteUbergraph_BP_PartyMembersEntry
struct UBP_PartyMembersEntry_C_ExecuteUbergraph_BP_PartyMembersEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
