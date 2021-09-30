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

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.CancelAllModsRequiredDownloads
struct UBP_ModDownloadDialog_C_CancelAllModsRequiredDownloads_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentDownloadProgress
struct UBP_ModDownloadDialog_C_UpdateCurrentDownloadProgress_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.UpdateCurrentlyInstalledMods
struct UBP_ModDownloadDialog_C_UpdateCurrentlyInstalledMods_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetButtonText
struct UBP_ModDownloadDialog_C_SetButtonText_Params
{
	struct FText                                       ButtonText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.SetTitleText
struct UBP_ModDownloadDialog_C_SetTitleText_Params
{
	struct FText                                       TitleText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_2BBA97D647185ABC0293E9A9C5E0925A
struct UBP_ModDownloadDialog_C_OnFailure_2BBA97D647185ABC0293E9A9C5E0925A_Params
{
	int                                                ResponseCode;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModInfo                                    Mod;                                                       // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A
struct UBP_ModDownloadDialog_C_OnSuccess_2BBA97D647185ABC0293E9A9C5E0925A_Params
{
	int                                                ResponseCode;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModInfo                                    Mod;                                                       // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnFailure_F325FFB4489130F65283CC894D428C76
struct UBP_ModDownloadDialog_C_OnFailure_F325FFB4489130F65283CC894D428C76_Params
{
	int                                                ResponseCode;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bModsAreUpdated;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.OnSuccess_F325FFB4489130F65283CC894D428C76
struct UBP_ModDownloadDialog_C_OnSuccess_F325FFB4489130F65283CC894D428C76_Params
{
	int                                                ResponseCode;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bModsAreUpdated;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature
struct UBP_ModDownloadDialog_C_BndEvt__BP_OneButtonDialog_K2Node_ComponentBoundEvent_14_ButtonClicked__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Show
struct UBP_ModDownloadDialog_C_Show_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Hide
struct UBP_ModDownloadDialog_C_Hide_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.Tick
struct UBP_ModDownloadDialog_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.ExecuteUbergraph_BP_ModDownloadDialog
struct UBP_ModDownloadDialog_C_ExecuteUbergraph_BP_ModDownloadDialog_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadFailed__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadFailed__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCanceled__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadCanceled__DelegateSignature_Params
{
};

// Function BP_ModDownloadDialog.BP_ModDownloadDialog_C.DownloadCompleted__DelegateSignature
struct UBP_ModDownloadDialog_C_DownloadCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
