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
//		Name   -> Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UBP_PostMatchScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.OnPreviewKeyDown");

	UBP_PostMatchScreen_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PostMatchScreen.BP_PostMatchScreen_C.Select Tab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBP_ReusableNavTabButton_C*                  Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PostMatchScreen_C::Select_Tab(class UBP_ReusableNavTabButton_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Select Tab");

	UBP_PostMatchScreen_C_Select_Tab_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_PostMatchScreen_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.Show");

	UBP_PostMatchScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014E30D0
//		Name   -> Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PostMatchScreen_C::ExecuteUbergraph_BP_PostMatchScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PostMatchScreen.BP_PostMatchScreen_C.ExecuteUbergraph_BP_PostMatchScreen");

	UBP_PostMatchScreen_C_ExecuteUbergraph_BP_PostMatchScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
