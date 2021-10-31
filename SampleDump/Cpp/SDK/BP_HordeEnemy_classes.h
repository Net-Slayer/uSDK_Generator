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

// BlueprintGeneratedClass BP_HordeEnemy.BP_HordeEnemy_C
// 0x003F (FullSize[0x1318] - InheritedSize[0x12D9])
class ABP_HordeEnemy_C : public ABP_BattleRoyaleCharacter_C
{
public:
	unsigned char                                      UnknownData_BNKD[0x7];                                     // 0x12D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x12E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                KillReward;                                                // 0x12F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WoodDamageForPathClearing;                                 // 0x12F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_HordeTask_C*                             CurrentTask;                                               // 0x12F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBoss;                                                    // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCrippled;                                                // 0x1301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XNJK[0x2];                                     // 0x1302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreCrippleMaxWalkSpeed;                                    // 0x1304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauCharacter*                           RageTarget;                                                // 0x1308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      StunnedBySkillCounter;                                     // 0x1310(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A49R[0x3];                                     // 0x1311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastClimbTime;                                             // 0x1314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeEnemy.BP_HordeEnemy_C");
		return ptr;
	}



	void AttemptClimb(bool* Succeeded);
	void HandleObstructionRemoval(const struct FHitResult& Impact);
	void OnRep_StunnedBySkillCounter();
	void GetEnragedTarget(class AMordhauCharacter** OutTarget);
	bool ModifyParryResult(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
	float ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator);
	void ReceiveBeginPlay();
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void MoveBlockedBySlow(const struct FHitResult& Impact);
	void CompleteTask();
	void ReceiveMordhauDamage(float Damage, const struct FHitResult& HitResult, Mordhau_EMordhauDamageType DamageType, unsigned char SubDamageType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	void LegSweep();
	void OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
	void Recoil();
	void Cripple(float Duration);
	void Enrage(class AMordhauCharacter* Target, float Duration);
	void OnKilled(class AController* EventInstigator);
	void ReceivePossessed(class AController* NewController);
	void ExecuteUbergraph_BP_HordeEnemy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
