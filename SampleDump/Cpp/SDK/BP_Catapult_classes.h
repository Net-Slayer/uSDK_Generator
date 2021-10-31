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

// BlueprintGeneratedClass BP_Catapult.BP_Catapult_C
// 0x0040 (FullSize[0x0BE0] - InheritedSize[0x0BA0])
class ABP_Catapult_C : public AMordhauWheeledVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_VehicleCatapult_C*                       BP_VehicleCatapult;                                        // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMoveSoundComponent*                         MoveSound;                                                 // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileArmShooterComponent*              ProjectileArmShooter;                                      // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Projectile;                                                // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           BackCapsule;                                               // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box1;                                                      // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Catapult.BP_Catapult_C");
		return ptr;
	}



	struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	void UserConstructionScript();
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Raise_Catapult_Arm_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Lower_Catapult_Arm_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveUnpossessed(class AController* OldController);
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	void InpAxisEvt_Move_Right_K2Node_InputAxisEvent_21(float AxisValue);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_36(float AxisValue);
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_7(float AxisValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Catapult(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
