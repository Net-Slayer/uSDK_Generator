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

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnhideMouse
struct UBP_CustomizationPreview_C_UnhideMouse_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.HideMouse
struct UBP_CustomizationPreview_C_HideMouse_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyDown
struct UBP_CustomizationPreview_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonUp
struct UBP_CustomizationPreview_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseButtonDown
struct UBP_CustomizationPreview_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.UnbindEvents
struct UBP_CustomizationPreview_C_UnbindEvents_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheel
struct UBP_CustomizationPreview_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseMove
struct UBP_CustomizationPreview_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseLeave
struct UBP_CustomizationPreview_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseEnter
struct UBP_CustomizationPreview_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.Tick
struct UBP_CustomizationPreview_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.ExecuteUbergraph_BP_CustomizationPreview
struct UBP_CustomizationPreview_C_ExecuteUbergraph_BP_CustomizationPreview_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnKeyPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnKeyPressed__DelegateSignature_Params
{
	struct FKey                                        KeyName;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBReleased__DelegateSignature
struct UBP_CustomizationPreview_C_OnMMBReleased__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMMBPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnMMBPressed__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBReleased__DelegateSignature
struct UBP_CustomizationPreview_C_OnRMBReleased__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnRMBPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnRMBPressed__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBReleased__DelegateSignature
struct UBP_CustomizationPreview_C_OnLMBReleased__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnLMBPressed__DelegateSignature
struct UBP_CustomizationPreview_C_OnLMBPressed__DelegateSignature_Params
{
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseAxis__DelegateSignature
struct UBP_CustomizationPreview_C_OnMouseAxis__DelegateSignature_Params
{
	struct FVector2D                                   Movement;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnMouseWheelScrolling__DelegateSignature
struct UBP_CustomizationPreview_C_OnMouseWheelScrolling__DelegateSignature_Params
{
	float                                              ScrollDelta;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomizationPreview.BP_CustomizationPreview_C.OnDrag__DelegateSignature
struct UBP_CustomizationPreview_C_OnDrag__DelegateSignature_Params
{
	float                                              DeltaDistance;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
