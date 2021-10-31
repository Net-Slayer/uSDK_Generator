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

// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveBeginPlay
struct UBP_ClothShoulders_C_ReceiveBeginPlay_Params
{
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveActorBeginOverlap
struct UBP_ClothShoulders_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ReceiveTick
struct UBP_ClothShoulders_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ClothShoulders.BP_ClothShoulders_C.ExecuteUbergraph_BP_ClothShoulders
struct UBP_ClothShoulders_C_ExecuteUbergraph_BP_ClothShoulders_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
