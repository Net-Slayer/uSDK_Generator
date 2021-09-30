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

// Function BP_BaseDialog.BP_BaseDialog_C.GetTitleText
struct UBP_BaseDialog_C_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_BaseDialog.BP_BaseDialog_C.OnMouseButtonDown_1
struct UBP_BaseDialog_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_BaseDialog.BP_BaseDialog_C.Show
struct UBP_BaseDialog_C_Show_Params
{
};

// Function BP_BaseDialog.BP_BaseDialog_C.Hide
struct UBP_BaseDialog_C_Hide_Params
{
};

// Function BP_BaseDialog.BP_BaseDialog_C.ExecuteUbergraph_BP_BaseDialog
struct UBP_BaseDialog_C_ExecuteUbergraph_BP_BaseDialog_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
