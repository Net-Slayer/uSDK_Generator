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
//		Name   -> Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Flash
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_KilledByPanelArmorEntry_C::Flash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Flash");

	UBP_KilledByPanelArmorEntry_C_Flash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.SetArmorClass
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewArmorClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanelArmorEntry_C::SetArmorClass(int NewArmorClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.SetArmorClass");

	UBP_KilledByPanelArmorEntry_C_SetArmorClass_Params params;
	params.NewArmorClass = NewArmorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_KilledByPanelArmorEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.Construct");

	UBP_KilledByPanelArmorEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.ExecuteUbergraph_BP_KilledByPanelArmorEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_KilledByPanelArmorEntry_C::ExecuteUbergraph_BP_KilledByPanelArmorEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_KilledByPanelArmorEntry.BP_KilledByPanelArmorEntry_C.ExecuteUbergraph_BP_KilledByPanelArmorEntry");

	UBP_KilledByPanelArmorEntry_C_ExecuteUbergraph_BP_KilledByPanelArmorEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
