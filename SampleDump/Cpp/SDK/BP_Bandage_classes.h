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

// BlueprintGeneratedClass BP_Bandage.BP_Bandage_C
// 0x0014 (FullSize[0x0CDC] - InheritedSize[0x0CC8])
class ABP_Bandage_C : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData_1JPZ[0x8];                                     // 0x0CC8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                HealAmount;                                                // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Bandage.BP_Bandage_C");
		return ptr;
	}



	bool OnRequestModeSwitch(class AMordhauCharacter* Character);
	bool OnRequestFire(class AMordhauCharacter* Character);
	void ApplyHeal();
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	void ExecuteUbergraph_BP_Bandage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
