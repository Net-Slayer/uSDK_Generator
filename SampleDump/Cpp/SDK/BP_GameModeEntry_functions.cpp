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
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.Get_ModeName_Text_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_GameModeEntry_C::Get_ModeName_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Get_ModeName_Text_1");

	UBP_GameModeEntry_C_Get_ModeName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_3
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_GameModeEntry_C::GetVisibility_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_3");

	UBP_GameModeEntry_C_GetVisibility_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.OnCheckStateChanged
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameModeEntry_C::OnCheckStateChanged(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.OnCheckStateChanged");

	UBP_GameModeEntry_C_OnCheckStateChanged_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.RemoveCheckboxes
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GameModeEntry_C::RemoveCheckboxes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.RemoveCheckboxes");

	UBP_GameModeEntry_C_RemoveCheckboxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.UpdatePlayerCounts
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<int>                                        PlayerCounts                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		TArray<int>                                        Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_GameModeEntry_C::UpdatePlayerCounts(TArray<int>* PlayerCounts, TArray<int>* Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.UpdatePlayerCounts");

	UBP_GameModeEntry_C_UpdatePlayerCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerCounts != nullptr)
		*PlayerCounts = params.PlayerCounts;
	if (Selected != nullptr)
		*Selected = params.Selected;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_2
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_GameModeEntry_C::GetVisibility_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_2");

	UBP_GameModeEntry_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.AddCheckbox
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Player_Count                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameModeEntry_C::AddCheckbox(int Player_Count, bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.AddCheckbox");

	UBP_GameModeEntry_C_AddCheckbox_Params params;
	params.Player_Count = Player_Count;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_GameModeEntry_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.GetVisibility_1");

	UBP_GameModeEntry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.Deselect
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GameModeEntry_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Deselect");

	UBP_GameModeEntry_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.Select
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GameModeEntry_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Select");

	UBP_GameModeEntry_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_GameModeEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.Construct");

	UBP_GameModeEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GameModeEntry_C::BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__Row_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GameModeEntry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GameModeEntry_C::BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GameModeEntry_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GameModeEntry_C::BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__InfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameModeEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.PreConstruct");

	UBP_GameModeEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameModeEntry_C::BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	UBP_GameModeEntry_C_BndEvt__BP_Checkbox_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.ExecuteUbergraph_BP_GameModeEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GameModeEntry_C::ExecuteUbergraph_BP_GameModeEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.ExecuteUbergraph_BP_GameModeEntry");

	UBP_GameModeEntry_C_ExecuteUbergraph_BP_GameModeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.OnHover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UBP_GameModeEntry_C::OnHover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.OnHover__DelegateSignature");

	UBP_GameModeEntry_C_OnHover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GameModeEntry.BP_GameModeEntry_C.SelectionChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GameModeEntry_C::SelectionChanged__DelegateSignature(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameModeEntry.BP_GameModeEntry_C.SelectionChanged__DelegateSignature");

	UBP_GameModeEntry_C_SelectionChanged__DelegateSignature_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
