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

// BlueprintGeneratedClass BP_MordhauCharacter.BP_MordhauCharacter_C
// 0x0028 (FullSize[0x12C8] - InheritedSize[0x12A0])
class ABP_MordhauCharacter_C : public AMordhauCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UThudderComponent*                           Thudder;                                                   // 0x12A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterCameraComponent_C*              Camera;                                                    // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               BlockColliderBP;                                           // 0x12B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      KickClass;                                                 // 0x12C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCharacter.BP_MordhauCharacter_C");
		return ptr;
	}



	void GiveFists();
	void OnBeforeReceiveWearablePickup(class ABP_WearablePickup_C* WearablePickup);
	void IsAnUpgrade(class ABP_WearablePickup_C* Wearable, bool* Return);
	void SpawnBloodPoolUnderneath();
	void GetOutOfBoundsSubtext(struct FText* Subtext);
	void GetOutOfBoundsText(struct FText* Header);
	void AddRagdollImpulse(const struct FVector& Impulse, const struct FVector& Location, const struct FName& bone);
	bool TryClimbing();
	void CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);
	void AttemptClimb(bool* Succeeded);
	void FindClimbSpot(float UpwardsCast, bool* Succeeded, struct FVector* TargetSpot);
	void UserConstructionScript();
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	void OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);
	void BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature();
	void ReplicatedTripWithKnockback();
	void OnPostProfileAssigned();
	void ApplyRagdollForce(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void ServerSetClimbLocation(const struct FVector_NetQuantize& NewParam);
	void DebugPossess();
	void SprintingMoveBlockedBy(class AActor* BlockedBy);
	void ExecuteUbergraph_BP_MordhauCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
