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
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.RefreshAvatar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_LeaderboardEntry_C::RefreshAvatar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.RefreshAvatar");

	UBP_LeaderboardEntry_C_RefreshAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMRText_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_LeaderboardEntry_C::Get_MMRText_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMRText_ColorAndOpacity_1");

	UBP_LeaderboardEntry_C_Get_MMRText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.GetToolTipText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_LeaderboardEntry_C::GetToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.GetToolTipText_1");

	UBP_LeaderboardEntry_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLeaderboardEntry                           Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_LeaderboardEntry_C::Update(const struct FLeaderboardEntry& Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Update");

	UBP_LeaderboardEntry_C_Update_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMR_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_LeaderboardEntry_C::Get_MMR_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_MMR_Text_1");

	UBP_LeaderboardEntry_C_Get_MMR_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_Rank_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_LeaderboardEntry_C::Get_Rank_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.Get_Rank_Text_1");

	UBP_LeaderboardEntry_C_Get_Rank_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_LeaderboardEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_LeaderboardEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ContextButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Button_Index                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LeaderboardEntry_C::ContextButtonClicked(int Button_Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ContextButtonClicked");

	UBP_LeaderboardEntry_C_ContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ExecuteUbergraph_BP_LeaderboardEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_LeaderboardEntry_C::ExecuteUbergraph_BP_LeaderboardEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LeaderboardEntry.BP_LeaderboardEntry_C.ExecuteUbergraph_BP_LeaderboardEntry");

	UBP_LeaderboardEntry_C_ExecuteUbergraph_BP_LeaderboardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
