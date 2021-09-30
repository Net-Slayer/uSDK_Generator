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

// BlueprintGeneratedClass BP_CharacterDoll.BP_CharacterDoll_C
// 0x0008 (FullSize[0x12D0] - InheritedSize[0x12C8])
class ABP_CharacterDoll_C : public ABP_MordhauCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x12C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterDoll.BP_CharacterDoll_C");
		return ptr;
	}



	void AssumePreviewPose(int Random);
	void GiveFists();
	void ExecuteUbergraph_BP_CharacterDoll(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
