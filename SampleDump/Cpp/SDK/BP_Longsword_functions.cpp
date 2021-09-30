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
//		Name   -> Function BP_Longsword.BP_Longsword_C.OnLoadedChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Longsword_C::OnLoadedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Longsword.BP_Longsword_C.OnLoadedChanged");

	ABP_Longsword_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Longsword.BP_Longsword_C.ExecuteUbergraph_BP_Longsword
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Longsword_C::ExecuteUbergraph_BP_Longsword(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Longsword.BP_Longsword_C.ExecuteUbergraph_BP_Longsword");

	ABP_Longsword_C_ExecuteUbergraph_BP_Longsword_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
