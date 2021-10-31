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
//		Name   -> Function BP_ReviveIcon.BP_ReviveIcon_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isAvailable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ReviveIcon_C::Update(bool isAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReviveIcon.BP_ReviveIcon_C.Update");

	UBP_ReviveIcon_C_Update_Params params;
	params.isAvailable = isAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ReviveIcon.BP_ReviveIcon_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ReviveIcon_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReviveIcon.BP_ReviveIcon_C.Construct");

	UBP_ReviveIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ReviveIcon.BP_ReviveIcon_C.ExecuteUbergraph_BP_ReviveIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ReviveIcon_C::ExecuteUbergraph_BP_ReviveIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ReviveIcon.BP_ReviveIcon_C.ExecuteUbergraph_BP_ReviveIcon");

	UBP_ReviveIcon_C_ExecuteUbergraph_BP_ReviveIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
