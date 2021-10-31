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
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.GetProfileWrapper
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCharacterProfileBPWrapper*                  Wrapper                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::GetProfileWrapper(class UCharacterProfileBPWrapper** Wrapper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.GetProfileWrapper");

	ABP_MordhauCustomizationPlatform_C_GetProfileWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Wrapper != nullptr)
		*Wrapper = params.Wrapper;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateEquipmentDollRotation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::UpdateEquipmentDollRotation(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateEquipmentDollRotation");

	ABP_MordhauCustomizationPlatform_C_UpdateEquipmentDollRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDollRotation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::UpdateCharacterDollRotation(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDollRotation");

	ABP_MordhauCustomizationPlatform_C_UpdateCharacterDollRotation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.TryUpdateCharacterDollInternal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauCustomizationPlatform_C::TryUpdateCharacterDollInternal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.TryUpdateCharacterDollInternal");

	ABP_MordhauCustomizationPlatform_C_TryUpdateCharacterDollInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCharacterProfile                           Profile                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               OnlyUpdateMaterials                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InstantEquipmentSwitch                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DoPreviewPose                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                PreviewPoseRandom                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::UpdateCharacterDoll(const struct FCharacterProfile& Profile, bool OnlyUpdateMaterials, bool InstantEquipmentSwitch, bool DoPreviewPose, int PreviewPoseRandom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_UpdateCharacterDoll_Params params;
	params.Profile = Profile;
	params.OnlyUpdateMaterials = OnlyUpdateMaterials;
	params.InstantEquipmentSwitch = InstantEquipmentSwitch;
	params.DoPreviewPose = DoPreviewPose;
	params.PreviewPoseRandom = PreviewPoseRandom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCamera
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::UpdateCamera(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.UpdateCamera");

	ABP_MordhauCustomizationPlatform_C_UpdateCamera_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomCharacterDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::ZoomCharacterDoll(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_ZoomCharacterDoll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomEquipmentDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::ZoomEquipmentDoll(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ZoomEquipmentDoll");

	ABP_MordhauCustomizationPlatform_C_ZoomEquipmentDoll_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateCharacterDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Smooth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauCustomizationPlatform_C::RotateCharacterDoll(float Delta, bool Smooth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_RotateCharacterDoll_Params params;
	params.Delta = Delta;
	params.Smooth = Smooth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyCharacterDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauCustomizationPlatform_C::DestroyCharacterDoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyCharacterDoll");

	ABP_MordhauCustomizationPlatform_C_DestroyCharacterDoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyEquipmentDoll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauCustomizationPlatform_C::DestroyEquipmentDoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyEquipmentDoll");

	ABP_MordhauCustomizationPlatform_C_DestroyEquipmentDoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateEquipmentDoll
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Smooth                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauCustomizationPlatform_C::RotateEquipmentDoll(float Delta, bool Smooth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.RotateEquipmentDoll");

	ABP_MordhauCustomizationPlatform_C_RotateEquipmentDoll_Params params;
	params.Delta = Delta;
	params.Smooth = Smooth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnCharacterDollIfNone
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauCustomizationPlatform_C::SpawnCharacterDollIfNone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnCharacterDollIfNone");

	ABP_MordhauCustomizationPlatform_C_SpawnCharacterDollIfNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyDolls
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauCustomizationPlatform_C::DestroyDolls()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.DestroyDolls");

	ABP_MordhauCustomizationPlatform_C_DestroyDolls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnEquipment
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                EquipmentIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AMordhauEquipment*                           Equipment                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::SpawnEquipment(int EquipmentIndex, class AMordhauEquipment** Equipment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.SpawnEquipment");

	ABP_MordhauCustomizationPlatform_C_SpawnEquipment_Params params;
	params.EquipmentIndex = EquipmentIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.Init
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauCustomizationPlatform_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.Init");

	ABP_MordhauCustomizationPlatform_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MordhauCustomizationPlatform_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveBeginPlay");

	ABP_MordhauCustomizationPlatform_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ReceiveTick");

	ABP_MordhauCustomizationPlatform_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ExecuteUbergraph_BP_MordhauCustomizationPlatform
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCustomizationPlatform_C::ExecuteUbergraph_BP_MordhauCustomizationPlatform(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCustomizationPlatform.BP_MordhauCustomizationPlatform_C.ExecuteUbergraph_BP_MordhauCustomizationPlatform");

	ABP_MordhauCustomizationPlatform_C_ExecuteUbergraph_BP_MordhauCustomizationPlatform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
