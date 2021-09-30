#pragma once

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

// BlueprintGeneratedClass BP_ThrowableEquipment.BP_ThrowableEquipment_C
// 0x0010 (FullSize[0x0CD8] - InheritedSize[0x0CC8])
class ABP_ThrowableEquipment_C : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData_DU56[0x8];                                     // 0x0CC8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThrowableEquipment.BP_ThrowableEquipment_C");
		return ptr;
	}



	void AssignCustomizationToProjectile(class AMordhauProjectile* Projectile);
	void ExecuteUbergraph_BP_ThrowableEquipment(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
