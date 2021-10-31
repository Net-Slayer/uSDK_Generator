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

// BlueprintGeneratedClass BP_ThrowingAxe_Francisca.BP_ThrowingAxe_Francisca_C
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UBP_ThrowingAxe_Francisca_C : public UBP_MordhauEquipmentPart_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0080(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ThrowingAxe_Francisca.BP_ThrowingAxe_Francisca_C");
		return ptr;
	}



	void ReceiveBeginPlay_2();
	void ReceiveActorBeginOverlap_2();
	void ReceiveTick_2();
	void ExecuteUbergraph_BP_ThrowingAxe_Francisca(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
