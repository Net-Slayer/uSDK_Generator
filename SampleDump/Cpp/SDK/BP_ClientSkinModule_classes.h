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

// BlueprintGeneratedClass BP_ClientSkinModule.BP_ClientSkinModule_C
// 0x0070 (FullSize[0x0528] - InheritedSize[0x04B8])
class ABP_ClientSkinModule_C : public ACharacter
{
public:
	unsigned char                                      UnknownData_PN8K[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      WeaponMods[0x10];                                          // 0x04C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      ArmorMods[0x10];                                           // 0x04D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
	bool                                               ArmorLoaded;                                               // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EquipmentLoaded;                                           // 0x04E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K32E[0x6];                                     // 0x04EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              EquipmentModClasses;                                       // 0x04F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UClass*>                              ArmorModClasses;                                           // 0x0500(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               AutoloadMods;                                              // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I149[0x7];                                     // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBP_SkinList_C*                              SkinList;                                                  // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableSkinList;                                           // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WY49[0x3];                                     // 0x0521(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkinListWidgetStayTime;                                    // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ClientSkinModule.BP_ClientSkinModule_C");
		return ptr;
	}



	void LoadBaseWearable(class UMordhauWearable* Original, class UMordhauWearable* Mod);
	void LoadArmorMod(class UClass* Original, class UClass* Modded);
	void LoadEquipmentMod(class UClass* Original, class UClass* Modded, bool UsesEquipmentParts);
	void OnLoaded_7CA5D0824242E059BD51108157053CF2(class UClass* Loaded);
	void OnLoaded_9D71FB2249394B73E0244BADAB9B1DF0(class UClass* Loaded);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ClientSkinModule(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
