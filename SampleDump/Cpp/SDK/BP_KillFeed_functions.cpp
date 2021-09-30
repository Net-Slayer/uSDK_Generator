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
//		Name   -> Function BP_KillFeed.BP_KillFeed_C.AddEntry
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KilledBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class APlayerState*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KillFeed_C::AddEntry(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.AddEntry");

	UBP_KillFeed_C_AddEntry_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KillFeed.BP_KillFeed_C.OnMessageReceived
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerState*                                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       KilledBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class APlayerState*                                Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KillFeed_C::OnMessageReceived(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.OnMessageReceived");

	UBP_KillFeed_C_OnMessageReceived_Params params;
	params.Killer = Killer;
	params.KilledBy = KilledBy;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KillFeed.BP_KillFeed_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_KillFeed_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.Construct");

	UBP_KillFeed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KillFeed.BP_KillFeed_C.HideAfterSomeTime
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KillFeed_C::HideAfterSomeTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.HideAfterSomeTime");

	UBP_KillFeed_C_HideAfterSomeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KillFeed.BP_KillFeed_C.HideCallback
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_KillFeed_C::HideCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.HideCallback");

	UBP_KillFeed_C_HideCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KillFeed.BP_KillFeed_C.ExecuteUbergraph_BP_KillFeed
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KillFeed_C::ExecuteUbergraph_BP_KillFeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KillFeed.BP_KillFeed_C.ExecuteUbergraph_BP_KillFeed");

	UBP_KillFeed_C_ExecuteUbergraph_BP_KillFeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
