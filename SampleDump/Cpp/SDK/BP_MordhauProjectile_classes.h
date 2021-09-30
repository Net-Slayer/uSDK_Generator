﻿#pragma once

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

// BlueprintGeneratedClass BP_MordhauProjectile.BP_MordhauProjectile_C
// 0x0014 (FullSize[0x07C4] - InheritedSize[0x07B0])
class ABP_MordhauProjectile_C : public AMordhauProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FireDamage;                                                // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireDuration;                                              // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FireTick;                                                  // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauProjectile.BP_MordhauProjectile_C");
		return ptr;
	}



	void OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone);
	void ExecuteUbergraph_BP_MordhauProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
