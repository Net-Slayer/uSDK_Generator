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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ballista.BP_Ballista_C
// 0x0020 (FullSize[0x0C50] - InheritedSize[0x0C30])
class ABP_Ballista_C : public ABP_MordhauVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMoveSoundComponent*                         MoveSound;                                                 // 0x0C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileTurretShooterComponent*           ProjectileTurretShooter;                                   // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Bolt;                                                      // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ballista.BP_Ballista_C");
		return ptr;
	}



	struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	void UserConstructionScript();
	void InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime);
	void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19(float AxisValue);
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5(float AxisValue);
	void ExecuteUbergraph_BP_Ballista(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
