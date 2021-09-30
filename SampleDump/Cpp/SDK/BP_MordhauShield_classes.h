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

// BlueprintGeneratedClass BP_MordhauShield.BP_MordhauShield_C
// 0x0018 (FullSize[0x1C48] - InheritedSize[0x1C30])
class ABP_MordhauShield_C : public AMordhauShield
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               BlockColliderBP;                                           // 0x1C38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               ProjectileBlock;                                           // 0x1C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauShield.BP_MordhauShield_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MordhauShield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
