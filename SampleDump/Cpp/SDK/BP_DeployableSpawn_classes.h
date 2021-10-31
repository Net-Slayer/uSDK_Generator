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

// BlueprintGeneratedClass BP_DeployableSpawn.BP_DeployableSpawn_C
// 0x0090 (FullSize[0x04F0] - InheritedSize[0x0460])
class ABP_DeployableSpawn_C : public ABP_DestroyableActor_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Playerstart4;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Playerstart3;                                              // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Playerstart2;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Playerstart1;                                              // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                     PlayerStartTransforms;                                     // 0x0488(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class ABP_DeployableSpawnPlayerStart_C*>    PlayerStarts;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Token;                                                     // 0x04A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Team;                                                      // 0x04AC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JKP3[0x3];                                     // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Spawns;                                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxSpawns;                                                 // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OriginalDamageFactor;                                      // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active;                                                    // 0x04BC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnemiesNearby;                                             // 0x04BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullyBuilt;                                                // 0x04BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JOVB[0x1];                                     // 0x04BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     EnemyCheckExtents;                                         // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EnemyCheckOffset;                                          // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBetweenSpawns;                                        // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InCooldown;                                                // 0x04DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y4FU[0x3];                                     // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_SpawnScreenPoint_C*                      Widget;                                                    // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ToolboxPreventionBox_C*                  ToolboxPreventionArea;                                     // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployableSpawn.BP_DeployableSpawn_C");
		return ptr;
	}



	void OnPlayedParticle(class UParticleSystemComponent* ParticleSystem);
	void UpdateSpawnActive();
	void OnMeshChanged();
	void OnStoppedRegenerating();
	void OnSpawnUsed(class AController* Controller);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void CheckEnemyProximity();
	void EnterCooldown();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_DeployableSpawn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
