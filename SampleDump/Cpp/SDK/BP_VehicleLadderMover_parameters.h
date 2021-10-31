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

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OverrideAttackAngle
struct UBP_VehicleLadderMover_C_OverrideAttackAngle_Params
{
	class UAttackMotion*                               Motion;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.GetExitTransform
struct UBP_VehicleLadderMover_C_GetExitTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.ReceiveBeginPlay
struct UBP_VehicleLadderMover_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OnStoppedDriving
struct UBP_VehicleLadderMover_C_OnStoppedDriving_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.UpdateFPCameraFor
struct UBP_VehicleLadderMover_C_UpdateFPCameraFor_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRotationOnly;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.UpdateAnimationFor
struct UBP_VehicleLadderMover_C_UpdateAnimationFor_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauAnimInstance*                        AnimInst;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.OnDriverChanged
struct UBP_VehicleLadderMover_C_OnDriverChanged_Params
{
};

// Function BP_VehicleLadderMover.BP_VehicleLadderMover_C.ExecuteUbergraph_BP_VehicleLadderMover
struct UBP_VehicleLadderMover_C_ExecuteUbergraph_BP_VehicleLadderMover_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
