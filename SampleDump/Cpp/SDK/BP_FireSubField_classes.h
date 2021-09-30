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

// BlueprintGeneratedClass BP_FireSubField.BP_FireSubField_C
// 0x0011 (FullSize[0x0269] - InheritedSize[0x0258])
class ABP_FireSubField_C : public ABP_SubField_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Decal;                                                     // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               FadedOutDecal;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FireSubField.BP_FireSubField_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BeginSubFieldDeactivation();
	void DeactivateSubField();
	void ExecuteUbergraph_BP_FireSubField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
