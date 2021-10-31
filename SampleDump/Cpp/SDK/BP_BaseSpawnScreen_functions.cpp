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
//		Name   -> Function BP_BaseSpawnScreen.BP_BaseSpawnScreen_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_BaseSpawnScreen_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseSpawnScreen.BP_BaseSpawnScreen_C.Hide");

	UBP_BaseSpawnScreen_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_BaseSpawnScreen.BP_BaseSpawnScreen_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_BaseSpawnScreen_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BaseSpawnScreen.BP_BaseSpawnScreen_C.Show");

	UBP_BaseSpawnScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
