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
//		Name   -> Function BP_Crossbow.BP_Crossbow_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Crossbow_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.UserConstructionScript");

	ABP_Crossbow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crossbow.BP_Crossbow_C.OnLoadedChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Crossbow_C::OnLoadedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.OnLoadedChanged");

	ABP_Crossbow_C_OnLoadedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crossbow.BP_Crossbow_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Crossbow_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.ReceiveBeginPlay");

	ABP_Crossbow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Crossbow.BP_Crossbow_C.ExecuteUbergraph_BP_Crossbow
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Crossbow_C::ExecuteUbergraph_BP_Crossbow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Crossbow.BP_Crossbow_C.ExecuteUbergraph_BP_Crossbow");

	ABP_Crossbow_C_ExecuteUbergraph_BP_Crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
