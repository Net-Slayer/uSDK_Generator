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

// BlueprintGeneratedClass BP_MordhauVehicle.BP_MordhauVehicle_C
// 0x0008 (FullSize[0x0B70] - InheritedSize[0x0B68])
class ABP_MordhauVehicle_C : public AMordhauVehicle
{
public:
	unsigned char                                      UnknownData_MGNE[0x8];                                     // 0x0B68(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauVehicle.BP_MordhauVehicle_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
