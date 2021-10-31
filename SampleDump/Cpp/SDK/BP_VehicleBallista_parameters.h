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

// Function BP_VehicleBallista.BP_VehicleBallista_C.PostProcessCameraPOV
struct UBP_VehicleBallista_C_PostProcessCameraPOV_Params
{
	struct FPOV                                        InPOV;                                                     // 0x0000(0x001C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class AMordhauCharacter*                           Character;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPOV                                        ReturnValue;                                               // 0x0028(0x001C)  (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function BP_VehicleBallista.BP_VehicleBallista_C.ReceiveBeginPlay
struct UBP_VehicleBallista_C_ReceiveBeginPlay_Params
{
};

// Function BP_VehicleBallista.BP_VehicleBallista_C.UpdateAnimationFor
struct UBP_VehicleBallista_C_UpdateAnimationFor_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMordhauAnimInstance*                        AnimInst;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaTime;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_VehicleBallista.BP_VehicleBallista_C.UpdateFPCameraFor
struct UBP_VehicleBallista_C_UpdateFPCameraFor_Params
{
	class AMordhauCharacter*                           Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bRotationOnly;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_VehicleBallista.BP_VehicleBallista_C.ExecuteUbergraph_BP_VehicleBallista
struct UBP_VehicleBallista_C_ExecuteUbergraph_BP_VehicleBallista_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
