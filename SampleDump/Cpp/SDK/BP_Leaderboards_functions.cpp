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
//		Name   -> Function BP_Leaderboards.BP_Leaderboards_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Leaderboards_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Update");

	UBP_Leaderboards_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Leaderboards.BP_Leaderboards_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Leaderboards_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Tick");

	UBP_Leaderboards_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Leaderboards.BP_Leaderboards_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Leaderboards_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.Construct");

	UBP_Leaderboards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Leaderboards.BP_Leaderboards_C.OnGetLeaderboardComplete
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     LeaderboardName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FLeaderboardEntry>                   Entries                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FLeaderboardEntry                           SelfEntry                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_Leaderboards_C::OnGetLeaderboardComplete(bool bWasSuccessful, const struct FString& LeaderboardName, TArray<struct FLeaderboardEntry> Entries, const struct FLeaderboardEntry& SelfEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.OnGetLeaderboardComplete");

	UBP_Leaderboards_C_OnGetLeaderboardComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LeaderboardName = LeaderboardName;
	params.Entries = Entries;
	params.SelfEntry = SelfEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Leaderboards_C::ExecuteUbergraph_BP_Leaderboards(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Leaderboards.BP_Leaderboards_C.ExecuteUbergraph_BP_Leaderboards");

	UBP_Leaderboards_C_ExecuteUbergraph_BP_Leaderboards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
