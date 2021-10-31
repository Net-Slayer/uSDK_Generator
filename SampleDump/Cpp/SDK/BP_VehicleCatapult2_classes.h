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

// BlueprintGeneratedClass BP_VehicleCatapult2.BP_VehicleCatapult2_C
// 0x0008 (FullSize[0x01E8] - InheritedSize[0x01E0])
class UBP_VehicleCatapult2_C : public UPhysicsVehicleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleCatapult2.BP_VehicleCatapult2_C");
		return ptr;
	}



	struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV, class AMordhauCharacter* Character);
	void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	void ExecuteUbergraph_BP_VehicleCatapult2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
