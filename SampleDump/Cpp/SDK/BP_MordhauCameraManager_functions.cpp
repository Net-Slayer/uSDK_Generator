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
//		Name   -> Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.OnHitFlash
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bIsDirectional                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCameraManager_C::OnHitFlash(bool bIsDirectional, class AActor* Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.OnHitFlash");

	ABP_MordhauCameraManager_C_OnHitFlash_Params params;
	params.bIsDirectional = bIsDirectional;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.ExecuteUbergraph_BP_MordhauCameraManager
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCameraManager_C::ExecuteUbergraph_BP_MordhauCameraManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCameraManager.BP_MordhauCameraManager_C.ExecuteUbergraph_BP_MordhauCameraManager");

	ABP_MordhauCameraManager_C_ExecuteUbergraph_BP_MordhauCameraManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
