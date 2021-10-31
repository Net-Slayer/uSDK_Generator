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
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.UpdateScreenPosition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreenPoint_C::UpdateScreenPosition(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.UpdateScreenPosition");

	UBP_SpawnScreenPoint_C_UpdateScreenPosition_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_SpawnScreenPoint_C::SetSelected(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.SetSelected");

	UBP_SpawnScreenPoint_C_SetSelected_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_SpawnScreenPoint_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Update");

	UBP_SpawnScreenPoint_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_CapturePoint_C*                          InCapturePoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ABP_DeployableSpawn_C*                       InDeployableSpawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBP_SpawnScreen_C*                           SpawnScreen_Ref                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreenPoint_C::Initialize(class ABP_CapturePoint_C* InCapturePoint, class ABP_DeployableSpawn_C* InDeployableSpawn, class UBP_SpawnScreen_C* SpawnScreen_Ref)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Initialize");

	UBP_SpawnScreenPoint_C_Initialize_Params params;
	params.InCapturePoint = InCapturePoint;
	params.InDeployableSpawn = InDeployableSpawn;
	params.SpawnScreen_Ref = SpawnScreen_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_SpawnScreenPoint_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_SpawnScreenPoint_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_SpawnScreenPoint_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");

	UBP_SpawnScreenPoint_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreenPoint_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Tick");

	UBP_SpawnScreenPoint_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Select
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_SpawnScreenPoint_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Select");

	UBP_SpawnScreenPoint_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_SpawnScreenPoint_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.Destruct");

	UBP_SpawnScreenPoint_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.ExecuteUbergraph_BP_SpawnScreenPoint
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SpawnScreenPoint_C::ExecuteUbergraph_BP_SpawnScreenPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SpawnScreenPoint.BP_SpawnScreenPoint_C.ExecuteUbergraph_BP_SpawnScreenPoint");

	UBP_SpawnScreenPoint_C_ExecuteUbergraph_BP_SpawnScreenPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
