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
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.AddSpawnScreenPoint
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          InCapturePoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ABP_DeployableSpawn_C*                       InDeployableSpawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_SpawnScreenPoint_C*                      NewPoint                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FrontlineSpawnScreen_C::AddSpawnScreenPoint(class ABP_CapturePoint_C* InCapturePoint, class ABP_DeployableSpawn_C* InDeployableSpawn, class UBP_SpawnScreenPoint_C** NewPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.AddSpawnScreenPoint");

	UBP_FrontlineSpawnScreen_C_AddSpawnScreenPoint_Params params;
	params.InCapturePoint = InCapturePoint;
	params.InDeployableSpawn = InDeployableSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewPoint != nullptr)
		*NewPoint = params.NewPoint;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ShowFrontlineSpawnScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_FrontlineSpawnScreen_C::ShowFrontlineSpawnScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ShowFrontlineSpawnScreen");

	UBP_FrontlineSpawnScreen_C_ShowFrontlineSpawnScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FrontlineSpawnScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Tick");

	UBP_FrontlineSpawnScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_FrontlineSpawnScreen_C::BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_FrontlineSpawnScreen_C_BndEvt__ChangeLoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FrontlineSpawnScreen_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show");

	UBP_FrontlineSpawnScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_FrontlineSpawnScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Construct");

	UBP_FrontlineSpawnScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show Loadout Selection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FrontlineSpawnScreen_C::Show_Loadout_Selection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.Show Loadout Selection");

	UBP_FrontlineSpawnScreen_C_Show_Loadout_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ExecuteUbergraph_BP_FrontlineSpawnScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FrontlineSpawnScreen_C::ExecuteUbergraph_BP_FrontlineSpawnScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FrontlineSpawnScreen.BP_FrontlineSpawnScreen_C.ExecuteUbergraph_BP_FrontlineSpawnScreen");

	UBP_FrontlineSpawnScreen_C_ExecuteUbergraph_BP_FrontlineSpawnScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
