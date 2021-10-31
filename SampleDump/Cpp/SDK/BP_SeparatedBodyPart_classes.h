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

// BlueprintGeneratedClass BP_SeparatedBodyPart.BP_SeparatedBodyPart_C
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class ABP_SeparatedBodyPart_C : public ASeparatedBodyPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UThudderComponent*                           Thudder;                                                   // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SeparatedBodyPart.BP_SeparatedBodyPart_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	void BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature();
	void InitializeDismemberment(class AMordhauCharacter* Source, const struct FName& bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce);
	void ExecuteUbergraph_BP_SeparatedBodyPart(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
