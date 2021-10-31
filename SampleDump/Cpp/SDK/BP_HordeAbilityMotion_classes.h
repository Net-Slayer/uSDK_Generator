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

// BlueprintGeneratedClass BP_HordeAbilityMotion.BP_HordeAbilityMotion_C
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class UBP_HordeAbilityMotion_C : public UBP_AbilityMotion_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_HookshotProjectile_C*                    Projectile;                                                // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Stage2Time;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentStage;                                              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HordeAbilityMotion.BP_HordeAbilityMotion_C");
		return ptr;
	}



	void OnBegin();
	void OnLeave(bool Interrupted);
	void OnTick(float DeltaTime);
	void ExecuteUbergraph_BP_HordeAbilityMotion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
