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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C
// 0x0058 (FullSize[0x0288] - InheritedSize[0x0230])
class UBP_ContextPopupEntry_Interface_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  ButtonText;                                                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ContextButton;                                             // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      Interface[0x10];                                           // 0x0248(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	struct FString                                     ButtonLabel;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       HoverText;                                                 // 0x0268(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	class UBP_ContextPopupWrapper_Interface_C*         Wrapper;                                                   // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C");
		return ptr;
	}



	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_BP_ContextPopupEntry_Interface(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
