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
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.EquipIfUpgrade
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WearablePickup_C::EquipIfUpgrade(class AMordhauCharacter* Char)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.EquipIfUpgrade");

	ABP_WearablePickup_C_EquipIfUpgrade_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.Equip
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WearablePickup_C::Equip(class AMordhauCharacter* Char)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.Equip");

	ABP_WearablePickup_C_Equip_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.IsAnUpgrade
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AMordhauCharacter*                           Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WearablePickup_C::IsAnUpgrade(class AMordhauCharacter* Char, bool* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.IsAnUpgrade");

	ABP_WearablePickup_C_IsAnUpgrade_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.AssignToCharacter
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ACustomizationReplicationActor*              CustomizatonReplicationActor                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WearablePickup_C::AssignToCharacter(class AMordhauCharacter* Character, class ACustomizationReplicationActor* CustomizatonReplicationActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.AssignToCharacter");

	ABP_WearablePickup_C_AssignToCharacter_Params params;
	params.Character = Character;
	params.CustomizatonReplicationActor = CustomizatonReplicationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.OnInteractionStart
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WearablePickup_C::OnInteractionStart(class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.OnInteractionStart");

	ABP_WearablePickup_C_OnInteractionStart_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_WearablePickup_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.ReceiveBeginPlay");

	ABP_WearablePickup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_WearablePickup.BP_WearablePickup_C.ExecuteUbergraph_BP_WearablePickup
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WearablePickup_C::ExecuteUbergraph_BP_WearablePickup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WearablePickup.BP_WearablePickup_C.ExecuteUbergraph_BP_WearablePickup");

	ABP_WearablePickup_C_ExecuteUbergraph_BP_WearablePickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
