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

// BlueprintGeneratedClass BP_MordhauActor.BP_MordhauActor_C
// 0x0008 (FullSize[0x0380] - InheritedSize[0x0378])
class ABP_MordhauActor_C : public AMordhauActor
{
public:
	unsigned char                                      UnknownData_C8CW[0x8];                                     // 0x0378(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauActor.BP_MordhauActor_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
