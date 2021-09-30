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
//		Name   -> Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SeparatedBodyPart_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.UserConstructionScript");

	ABP_SeparatedBodyPart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.OnCosmeticHit
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		Mordhau_EMordhauDamageType                         DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      SubType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		class AActor*                                      Agent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SeparatedBodyPart_C::OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.OnCosmeticHit");

	ABP_SeparatedBodyPart_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_SeparatedBodyPart_C::BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature");

	ABP_SeparatedBodyPart_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.InitializeDismemberment
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       bone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SourceBoneTransform                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		bool                                               bIsPartial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsBluntForce                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SeparatedBodyPart_C::InitializeDismemberment(class AMordhauCharacter* Source, const struct FName& bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.InitializeDismemberment");

	ABP_SeparatedBodyPart_C_InitializeDismemberment_Params params;
	params.Source = Source;
	params.bone = bone;
	params.SourceBoneTransform = SourceBoneTransform;
	params.bIsPartial = bIsPartial;
	params.bIsBluntForce = bIsBluntForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.ExecuteUbergraph_BP_SeparatedBodyPart
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SeparatedBodyPart_C::ExecuteUbergraph_BP_SeparatedBodyPart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.ExecuteUbergraph_BP_SeparatedBodyPart");

	ABP_SeparatedBodyPart_C_ExecuteUbergraph_BP_SeparatedBodyPart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
