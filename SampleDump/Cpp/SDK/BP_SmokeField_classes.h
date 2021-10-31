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

// BlueprintGeneratedClass BP_SmokeField.BP_SmokeField_C
// 0x003A (FullSize[0x038A] - InheritedSize[0x0350])
class ABP_SmokeField_C : public ABP_MasterField_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFieldSpawnComponent*                        FieldSpawn4;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFieldSpawnComponent*                        FieldSpawn3;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFieldSpawnComponent*                        FieldSpawn2;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFieldSpawnComponent*                        FieldSpawn1;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFieldSpawnComponent*                        FieldSpawn;                                                // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldHideEffects;                                         // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Deactivate;                                                // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SmokeField.BP_SmokeField_C");
		return ptr;
	}



	void ReceiveTick(float DeltaSeconds);
	void BeginFieldDeactivation();
	void ExecuteUbergraph_BP_SmokeField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
