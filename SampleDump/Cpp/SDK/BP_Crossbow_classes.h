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

// BlueprintGeneratedClass BP_Crossbow.BP_Crossbow_C
// 0x0008 (FullSize[0x0CE0] - InheritedSize[0x0CD8])
class ABP_Crossbow_C : public ABP_MissileEquipment_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Crossbow.BP_Crossbow_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnLoadedChanged();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Crossbow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
