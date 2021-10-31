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

// BlueprintGeneratedClass BP_EquipmentSkinMod.BP_EquipmentSkinMod_C
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UBP_EquipmentSkinMod_C : public UObject
{
public:
	TArray<struct FEquipmentModInfo>                   EquipmentModInfos;                                         // 0x0028(0x0010) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquipmentSkinMod.BP_EquipmentSkinMod_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
