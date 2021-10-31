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
//		Name   -> Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Disable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpawn_C::Disable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Disable");

	ABP_ItemDeliverySpawn_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Activate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_ItemDeliverySpawn_C::Activate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.Activate");

	ABP_ItemDeliverySpawn_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.CanInteract
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_ItemDeliverySpawn_C::CanInteract(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.CanInteract");

	ABP_ItemDeliverySpawn_C_CanInteract_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemDeliverySpawn_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.OnInteractionStart");

	ABP_ItemDeliverySpawn_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.ExecuteUbergraph_BP_ItemDeliverySpawn
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemDeliverySpawn_C::ExecuteUbergraph_BP_ItemDeliverySpawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemDeliverySpawn.BP_ItemDeliverySpawn_C.ExecuteUbergraph_BP_ItemDeliverySpawn");

	ABP_ItemDeliverySpawn_C_ExecuteUbergraph_BP_ItemDeliverySpawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
