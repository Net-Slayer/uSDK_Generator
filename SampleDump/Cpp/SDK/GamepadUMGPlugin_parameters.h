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

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsHoveringNewWidget
struct UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
struct UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetLastKeyPressed
struct UVirtualCursorFunctionLibrary_GetLastKeyPressed_Params
{
	struct FKey                                        ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetLastCustomInputMode
struct UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Params
{
	TEnumAsByte<Mordhau_EInputMode>                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetHoveredWidgetPosition
struct UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Params
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetHoveredWidgetName
struct UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.FlushLastKeyPressed
struct UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Params
{
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
struct UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
struct UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeUIOnly
struct UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     InWidgetToFocus;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EMouseLockMode                              InMouseLockMode;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeGameOnly
struct UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeGameAndUI
struct UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     InWidgetToFocus;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EMouseLockMode                              InMouseLockMode;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideCursorDuringCapture;                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
