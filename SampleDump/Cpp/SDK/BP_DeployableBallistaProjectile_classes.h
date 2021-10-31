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

// BlueprintGeneratedClass BP_DeployableBallistaProjectile.BP_DeployableBallistaProjectile_C
// 0x000C (FullSize[0x07E0] - InheritedSize[0x07D4])
class ABP_DeployableBallistaProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData_9HGC[0x4];                                     // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployableBallistaProjectile.BP_DeployableBallistaProjectile_C");
		return ptr;
	}



	void OnUsedToKillOther(class AAdvancedCharacter* Character, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	void ExecuteUbergraph_BP_DeployableBallistaProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
