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
//		Name   -> Function BP_VehicleCatapult2.BP_VehicleCatapult2_C.PostProcessCameraPOV
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPOV                                        InPOV                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FPOV                                        ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor)
struct FPOV UBP_VehicleCatapult2_C::PostProcessCameraPOV(const struct FPOV& InPOV, class AMordhauCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleCatapult2.BP_VehicleCatapult2_C.PostProcessCameraPOV");

	UBP_VehicleCatapult2_C_PostProcessCameraPOV_Params params;
	params.InPOV = InPOV;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleCatapult2.BP_VehicleCatapult2_C.UpdateFPCameraFor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AMordhauCharacter*                           Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bRotationOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_VehicleCatapult2_C::UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleCatapult2.BP_VehicleCatapult2_C.UpdateFPCameraFor");

	UBP_VehicleCatapult2_C_UpdateFPCameraFor_Params params;
	params.Character = Character;
	params.DeltaSeconds = DeltaSeconds;
	params.bRotationOnly = bRotationOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_VehicleCatapult2.BP_VehicleCatapult2_C.ExecuteUbergraph_BP_VehicleCatapult2
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_VehicleCatapult2_C::ExecuteUbergraph_BP_VehicleCatapult2(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VehicleCatapult2.BP_VehicleCatapult2_C.ExecuteUbergraph_BP_VehicleCatapult2");

	UBP_VehicleCatapult2_C_ExecuteUbergraph_BP_VehicleCatapult2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
