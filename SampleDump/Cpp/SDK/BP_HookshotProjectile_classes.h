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

// BlueprintGeneratedClass BP_HookshotProjectile.BP_HookshotProjectile_C
// 0x0014 (FullSize[0x07E8] - InheritedSize[0x07D4])
class ABP_HookshotProjectile_C : public ABP_MordhauProjectile_C
{
public:
	unsigned char                                      UnknownData_XOUE[0x4];                                     // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AAdvancedCharacter*                          Pulling;                                                   // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HookshotProjectile.BP_HookshotProjectile_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void OnProjectileDamagedDamagable(class UDamageableComponent* DamagableComp, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone);
	void ExecuteUbergraph_BP_HookshotProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
