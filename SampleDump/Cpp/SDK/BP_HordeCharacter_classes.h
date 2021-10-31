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

// BlueprintGeneratedClass BP_HordeCharacter.BP_HordeCharacter_C
// 0x004B (FullSize[0x1324] - InheritedSize[0x12D9])
class ABP_HordeCharacter_C : public ABP_BattleRoyaleCharacter_C
{
public:
	unsigned char                                      UnknownData_0YOA[0x7];                                     // 0x12D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               AlreadyGaveDefaults;                                       // 0x12E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DPVY[0x7];                                     // 0x12E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              ReplicatedSkills;                                          // 0x12F0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	bool                                               LastAttackBypassesParry;                                   // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsImmortal;                                                // 0x1301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TQ9K[0x6];                                     // 0x1302(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AMordhauAIController*>                VanishedFor;                                               // 0x1308(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Special;                                                   // 0x1318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DivineFavorCounter;                                        // 0x131C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                               NewHorde;                                                  // 0x131D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      RevivedCount;                                              // 0x131E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S8PE[0x1];                                     // 0x131F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OriginalReceivedDamageModifier;                            // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeCharacter.BP_HordeCharacter_C");
		return ptr;
	}



	void SaveEquipmentToPlayerState();
	void OnRep_DivineFavorCounter();
	void AwardHealthOnKillToTeammates();
	void OnKilledEnemy(class ABP_HordeEnemy_C* Enemy);
	void SpecialCooldown(float Duration);
	void DoSpecialAbility(bool* Success);
	void Stage2Vanish();
	void BeginVanish();
	void Stage2Immortality();
	void BeginImmortality();
	void Stage2DivineFavor();
	void BeginDivineFavor();
	void Stage2Taunt();
	void BeginTaunt();
	void Stage2Shockwave();
	void Stage2Hookshot();
	void BeginShockwave();
	void BeginHookshot();
	float ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator);
	void ApplySkillsToEquipment(class AMordhauEquipment* Equip);
	void ModifyOutgoingDamage(class AActor* Receiver, Mordhau_EMordhauDamageType DamageType, struct FHitResult* HitInfo, class AActor* Agent, float InDamage, float* OutDamage);
	void GetSkillFloat(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, float* Value);
	void RoundEnded();
	void ApplySkills();
	void GetSkill(TEnumAsByte<E_HordeSkill_E_HordeSkill> Skill, unsigned char* Level);
	void OnRep_ReplicatedSkills();
	void ReceiveBeginPlay();
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnArmorReplicated(Mordhau_EWearableSlot Slot);
	void OnKilled(class AController* EventInstigator);
	void OnPickedUp(class AMordhauEquipment* Eq);
	void OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
	void OnAttackStarted();
	void TriggerImmortality();
	void Unvanish();
	void ReceiveDestroyed();
	void RegenerationTick();
	void MaintenanceTick();
	void RequestVolley(const struct FRotator& Aim, const struct FVector& Location);
	void ExecuteUbergraph_BP_HordeCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
