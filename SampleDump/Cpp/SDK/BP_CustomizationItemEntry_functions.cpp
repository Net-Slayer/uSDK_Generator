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
//		Name   -> Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_CustomizationItemEntry_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.Initialize");

	UBP_CustomizationItemEntry_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnClick__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationItemEntry_C::OnClick__DelegateSignature(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnClick__DelegateSignature");

	UBP_CustomizationItemEntry_C_OnClick__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnHover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_CustomizationItemEntry_C::OnHover__DelegateSignature(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomizationItemEntry.BP_CustomizationItemEntry_C.OnHover__DelegateSignature");

	UBP_CustomizationItemEntry_C_OnHover__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
