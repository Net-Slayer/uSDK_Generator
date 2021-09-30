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

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.CollapseIfConsole
struct UBP_KeyBindingsSettings_C_CollapseIfConsole_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SetWidgetBinding
struct UBP_KeyBindingsSettings_C_SetWidgetBinding_Params
{
	class UBP_KeyBindingElementWidget_C*               Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsPrimary;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindDuplicateBindingWidget
struct UBP_KeyBindingsSettings_C_FindDuplicateBindingWidget_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsPrimary;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_KeyBindingElementWidget_C*               Widget;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.SelectWidget
struct UBP_KeyBindingsSettings_C_SelectWidget_Params
{
	class UBP_KeyBindingElementWidget_C*               Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseWheel
struct UBP_KeyBindingsSettings_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewMouseButtonDown
struct UBP_KeyBindingsSettings_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnMouseMove
struct UBP_KeyBindingsSettings_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.FindWidgetByName
struct UBP_KeyBindingsSettings_C_FindWidgetByName_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_KeyBindingElementWidget_C*               Widget;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.PopulateCustomBindings
struct UBP_KeyBindingsSettings_C_PopulateCustomBindings_Params
{
	int                                                SourceScheme;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.HandleInputEvent
struct UBP_KeyBindingsSettings_C_HandleInputEvent_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               bIsAxis;                                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                                 _Handled;                                                  // 0x0020(0x00B8)  (Parm, OutParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnAnalogValueChanged
struct UBP_KeyBindingsSettings_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnPreviewKeyDown
struct UBP_KeyBindingsSettings_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingsSettings_C_BndEvt__applyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingsSettings_C_BndEvt__resetButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UBP_KeyBindingsSettings_C_BndEvt__ControlsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.Construct
struct UBP_KeyBindingsSettings_C_Construct_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnYesClicked
struct UBP_KeyBindingsSettings_C_OnYesClicked_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.OnNoClicked
struct UBP_KeyBindingsSettings_C_OnNoClicked_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ApplyKeyBindings
struct UBP_KeyBindingsSettings_C_ApplyKeyBindings_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ResetConfirm
struct UBP_KeyBindingsSettings_C_ResetConfirm_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ResetCancel
struct UBP_KeyBindingsSettings_C_ResetCancel_Params
{
};

// Function BP_KeyBindingsSettings.BP_KeyBindingsSettings_C.ExecuteUbergraph_BP_KeyBindingsSettings
struct UBP_KeyBindingsSettings_C_ExecuteUbergraph_BP_KeyBindingsSettings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
