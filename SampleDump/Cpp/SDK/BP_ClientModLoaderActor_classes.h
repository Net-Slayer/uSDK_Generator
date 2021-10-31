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

// BlueprintGeneratedClass BP_ClientModLoaderActor.BP_ClientModLoaderActor_C
// 0x002D (FullSize[0x04E5] - InheritedSize[0x04B8])
class ABP_ClientModLoaderActor_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_PORP[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      ClientMods[0x10];                                          // 0x04C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
	class UBP_ModList_C*                               ModList;                                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ModListWidgetStayTime;                                     // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableModList;                                            // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClientModLoaderActor.BP_ClientModLoaderActor_C");
		return ptr;
	}



	void OnLoaded_5B2C9B73462309AE96DE41AA892FC4AA(class UClass* Loaded);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ClientModLoaderActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
