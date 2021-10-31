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

// BlueprintGeneratedClass BP_Bow.BP_Bow_C
// 0x0081 (FullSize[0x0D59] - InheritedSize[0x0CD8])
class ABP_Bow_C : public ABP_MissileEquipment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               FireArrows;                                                // 0x0CE0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_UZL2[0x7];                                     // 0x0CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    FireEffectParticleComponent;                               // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             FireEffectAudioComponent;                                  // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FireArrowProjectile;                                       // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      OriginalProjectileClass;                                   // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             FireArrowsParticleSystem;                                  // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  FireArrowsTransform;                                       // 0x0D10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  FireArrowsSound;                                           // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   FireArrowsFireSound;                                       // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                                   OriginalFireSound;                                         // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InternalUsingFireArrows;                                   // 0x0D58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bow.BP_Bow_C");
		return ptr;
	}



	void OnRep_FireArrows();
	void ClearFireEffects();
	void GetUsesFireArrows(bool* UsesFireArrows);
	void SetUseFireArrows(bool UseFire);
	void OnLoadedChanged();
	void ReceiveBeginPlay();
	void UpdateEquipmentVisualState();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Bow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
