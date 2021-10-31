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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct STRUCT_VoteKickInfo.STRUCT_VoteKickInfo
// 0x0012
struct FSTRUCT_VoteKickInfo
{
	class AMordhauPlayerState*                         Target_17_17FF977E4C40F157A0FEC18A7933F7AD;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMordhauPlayerState*                         Initiator_19_6B8C38034236451E9947B38150AA1481;             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_VoteKickResult_E_VoteKickResult>     Result_22_793F21B84D1C1DC4274A43BE515C4562;                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      TeamDamage_25_1416EB964890815CB4EBC99FA8891E3B;            // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
