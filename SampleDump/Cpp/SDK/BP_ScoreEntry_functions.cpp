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
//		Name   -> Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ScoreEntry_C::UpdatePointsText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.UpdatePointsText");

	UBP_ScoreEntry_C_UpdatePointsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              StartingPoints                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     InPlayerName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       InLabel                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UBP_ScoreFeed_C*                             InScoreFeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreEntry_C::Initialize(float StartingPoints, const struct FString& InPlayerName, const struct FText& InLabel, class UBP_ScoreFeed_C* InScoreFeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.Initialize");

	UBP_ScoreEntry_C_Initialize_Params params;
	params.StartingPoints = StartingPoints;
	params.InPlayerName = InPlayerName;
	params.InLabel = InLabel;
	params.InScoreFeed = InScoreFeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InPoints                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreEntry_C::AddPoints(float InPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.AddPoints");

	UBP_ScoreEntry_C_AddPoints_Params params;
	params.InPoints = InPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ScoreEntry.BP_ScoreEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UBP_ScoreEntry_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");

	UBP_ScoreEntry_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ScoreEntry_C::ExecuteUbergraph_BP_ScoreEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ScoreEntry.BP_ScoreEntry_C.ExecuteUbergraph_BP_ScoreEntry");

	UBP_ScoreEntry_C_ExecuteUbergraph_BP_ScoreEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
