#pragma once

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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_ToolBoxSpawnable.BP_ToolBoxSpawnable
// 0x0071
struct FBP_ToolBoxSpawnable
{
	class UStaticMesh*                                 Preview_5_2199FA324279776E26CF8D94C5B5B71B;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                               PreviewSkeletal_16_F127718E4CC9262BB43BBF846E200428;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Cost_2_3FE5E6C242579A2FB40131B381BE0852;                   // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GLV5[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    RotationOffset_13_ED46831A45C264F69093958C73920A03;        // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    RotationOffsetPreview_19_166AE01D40328502CF6878924CF328B3; // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ScalePreview_39_95AAE0F84CB90D4DB603DFBF354166F0;          // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class_9_52116F214F63A71A89EE438ACAE9AE21;                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PlaceableLimitName_22_3ED07C554A73DE74451717868639F95D;    // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PleaceableLimitMax_26_9860251E42753A8D1391B39EF7D66532;    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BoxCheckExtents_44_281444B8406D0DA743BCBAB34686B9AF;       // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BoxCheckOffset_46_7AF526004FDD6629C1F95A840A3A279E;        // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpawnActorOffset_36_8DFF3968447DA5478505C4A626FC494A;      // 0x0064(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoNotAttach_41_23D7DA6D43927E8B2BD03896E629F39B;           // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
