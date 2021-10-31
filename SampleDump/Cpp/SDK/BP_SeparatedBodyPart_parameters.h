#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.UserConstructionScript
struct ABP_SeparatedBodyPart_C_UserConstructionScript_Params
{
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.OnCosmeticHit
struct ABP_SeparatedBodyPart_C_OnCosmeticHit_Params
{
	Mordhau_EMordhauDamageType                         DamageType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SubType;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // 0x0004(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                      Agent;                                                     // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature
struct ABP_SeparatedBodyPart_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature_Params
{
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.InitializeDismemberment
struct ABP_SeparatedBodyPart_C_InitializeDismemberment_Params
{
	class AMordhauCharacter*                           Source;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       bone;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SourceBoneTransform;                                       // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               bIsPartial;                                                // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsBluntForce;                                             // 0x0041(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.ExecuteUbergraph_BP_SeparatedBodyPart
struct ABP_SeparatedBodyPart_C_ExecuteUbergraph_BP_SeparatedBodyPart_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
