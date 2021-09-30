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

// BlueprintGeneratedClass BP_ArmingSword_NoblesBasketHilt.BP_ArmingSword_NoblesBasketHilt_C
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UBP_ArmingSword_NoblesBasketHilt_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArmingSword_NoblesBasketHilt.BP_ArmingSword_NoblesBasketHilt_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ArmingSword_NoblesBasketHilt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
