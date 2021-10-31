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
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.Update
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPlayFabPlayer                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		int                                                Rank                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Banner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_RankDisplayType_E_RankDisplayType>   Rank_Display_Type                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsPartyLeader                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ShowKickButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ShowPromoteButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ShowJoinButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PartyMembersEntry_C::Update(const struct FPlayFabPlayer& Player, int Rank, int Banner, TEnumAsByte<E_RankDisplayType_E_RankDisplayType> Rank_Display_Type, bool IsPartyLeader, bool ShowKickButton, bool ShowPromoteButton, bool ShowJoinButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.Update");

	UBP_PartyMembersEntry_C_Update_Params params;
	params.Player = Player;
	params.Rank = Rank;
	params.Banner = Banner;
	params.Rank_Display_Type = Rank_Display_Type;
	params.IsPartyLeader = IsPartyLeader;
	params.ShowKickButton = ShowKickButton;
	params.ShowPromoteButton = ShowPromoteButton;
	params.ShowJoinButton = ShowJoinButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnFailure_10991A754B7F75B1C3A772A4D170C5CE
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_PartyMembersEntry_C::OnFailure_10991A754B7F75B1C3A772A4D170C5CE(const struct FServerSearchResult& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnFailure_10991A754B7F75B1C3A772A4D170C5CE");

	UBP_PartyMembersEntry_C_OnFailure_10991A754B7F75B1C3A772A4D170C5CE_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnSuccess_10991A754B7F75B1C3A772A4D170C5CE
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FServerSearchResult                         Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_PartyMembersEntry_C::OnSuccess_10991A754B7F75B1C3A772A4D170C5CE(const struct FServerSearchResult& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.OnSuccess_10991A754B7F75B1C3A772A4D170C5CE");

	UBP_PartyMembersEntry_C_OnSuccess_10991A754B7F75B1C3A772A4D170C5CE_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_PartyMembersEntry_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMembersEntry_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_PartyMembersEntry_C::BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMembersEntry_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_PartyMembersEntry_C::BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UBP_PartyMembersEntry_C_BndEvt__JoinButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.ExecuteUbergraph_BP_PartyMembersEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PartyMembersEntry_C::ExecuteUbergraph_BP_PartyMembersEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PartyMembersEntry.BP_PartyMembersEntry_C.ExecuteUbergraph_BP_PartyMembersEntry");

	UBP_PartyMembersEntry_C_ExecuteUbergraph_BP_PartyMembersEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
