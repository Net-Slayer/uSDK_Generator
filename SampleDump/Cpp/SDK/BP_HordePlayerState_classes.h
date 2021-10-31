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

// BlueprintGeneratedClass BP_HordePlayerState.BP_HordePlayerState_C
// 0x0060 (FullSize[0x0478] - InheritedSize[0x0418])
class ABP_HordePlayerState_C : public ABP_MordhauPlayerState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Coins;                                                     // 0x0420(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SkillPoints;                                               // 0x0424(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RNW8[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_HordePlayerGrave_C*                      Grave;                                                     // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LastHeadArmor;                                             // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LastChestArmor;                                            // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LastLegArmor;                                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              LastEquipment;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<unsigned char>                              LastEquipmentAmmo;                                         // 0x0458(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<unsigned char>                              ReplicatedSkills;                                          // 0x0468(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordePlayerState.BP_HordePlayerState_C");
		return ptr;
	}



	void CopyFromOtherState(class ABP_HordePlayerState_C* OtherState);
	void OnRep_ReplicatedSkills();
	void OnRep_SkillPoints();
	void GetDiscountedPrice(int BasePrice, int* DiscountedPrice);
	void OnRep_Coins();
	void UserConstructionScript();
	void ReceiveCopyProperties(class APlayerState* NewPlayerState);
	void ExecuteUbergraph_BP_HordePlayerState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
