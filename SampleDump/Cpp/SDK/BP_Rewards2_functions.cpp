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
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.FindProgressBarTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Next_Rank_XP                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Current_Rank_XP                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Current_XP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Earned_XP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::FindProgressBarTarget(int Next_Rank_XP, int Current_Rank_XP, int Current_XP, int Earned_XP, float* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.FindProgressBarTarget");

	UBP_Rewards2_C_FindProgressBarTarget_Params params;
	params.Next_Rank_XP = Next_Rank_XP;
	params.Current_Rank_XP = Current_Rank_XP;
	params.Current_XP = Current_XP;
	params.Earned_XP = Earned_XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.HandleRankUp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::HandleRankUp(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.HandleRankUp");

	UBP_Rewards2_C_HandleRankUp_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.XP Interpolation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Delta_Time                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::XP_Interpolation(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref, float Delta_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.XP Interpolation");

	UBP_Rewards2_C_XP_Interpolation_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.InitializeRankValues
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_CasualRankWidget_C*                      Casual_Rank_Widget_Ref                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::InitializeRankValues(class UBP_CasualRankWidget_C* Casual_Rank_Widget_Ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.InitializeRankValues");

	UBP_Rewards2_C_InitializeRankValues_Params params;
	params.Casual_Rank_Widget_Ref = Casual_Rank_Widget_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.Get_EarnedXPText_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_Rewards2_C::Get_EarnedXPText_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Get_EarnedXPText_Text_1");

	UBP_Rewards2_C_Get_EarnedXPText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.BeginXPSequence
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::BeginXPSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.BeginXPSequence");

	UBP_Rewards2_C_BeginXPSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.AddToXPBar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::AddToXPBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.AddToXPBar");

	UBP_Rewards2_C_AddToXPBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Tick");

	UBP_Rewards2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.RankUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::RankUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RankUp");

	UBP_Rewards2_C_RankUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.ExitXP
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::ExitXP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.ExitXP");

	UBP_Rewards2_C_ExitXP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.RankUpAnimDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::RankUpAnimDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RankUpAnimDone");

	UBP_Rewards2_C_RankUpAnimDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.MergeGold
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::MergeGold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.MergeGold");

	UBP_Rewards2_C_MergeGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.RequestRewards
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::RequestRewards()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RequestRewards");

	UBP_Rewards2_C_RequestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.RewardDropTimedOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::RewardDropTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RewardDropTimedOut");

	UBP_Rewards2_C_RewardDropTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Rewards2_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Construct");

	UBP_Rewards2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.OnRewardsDropped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     PlayFabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Gold                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                XP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::OnRewardsDropped(bool bWasSuccessful, const struct FString& PlayFabId, int Gold, int XP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.OnRewardsDropped");

	UBP_Rewards2_C_OnRewardsDropped_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.PlayFabId = PlayFabId;
	params.Gold = Gold;
	params.XP = XP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.Enable
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::Enable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Enable");

	UBP_Rewards2_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.BeginGoldAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::BeginGoldAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.BeginGoldAnimation");

	UBP_Rewards2_C_BeginGoldAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.Update Player Widget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::Update_Player_Widget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.Update Player Widget");

	UBP_Rewards2_C_Update_Player_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.ExecuteUbergraph_BP_Rewards2
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Rewards2_C::ExecuteUbergraph_BP_Rewards2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.ExecuteUbergraph_BP_Rewards2");

	UBP_Rewards2_C_ExecuteUbergraph_BP_Rewards2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_Rewards2.BP_Rewards2_C.RewardsComplete__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_Rewards2_C::RewardsComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rewards2.BP_Rewards2_C.RewardsComplete__DelegateSignature");

	UBP_Rewards2_C_RewardsComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
