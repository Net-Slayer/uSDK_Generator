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

// BlueprintGeneratedClass BP_MordhauCameraManager.BP_MordhauCameraManager_C
// 0x0008 (FullSize[0x2D98] - InheritedSize[0x2D90])
class ABP_MordhauCameraManager_C : public AMordhauCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x2D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauCameraManager.BP_MordhauCameraManager_C");
		return ptr;
	}



	void OnHitFlash(bool bIsDirectional, class AActor* Source);
	void ExecuteUbergraph_BP_MordhauCameraManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
