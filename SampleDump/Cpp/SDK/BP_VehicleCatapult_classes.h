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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VehicleCatapult.BP_VehicleCatapult_C
// 0x0008 (FullSize[0x01C8] - InheritedSize[0x01C0])
class UBP_VehicleCatapult_C : public UWheeledVehicleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleCatapult.BP_VehicleCatapult_C");
		return ptr;
	}



	struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV, class AMordhauCharacter* Character);
	void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	void ExecuteUbergraph_BP_VehicleCatapult(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
