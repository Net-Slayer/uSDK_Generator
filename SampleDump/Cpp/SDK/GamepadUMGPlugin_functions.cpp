// Name: Mordhau, Version: Patch23

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
//		Offset -> 0x005F93B0
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsHoveringNewWidget
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVirtualCursorFunctionLibrary::STATIC_IsHoveringNewWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsHoveringNewWidget");

	UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F9380
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVirtualCursorFunctionLibrary::STATIC_IsCursorOverInteractableWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget");

	UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F92C0
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetLastKeyPressed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FKey                                        ReturnValue                                                (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FKey UVirtualCursorFunctionLibrary::STATIC_GetLastKeyPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetLastKeyPressed");

	UVirtualCursorFunctionLibrary_GetLastKeyPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F9290
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetLastCustomInputMode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TEnumAsByte<Mordhau_EInputMode>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Mordhau_EInputMode> UVirtualCursorFunctionLibrary::STATIC_GetLastCustomInputMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetLastCustomInputMode");

	UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F9200
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetHoveredWidgetPosition
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UVirtualCursorFunctionLibrary::STATIC_GetHoveredWidgetPosition(struct FVector2D* Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetHoveredWidgetPosition");

	UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F91C0
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetHoveredWidgetName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UVirtualCursorFunctionLibrary::STATIC_GetHoveredWidgetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.GetHoveredWidgetName");

	UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x005F91A0
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.FlushLastKeyPressed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UVirtualCursorFunctionLibrary::STATIC_FlushLastKeyPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.FlushLastKeyPressed");

	UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005F9130
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVirtualCursorFunctionLibrary::STATIC_EnableVirtualCursor(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor");

	UVirtualCursorFunctionLibrary_EnableVirtualCursor_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005F90C0
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVirtualCursorFunctionLibrary::STATIC_DisableVirtualCursor(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor");

	UVirtualCursorFunctionLibrary_DisableVirtualCursor_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005F8FD0
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeUIOnly
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EMouseLockMode                              InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVirtualCursorFunctionLibrary::STATIC_CustomSetInputModeUIOnly(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeUIOnly");

	UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005F8F60
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeGameOnly
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVirtualCursorFunctionLibrary::STATIC_CustomSetInputModeGameOnly(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeGameOnly");

	UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x005F8E20
//		Name   -> Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeGameAndUI
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EMouseLockMode                              InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVirtualCursorFunctionLibrary::STATIC_CustomSetInputModeGameAndUI(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadUMGPlugin.VirtualCursorFunctionLibrary.CustomSetInputModeGameAndUI");

	UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Params params;
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
