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

// BlueprintGeneratedClass BP_HordeChestBase.BP_HordeChestBase_C
// 0x0034 (FullSize[0x04E8] - InheritedSize[0x04B4])
class ABP_HordeChestBase_C : public ABP_BattleRoyaleChest_C
{
public:
	unsigned char                                      UnknownData_7UFK[0x4];                                     // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMordhauWidgetComponent*                     MordhauWidget;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isAvailable;                                               // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FT62[0x3];                                     // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x04D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeChestBase.BP_HordeChestBase_C");
		return ptr;
	}



	void UpdateVisuals();
	void SetAvailability(bool NewAvailable);
	bool CanInteract(class AMordhauCharacter* Character);
	void ReceiveBeginPlay();
	void OnInteractionStart(class AMordhauCharacter* Character);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_HordeChestBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
