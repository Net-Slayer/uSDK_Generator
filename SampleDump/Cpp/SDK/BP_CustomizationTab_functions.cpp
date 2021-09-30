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
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.CreateSimpleItemEntries
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_CustomizationItemEntry_C*                SelectedEntry                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationTab_C::CreateSimpleItemEntries(TArray<class UClass*>* Items, int Selected, class UBP_CustomizationItemEntry_C** SelectedEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.CreateSimpleItemEntries");

	UBP_CustomizationTab_C_CreateSimpleItemEntries_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
	if (SelectedEntry != nullptr)
		*SelectedEntry = params.SelectedEntry;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.ClearCustomizationItemEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_CustomizationTab_C::ClearCustomizationItemEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.ClearCustomizationItemEntries");

	UBP_CustomizationTab_C_ClearCustomizationItemEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.GetCustomizationPlatform
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_MordhauCustomizationPlatform_C*          Platform                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationTab_C::GetCustomizationPlatform(class ABP_MordhauCustomizationPlatform_C** Platform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.GetCustomizationPlatform");

	UBP_CustomizationTab_C_GetCustomizationPlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Platform != nullptr)
		*Platform = params.Platform;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.OnCharacterDollUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationTab_C::OnCharacterDollUpdated(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.OnCharacterDollUpdated");

	UBP_CustomizationTab_C_OnCharacterDollUpdated_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.OnProfileChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationTab_C::OnProfileChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.OnProfileChanged");

	UBP_CustomizationTab_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.CompareItemEntries
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_CustomizationItemEntry_C*                A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_CustomizationItemEntry_C*                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AIsLess                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_CustomizationTab_C::CompareItemEntries(class UBP_CustomizationItemEntry_C* A, class UBP_CustomizationItemEntry_C* B, bool* AIsLess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.CompareItemEntries");

	UBP_CustomizationTab_C_CompareItemEntries_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AIsLess != nullptr)
		*AIsLess = params.AIsLess;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.SortItemEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_CustomizationTab_C::SortItemEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.SortItemEntries");

	UBP_CustomizationTab_C_SortItemEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_CustomizationTab.BP_CustomizationTab_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_CustomizationTab_C::SetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationTab.BP_CustomizationTab_C.SetActive");

	UBP_CustomizationTab_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
