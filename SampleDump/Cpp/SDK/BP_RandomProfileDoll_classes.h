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

// BlueprintGeneratedClass BP_RandomProfileDoll.BP_RandomProfileDoll_C
// 0x00C6 (FullSize[0x1386] - InheritedSize[0x12C0])
class ABP_RandomProfileDoll_C : public ABP_CharacterDoll_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCharacterProfile                           CurrentProfileStored;                                      // 0x12C8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RerolledFrame;                                             // 0x1380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkippedFirstFrame;                                         // 0x1384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasStoredProfile;                                          // 0x1385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RandomProfileDoll.BP_RandomProfileDoll_C");
		return ptr;
	}



	void Reroll();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_RandomProfileDoll(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
