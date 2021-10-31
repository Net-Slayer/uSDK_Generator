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
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.GiveFists
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauCharacter_C::GiveFists()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.GiveFists");

	ABP_MordhauCharacter_C_GiveFists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnBeforeReceiveWearablePickup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_WearablePickup_C*                        WearablePickup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::OnBeforeReceiveWearablePickup(class ABP_WearablePickup_C* WearablePickup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnBeforeReceiveWearablePickup");

	ABP_MordhauCharacter_C_OnBeforeReceiveWearablePickup_Params params;
	params.WearablePickup = WearablePickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.IsAnUpgrade
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_WearablePickup_C*                        Wearable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauCharacter_C::IsAnUpgrade(class ABP_WearablePickup_C* Wearable, bool* Return)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.IsAnUpgrade");

	ABP_MordhauCharacter_C_IsAnUpgrade_Params params;
	params.Wearable = Wearable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.SpawnBloodPoolUnderneath
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MordhauCharacter_C::SpawnBloodPoolUnderneath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.SpawnBloodPoolUnderneath");

	ABP_MordhauCharacter_C_SpawnBloodPoolUnderneath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsSubtext
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Subtext                                                    (Parm, OutParm)
void ABP_MordhauCharacter_C::GetOutOfBoundsSubtext(struct FText* Subtext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsSubtext");

	ABP_MordhauCharacter_C_GetOutOfBoundsSubtext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Subtext != nullptr)
		*Subtext = params.Subtext;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Header                                                     (Parm, OutParm)
void ABP_MordhauCharacter_C::GetOutOfBoundsText(struct FText* Header)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsText");

	ABP_MordhauCharacter_C_GetOutOfBoundsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.AddRagdollImpulse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::AddRagdollImpulse(const struct FVector& Impulse, const struct FVector& Location, const struct FName& bone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.AddRagdollImpulse");

	ABP_MordhauCharacter_C_AddRagdollImpulse_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.bone = bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.TryClimbing
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_MordhauCharacter_C::TryClimbing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.TryClimbing");

	ABP_MordhauCharacter_C_TryClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.CalculateLedgeOffsetAndNormal
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClimbingMotion*                             ClimbingMotion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.CalculateLedgeOffsetAndNormal");

	ABP_MordhauCharacter_C_CalculateLedgeOffsetAndNormal_Params params;
	params.ClimbingMotion = ClimbingMotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOffset != nullptr)
		*OutOffset = params.OutOffset;
	if (OutNormal != nullptr)
		*OutNormal = params.OutNormal;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.AttemptClimb
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MordhauCharacter_C::AttemptClimb(bool* Succeeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.AttemptClimb");

	ABP_MordhauCharacter_C_AttemptClimb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.FindClimbSpot
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              UpwardsCast                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     TargetSpot                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::FindClimbSpot(float UpwardsCast, bool* Succeeded, struct FVector* TargetSpot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.FindClimbSpot");

	ABP_MordhauCharacter_C_FindClimbSpot_Params params;
	params.UpwardsCast = UpwardsCast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (TargetSpot != nullptr)
		*TargetSpot = params.TargetSpot;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauCharacter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.UserConstructionScript");

	ABP_MordhauCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_2");

	ABP_MordhauCharacter_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.InpActEvt_Cycle Camera_K2Node_InputActionEvent_1");

	ABP_MordhauCharacter_C_InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MordhauCharacter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReceiveBeginPlay");

	ABP_MordhauCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnDied
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnDied");

	ABP_MordhauCharacter_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnCosmeticHit
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Mordhau_EMordhauDamageType                         DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnCosmeticHit");

	ABP_MordhauCharacter_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostDismember
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASeparatedBodyPart*                          SeparatedPart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostDismember");

	ABP_MordhauCharacter_C_OnPostDismember_Params params;
	params.bone = bone;
	params.SeparatedPart = SeparatedPart;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_MordhauCharacter_C::BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature");

	ABP_MordhauCharacter_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReplicatedTripWithKnockback
//		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ABP_MordhauCharacter_C::ReplicatedTripWithKnockback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReplicatedTripWithKnockback");

	ABP_MordhauCharacter_C_ReplicatedTripWithKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostProfileAssigned
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MordhauCharacter_C::OnPostProfileAssigned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostProfileAssigned");

	ABP_MordhauCharacter_C_OnPostProfileAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.ApplyRagdollForce
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Mordhau_EMordhauDamageType                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::ApplyRagdollForce(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ApplyRagdollForce");

	ABP_MordhauCharacter_C_ApplyRagdollForce_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.ServerSetClimbLocation
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector_NetQuantize                         NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::ServerSetClimbLocation(const struct FVector_NetQuantize& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ServerSetClimbLocation");

	ABP_MordhauCharacter_C_ServerSetClimbLocation_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.DebugPossess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MordhauCharacter_C::DebugPossess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.DebugPossess");

	ABP_MordhauCharacter_C_DebugPossess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.SprintingMoveBlockedBy
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      BlockedBy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::SprintingMoveBlockedBy(class AActor* BlockedBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.SprintingMoveBlockedBy");

	ABP_MordhauCharacter_C_SprintingMoveBlockedBy_Params params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_MordhauCharacter.BP_MordhauCharacter_C.ExecuteUbergraph_BP_MordhauCharacter
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MordhauCharacter_C::ExecuteUbergraph_BP_MordhauCharacter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ExecuteUbergraph_BP_MordhauCharacter");

	ABP_MordhauCharacter_C_ExecuteUbergraph_BP_MordhauCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
