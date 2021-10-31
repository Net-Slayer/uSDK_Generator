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

// BlueprintGeneratedClass BP_DeployableBallista.BP_DeployableBallista_C
// 0x0058 (FullSize[0x0BC8] - InheritedSize[0x0B70])
class ABP_DeployableBallista_C : public ABP_MordhauVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_VehicleDeployableBallista_C*             BP_VehicleDeployableBallista;                              // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMoveSoundComponent*                         MoveSound;                                                 // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileTurretShooterComponent*           ProjectileTurretShooter;                                   // 0x0B88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULODSkeletalMeshComponent*                   Bolt;                                                      // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             LoadingSound;                                              // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             LastTurnSound;                                             // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InitialRegeneration;                                       // 0x0BA8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_CHW7[0x7];                                     // 0x0BA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    FireEffectParticleComponent;                               // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             FireEffectAudioComponent;                                  // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerController*                    Builder;                                                   // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployableBallista.BP_DeployableBallista_C");
		return ptr;
	}



	void OnRep_InitialRegeneration();
	bool CanDrive(class AMordhauCharacter* Character);
	struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	void UserConstructionScript();
	void InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_19(float AxisValue);
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_5(float AxisValue);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_DeployableBallista(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
