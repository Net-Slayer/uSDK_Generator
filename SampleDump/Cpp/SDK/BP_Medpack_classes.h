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

// BlueprintGeneratedClass BP_Medpack.BP_Medpack_C
// 0x0030 (FullSize[0x0D00] - InheritedSize[0x0CD0])
class ABP_Medpack_C : public ABP_2HThrowableBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                HealsLeft;                                                 // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HealthPerHeal;                                             // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealTimeToHold;                                            // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OriginalMaxHoldTime;                                       // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 ThrowerController;                                         // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HealScoreModifier;                                         // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FEX4[0x4];                                     // 0x0CF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMesh*                               OpenBagSkeletalMesh;                                       // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Medpack.BP_Medpack_C");
		return ptr;
	}



	void ApplyHeal(class AMordhauCharacter* Character);
	bool CanHeldInteract(class AMordhauCharacter* Character);
	bool CanInteract(class AMordhauCharacter* Character);
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void OnLoadedChanged();
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void ExecuteUbergraph_BP_Medpack(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
