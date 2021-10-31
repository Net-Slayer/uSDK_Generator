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

// BlueprintGeneratedClass BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C
// 0x000C (FullSize[0x1324] - InheritedSize[0x1318])
class ABP_HordeEnemy_Shield_C : public ABP_HordeEnemy_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HoldTime;                                                  // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeEnemy_Shield.BP_HordeEnemy_Shield_C");
		return ptr;
	}



	void BPLODTick(float DeltaTime);
	void ExecuteUbergraph_BP_HordeEnemy_Shield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
