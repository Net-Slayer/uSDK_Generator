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
// Classes
//---------------------------------------------------------------------------

// Class GamepadUMGPlugin.GamepadCursorSettings
// 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
class UGamepadCursorSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                          AnalogCursorAccelerationCurve;                             // 0x0038(0x0088) (Edit, Config, NativeAccessSpecifierPrivate)
	float                                              MaxAnalogCursorSpeed;                                      // 0x00C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxAnalogCursorSpeedWhenHovered;                           // 0x00C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AnalogCursorDragCoefficient;                               // 0x00C8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AnalogCursorDragCoefficientWhenHovered;                    // 0x00CC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MinAnalogCursorSpeed;                                      // 0x00D0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AnalogCursorDeadZone;                                      // 0x00D4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AnalogCursorAccelerationMultiplier;                        // 0x00D8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AnalogCursorSize;                                          // 0x00DC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseEngineAnalogCursor;                                    // 0x00E0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAnalogCursorNoAcceleration;                               // 0x00E1(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2KMS[0x16];                                    // 0x00E2(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GamepadUMGPlugin.GamepadCursorSettings");
		return ptr;
	}



};

// Class GamepadUMGPlugin.VirtualCursorFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GamepadUMGPlugin.VirtualCursorFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsHoveringNewWidget();
	bool STATIC_IsCursorOverInteractableWidget();
	struct FKey STATIC_GetLastKeyPressed();
	TEnumAsByte<Mordhau_EInputMode> STATIC_GetLastCustomInputMode();
	bool STATIC_GetHoveredWidgetPosition(struct FVector2D* Position);
	struct FName STATIC_GetHoveredWidgetName();
	void STATIC_FlushLastKeyPressed();
	void STATIC_EnableVirtualCursor(class APlayerController* PC);
	void STATIC_DisableVirtualCursor(class APlayerController* PC);
	void STATIC_CustomSetInputModeUIOnly(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode);
	void STATIC_CustomSetInputModeGameOnly(class APlayerController* PlayerController);
	void STATIC_CustomSetInputModeGameAndUI(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
