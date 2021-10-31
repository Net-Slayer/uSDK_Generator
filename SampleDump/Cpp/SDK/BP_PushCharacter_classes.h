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

// BlueprintGeneratedClass BP_PushCharacter.BP_PushCharacter_C
// 0x0009 (FullSize[0x12C1] - InheritedSize[0x12B8])
class ABP_PushCharacter_C : public ABP_FrontlineCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CloseToObjectiveOnDeath;                                   // 0x12C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PushCharacter.BP_PushCharacter_C");
		return ptr;
	}



	void GetOutOfBoundsText(struct FText* Header);
	void GetOutOfBoundsSubtext(struct FText* Subtext);
	void OnExceededTimeOutOfBounds();
	void ExecuteUbergraph_BP_PushCharacter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
