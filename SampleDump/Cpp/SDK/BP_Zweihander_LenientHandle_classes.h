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

// BlueprintGeneratedClass BP_Zweihander_LenientHandle.BP_Zweihander_LenientHandle_C
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UBP_Zweihander_LenientHandle_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Zweihander_LenientHandle.BP_Zweihander_LenientHandle_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Zweihander_LenientHandle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
