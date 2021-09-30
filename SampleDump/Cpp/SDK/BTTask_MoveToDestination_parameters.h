#pragma once

// Name: Mordhau, Version: 4_25_hotfix


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

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.GetFilterClass
struct UBTTask_MoveToDestination_C_GetFilterClass_Params
{
	class UClass*                                      FilterClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.KeepMoving
struct UBTTask_MoveToDestination_C_KeepMoving_Params
{
	bool                                               bKeepMoving;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ClearTarget
struct UBTTask_MoveToDestination_C_ClearTarget_Params
{
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.GetTargetLoc
struct UBTTask_MoveToDestination_C_GetTargetLoc_Params
{
	struct FVector                                     TargetLocation;                                            // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ResetTimeAndDistance
struct UBTTask_MoveToDestination_C_ResetTimeAndDistance_Params
{
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.Init
struct UBTTask_MoveToDestination_C_Init_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.SetPath
struct UBTTask_MoveToDestination_C_SetPath_Params
{
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveTickAI
struct UBTTask_MoveToDestination_C_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveAbortAI
struct UBTTask_MoveToDestination_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ReceiveExecuteAI
struct UBTTask_MoveToDestination_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveToDestination.BTTask_MoveToDestination_C.ExecuteUbergraph_BTTask_MoveToDestination
struct UBTTask_MoveToDestination_C_ExecuteUbergraph_BTTask_MoveToDestination_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
