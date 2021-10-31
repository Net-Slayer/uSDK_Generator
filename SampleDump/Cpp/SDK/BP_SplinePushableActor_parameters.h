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

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.GetTransformAlongSplineOffset
struct ABP_SplinePushableActor_C_GetTransformAlongSplineOffset_Params
{
	float                                              OffsetA;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetB;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Output;                                                    // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.UserConstructionScript
struct ABP_SplinePushableActor_C_UserConstructionScript_Params
{
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.ReceiveBeginPlay
struct ABP_SplinePushableActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.OnProgressUpdated
struct ABP_SplinePushableActor_C_OnProgressUpdated_Params
{
	float                                              OldProgress;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SplinePushableActor.BP_SplinePushableActor_C.ExecuteUbergraph_BP_SplinePushableActor
struct ABP_SplinePushableActor_C_ExecuteUbergraph_BP_SplinePushableActor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
