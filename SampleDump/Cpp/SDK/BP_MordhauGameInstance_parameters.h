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
// Parameters
//---------------------------------------------------------------------------

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningText
struct UBP_MordhauGameInstance_C_GetJoiningText_Params
{
	bool                                               bIsFull;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.GetJoiningTextOld
struct UBP_MordhauGameInstance_C_GetJoiningTextOld_Params
{
	struct FServerSearchResult                         Session;                                                   // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                      // 0x0110(0x0018)  (Parm, OutParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_EC1BED794FBBC103AFC74FAD71124461
struct UBP_MordhauGameInstance_C_OnFailure_EC1BED794FBBC103AFC74FAD71124461_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_EC1BED794FBBC103AFC74FAD71124461
struct UBP_MordhauGameInstance_C_OnSuccess_EC1BED794FBBC103AFC74FAD71124461_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_E564B5624B7FDB47DBB2E08126C636D7
struct UBP_MordhauGameInstance_C_OnFailure_E564B5624B7FDB47DBB2E08126C636D7_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_E564B5624B7FDB47DBB2E08126C636D7
struct UBP_MordhauGameInstance_C_OnSuccess_E564B5624B7FDB47DBB2E08126C636D7_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFailure_4643A5C64229EB24E86C05B71625BDC1
struct UBP_MordhauGameInstance_C_OnFailure_4643A5C64229EB24E86C05B71625BDC1_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnFull_4643A5C64229EB24E86C05B71625BDC1
struct UBP_MordhauGameInstance_C_OnFull_4643A5C64229EB24E86C05B71625BDC1_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnSuccess_4643A5C64229EB24E86C05B71625BDC1
struct UBP_MordhauGameInstance_C_OnSuccess_4643A5C64229EB24E86C05B71625BDC1_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowPasswordDialog
struct UBP_MordhauGameInstance_C_ShowPasswordDialog_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowNetworkErrorDialog
struct UBP_MordhauGameInstance_C_ShowNetworkErrorDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnErrorOkClicked
struct UBP_MordhauGameInstance_C_OnErrorOkClicked_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreatePasswordDialog
struct UBP_MordhauGameInstance_C_CreatePasswordDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateNetworkErrorDialog
struct UBP_MordhauGameInstance_C_CreateNetworkErrorDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.CreateJoiningDialog
struct UBP_MordhauGameInstance_C_CreateJoiningDialog_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ShowJoiningDialog
struct UBP_MordhauGameInstance_C_ShowJoiningDialog_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnJoiningCancelClick
struct UBP_MordhauGameInstance_C_OnJoiningCancelClick_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordTextEntered
struct UBP_MordhauGameInstance_C_OnPasswordTextEntered_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ETextCommit>                 Commit_Method;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.Join
struct UBP_MordhauGameInstance_C_Join_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.JoinSessionSearchResult
struct UBP_MordhauGameInstance_C_JoinSessionSearchResult_Params
{
	struct FServerSearchResult                         SearchResult;                                              // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordCancelClicked
struct UBP_MordhauGameInstance_C_OnPasswordCancelClicked_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.OnPasswordOKClicked
struct UBP_MordhauGameInstance_C_OnPasswordOKClicked_Params
{
};

// Function BP_MordhauGameInstance.BP_MordhauGameInstance_C.ExecuteUbergraph_BP_MordhauGameInstance
struct UBP_MordhauGameInstance_C_ExecuteUbergraph_BP_MordhauGameInstance_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
