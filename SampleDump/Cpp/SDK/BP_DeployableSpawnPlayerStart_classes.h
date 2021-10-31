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

// BlueprintGeneratedClass BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class ABP_DeployableSpawnPlayerStart_C : public ABP_MordhauPlayerStart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DeployableSpawnPlayerStart.BP_DeployableSpawnPlayerStart_C");
		return ptr;
	}



	void OnSpawnChosen(class AController* Player);
	void StartDestroyProcess();
	void ExecuteUbergraph_BP_DeployableSpawnPlayerStart(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
