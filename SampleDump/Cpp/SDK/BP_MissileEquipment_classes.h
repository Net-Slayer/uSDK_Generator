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

// BlueprintGeneratedClass BP_MissileEquipment.BP_MissileEquipment_C
// 0x0010 (FullSize[0x0CD8] - InheritedSize[0x0CC8])
class ABP_MissileEquipment_C : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData_706X[0x8];                                     // 0x0CC8(0x0008) Fix Super Size
	class USkeletalMeshComponent*                      Missile;                                                   // 0x0CD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MissileEquipment.BP_MissileEquipment_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
