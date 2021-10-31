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

// BlueprintGeneratedClass BP_2HThrowableBase.BP_2HThrowableBase_C
// 0x0008 (FullSize[0x0CD0] - InheritedSize[0x0CC8])
class ABP_2HThrowableBase_C : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData_XTCF[0x8];                                     // 0x0CC8(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_2HThrowableBase.BP_2HThrowableBase_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
