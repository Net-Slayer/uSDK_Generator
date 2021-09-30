// Name: Mordhau, Version: 4_25_hotfix

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_Announcement_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.GetVisibility_1");

	UBP_Announcement_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.GetAnnouncementBoxVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UBP_Announcement_C::GetAnnouncementBoxVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.GetAnnouncementBoxVisibility");

	UBP_Announcement_C_GetAnnouncementBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Announcement_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.Tick");

	UBP_Announcement_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.TimerEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Announcement_C::TimerEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.TimerEvent");

	UBP_Announcement_C_TimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Subtext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Announcement_C::Show(const struct FText& Text, const struct FText& Subtext, float Duration, TEnumAsByte<E_AnnouncementType_E_AnnouncementType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.Show");

	UBP_Announcement_C_Show_Params params;
	params.Text = Text;
	params.Subtext = Subtext;
	params.Duration = Duration;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_Announcement_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.Construct");

	UBP_Announcement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.OnExitAnimFinish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_Announcement_C::OnExitAnimFinish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.OnExitAnimFinish");

	UBP_Announcement_C_OnExitAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_Announcement.BP_Announcement_C.ExecuteUbergraph_BP_Announcement
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Announcement_C::ExecuteUbergraph_BP_Announcement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.ExecuteUbergraph_BP_Announcement");

	UBP_Announcement_C_ExecuteUbergraph_BP_Announcement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
