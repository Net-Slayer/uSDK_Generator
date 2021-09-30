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

// BlueprintGeneratedClass BP_WanderersScarf.BP_WanderersScarf_C
// 0x0008 (FullSize[0x01A8] - InheritedSize[0x01A0])
class UBP_WanderersScarf_C : public UBP_MordhauWearable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WanderersScarf.BP_WanderersScarf_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_WanderersScarf(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
