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

// BlueprintGeneratedClass BP_Longsword.BP_Longsword_C
// 0x0008 (FullSize[0x1C30] - InheritedSize[0x1C28])
class ABP_Longsword_C : public ABP_TwoHandedSword_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Longsword.BP_Longsword_C");
		return ptr;
	}



	void OnLoadedChanged();
	void ExecuteUbergraph_BP_Longsword(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
