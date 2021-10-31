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
//		Name   -> Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_3_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_VoteKickMenu_C::Get_TextBlock_3_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_3_Text_1");

	UBP_VoteKickMenu_C_Get_TextBlock_3_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_0_Text_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UBP_VoteKickMenu_C::Get_TextBlock_0_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Get_TextBlock_0_Text_1");

	UBP_VoteKickMenu_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoteKickMenu.BP_VoteKickMenu_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_VoteKickMenu_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Hide");

	UBP_VoteKickMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoteKickMenu.BP_VoteKickMenu_C.Show
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_VoteKickMenu_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Show");

	UBP_VoteKickMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoteKickMenu.BP_VoteKickMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_VoteKickMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.Construct");

	UBP_VoteKickMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VoteKickMenu.BP_VoteKickMenu_C.ExecuteUbergraph_BP_VoteKickMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VoteKickMenu_C::ExecuteUbergraph_BP_VoteKickMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VoteKickMenu.BP_VoteKickMenu_C.ExecuteUbergraph_BP_VoteKickMenu");

	UBP_VoteKickMenu_C_ExecuteUbergraph_BP_VoteKickMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
