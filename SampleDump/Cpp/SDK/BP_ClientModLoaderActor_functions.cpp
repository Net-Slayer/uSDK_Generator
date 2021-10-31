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
//		Name   -> Function BP_ClientModLoaderActor.BP_ClientModLoaderActor_C.OnLoaded_5B2C9B73462309AE96DE41AA892FC4AA
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientModLoaderActor_C::OnLoaded_5B2C9B73462309AE96DE41AA892FC4AA(class UClass* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientModLoaderActor.BP_ClientModLoaderActor_C.OnLoaded_5B2C9B73462309AE96DE41AA892FC4AA");

	ABP_ClientModLoaderActor_C_OnLoaded_5B2C9B73462309AE96DE41AA892FC4AA_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ClientModLoaderActor.BP_ClientModLoaderActor_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_ClientModLoaderActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientModLoaderActor.BP_ClientModLoaderActor_C.ReceiveBeginPlay");

	ABP_ClientModLoaderActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ClientModLoaderActor.BP_ClientModLoaderActor_C.ExecuteUbergraph_BP_ClientModLoaderActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientModLoaderActor_C::ExecuteUbergraph_BP_ClientModLoaderActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientModLoaderActor.BP_ClientModLoaderActor_C.ExecuteUbergraph_BP_ClientModLoaderActor");

	ABP_ClientModLoaderActor_C_ExecuteUbergraph_BP_ClientModLoaderActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
