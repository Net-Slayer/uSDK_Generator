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
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.MarkSeen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GenericItemEntry_C::MarkSeen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.MarkSeen");

	UBP_GenericItemEntry_C_MarkSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetWasSeen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               WasSeen                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_GenericItemEntry_C::GetWasSeen(bool* WasSeen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetWasSeen");

	UBP_GenericItemEntry_C_GetWasSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasSeen != nullptr)
		*WasSeen = params.WasSeen;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipmentSkin
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GenericItemEntry_C::InitializeFromEquipmentSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipmentSkin");

	UBP_GenericItemEntry_C_InitializeFromEquipmentSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetItemToUnlock
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ItemNeeded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GenericItemEntry_C::GetItemToUnlock(int* ItemNeeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetItemToUnlock");

	UBP_GenericItemEntry_C_GetItemToUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemNeeded != nullptr)
		*ItemNeeded = params.ItemNeeded;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GenericItemEntry_C::InitializeFromItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromItem");

	UBP_GenericItemEntry_C_InitializeFromItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromWearable
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GenericItemEntry_C::InitializeFromWearable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromWearable");

	UBP_GenericItemEntry_C_InitializeFromWearable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromNothing
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_GenericItemEntry_C::InitializeFromNothing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromNothing");

	UBP_GenericItemEntry_C_InitializeFromNothing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipment
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_GenericItemEntry_C::InitializeFromEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.InitializeFromEquipment");

	UBP_GenericItemEntry_C_InitializeFromEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetRemoveIconBoxVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_GenericItemEntry_C::GetRemoveIconBoxVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.GetRemoveIconBoxVisibility");

	UBP_GenericItemEntry_C_GetRemoveIconBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ToolTipText_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_GenericItemEntry_C::Get_CostText_ToolTipText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ToolTipText_1");

	UBP_GenericItemEntry_C_Get_CostText_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_GenericItemEntry_C::Get_CostText_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_CostText_ColorAndOpacity_1");

	UBP_GenericItemEntry_C_Get_CostText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_NameText_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UBP_GenericItemEntry_C::Get_NameText_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Get_NameText_ColorAndOpacity_1");

	UBP_GenericItemEntry_C_Get_NameText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GenericItemEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	UBP_GenericItemEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_GenericItemEntry_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.Initialize");

	UBP_GenericItemEntry_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GenericItemEntry_C::BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature");

	UBP_GenericItemEntry_C_BndEvt__Button_512_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.RequestUnlock
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_GenericItemEntry_C::RequestUnlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.RequestUnlock");

	UBP_GenericItemEntry_C_RequestUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_GenericItemEntry_C::PurchaseConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseConfirm");

	UBP_GenericItemEntry_C_PurchaseConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_GenericItemEntry_C::PurchaseCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.PurchaseCancel");

	UBP_GenericItemEntry_C_PurchaseCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.ItemsUnlocked
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FItemStack>                          ItemStacks                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UBP_GenericItemEntry_C::ItemsUnlocked(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.ItemsUnlocked");

	UBP_GenericItemEntry_C_ItemsUnlocked_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.ItemStacks = ItemStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_GenericItemEntry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UBP_GenericItemEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_GenericItemEntry.BP_GenericItemEntry_C.ExecuteUbergraph_BP_GenericItemEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_GenericItemEntry_C::ExecuteUbergraph_BP_GenericItemEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GenericItemEntry.BP_GenericItemEntry_C.ExecuteUbergraph_BP_GenericItemEntry");

	UBP_GenericItemEntry_C_ExecuteUbergraph_BP_GenericItemEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
