﻿#pragma once

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

// BlueprintGeneratedClass BP_TorsoPickup.BP_TorsoPickup_C
// 0x0000 (FullSize[0x0408] - InheritedSize[0x0408])
class ABP_TorsoPickup_C : public ABP_WearablePickup_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TorsoPickup.BP_TorsoPickup_C");
		return ptr;
	}



	bool CanInteract(class AMordhauCharacter* Character);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
