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
// Parameters
//---------------------------------------------------------------------------

// Function BP_Announcement.BP_Announcement_C.GetVisibility_1
struct UBP_Announcement_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Announcement.BP_Announcement_C.GetAnnouncementBoxVisibility
struct UBP_Announcement_C_GetAnnouncementBoxVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Announcement.BP_Announcement_C.Tick
struct UBP_Announcement_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Announcement.BP_Announcement_C.TimerEvent
struct UBP_Announcement_C_TimerEvent_Params
{
};

// Function BP_Announcement.BP_Announcement_C.Show
struct UBP_Announcement_C_Show_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtext;                                                   // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                  // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type;                                                      // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Announcement.BP_Announcement_C.Construct
struct UBP_Announcement_C_Construct_Params
{
};

// Function BP_Announcement.BP_Announcement_C.OnExitAnimFinish
struct UBP_Announcement_C_OnExitAnimFinish_Params
{
};

// Function BP_Announcement.BP_Announcement_C.ExecuteUbergraph_BP_Announcement
struct UBP_Announcement_C_ExecuteUbergraph_BP_Announcement_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
