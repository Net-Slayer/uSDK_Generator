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

// BlueprintGeneratedClass BP_VehicleLadderMover.BP_VehicleLadderMover_C
// 0x0010 (FullSize[0x01C0] - InheritedSize[0x01B0])
class UBP_VehicleLadderMover_C : public UMordhauVehicleComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_LadderMover_C*                           LadderMover;                                               // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_VehicleLadderMover.BP_VehicleLadderMover_C");
		return ptr;
	}



	float OverrideAttackAngle(class UAttackMotion* Motion);
	struct FTransform GetExitTransform();
	void ReceiveBeginPlay();
	void OnStoppedDriving(class AMordhauCharacter* Character);
	void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	void UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime);
	void OnDriverChanged();
	void ExecuteUbergraph_BP_VehicleLadderMover(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
