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
//		Name   -> Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Header                                                     (Parm, OutParm)
void ABP_PushCharacter_C::GetOutOfBoundsText(struct FText* Header)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsText");

	ABP_PushCharacter_C_GetOutOfBoundsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Subtext                                                    (Parm, OutParm)
void ABP_PushCharacter_C::GetOutOfBoundsSubtext(struct FText* Subtext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.GetOutOfBoundsSubtext");

	ABP_PushCharacter_C_GetOutOfBoundsSubtext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Subtext != nullptr)
		*Subtext = params.Subtext;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_PushCharacter_C::OnExceededTimeOutOfBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.OnExceededTimeOutOfBounds");

	ABP_PushCharacter_C_OnExceededTimeOutOfBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PushCharacter_C::ExecuteUbergraph_BP_PushCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PushCharacter.BP_PushCharacter_C.ExecuteUbergraph_BP_PushCharacter");

	ABP_PushCharacter_C_ExecuteUbergraph_BP_PushCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
