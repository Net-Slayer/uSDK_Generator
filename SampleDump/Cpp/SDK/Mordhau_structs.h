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
// Enums
//---------------------------------------------------------------------------

// Enum Mordhau.EMordhauDamageType
enum class Mordhau_EMordhauDamageType : uint8_t
{
	EMordhauDamageType__Generic    = 0,
	EMordhauDamageType__Melee      = 1,
	EMordhauDamageType__Ranged     = 2,
	EMordhauDamageType__Fall       = 3,
	EMordhauDamageType__Fire       = 4,
	EMordhauDamageType__EMordhauDamageType_MAX = 5,

};

// Enum Mordhau.EServerList
enum class Mordhau_EServerList : uint8_t
{
	EServerList__Internet          = 0,
	EServerList__Favorites         = 1,
	EServerList__Recent            = 2,
	EServerList__Friends           = 3,
	EServerList__LAN               = 4,
	EServerList__EServerList_MAX   = 5,

};

// Enum Mordhau.EAdvancedCharacterFlags
enum class Mordhau_EAdvancedCharacterFlags : uint8_t
{
	EAdvancedCharacterFlags__None  = 0,
	EAdvancedCharacterFlags__Airborne = 1,
	EAdvancedCharacterFlags__Burning = 2,
	EAdvancedCharacterFlags__RagdollFalling = 3,
	EAdvancedCharacterFlags__Jumped = 4,
	EAdvancedCharacterFlags__EAdvancedCharacterFlags_MAX = 5,

};

// Enum Mordhau.EAttackType
enum class Mordhau_EAttackType : uint8_t
{
	EAttackType__Regular           = 0,
	EAttackType__Riposte           = 1,
	EAttackType__Combo             = 2,
	EAttackType__PostClash         = 3,
	EAttackType__Morph             = 4,
	EAttackType__MissCombo         = 5,
	EAttackType__EAttackType_MAX   = 6,

};

// Enum Mordhau.EAttackStage
enum class Mordhau_EAttackStage : uint8_t
{
	EAttackStage__Windup           = 0,
	EAttackStage__Release          = 1,
	EAttackStage__Recovery         = 2,
	EAttackStage__EAttackStage_MAX = 3,

};

// Enum Mordhau.EConfigValueType
enum class Mordhau_EConfigValueType : uint8_t
{
	EConfigValueType__bool_type    = 0,
	EConfigValueType__int_type     = 1,
	EConfigValueType__float_type   = 2,
	EConfigValueType__vector_type  = 3,
	EConfigValueType__vector2d_type = 4,
	EConfigValueType__rotator_type = 5,
	EConfigValueType__string_type  = 6,
	EConfigValueType__color_type   = 7,
	EConfigValueType__array_type   = 8,
	EConfigValueType__EConfigValueType_MAX = 9,

};

// Enum Mordhau.ESwayMethod
enum class Mordhau_ESwayMethod : uint8_t
{
	ESwayMethod__Sin               = 0,
	ESwayMethod__Constant          = 1,
	ESwayMethod__ESwayMethod_MAX   = 2,

};

// Enum Mordhau.EModeSwitchType
enum class Mordhau_EModeSwitchType : uint8_t
{
	EModeSwitchType__Regular       = 0,
	EModeSwitchType__Simple        = 1,
	EModeSwitchType__LeftToRightHand = 2,
	EModeSwitchType__RightToLeftHand = 3,
	EModeSwitchType__EModeSwitchType_MAX = 4,

};

// Enum Mordhau.ESwitchStage
enum class Mordhau_ESwitchStage : uint8_t
{
	ESwitchStage__Reaching         = 0,
	ESwitchStage__Drawing          = 1,
	ESwitchStage__ESwitchStage_MAX = 2,

};

// Enum Mordhau.EFeintType
enum class Mordhau_EFeintType : uint8_t
{
	EFeintType__Regular            = 0,
	EFeintType__Combo              = 1,
	EFeintType__Chamber            = 2,
	EFeintType__EFeintType_MAX     = 3,

};

// Enum Mordhau.ERconLogTypes
enum class Mordhau_ERconLogTypes : uint8_t
{
	ERconLogTypes__fatal           = 0,
	ERconLogTypes__error           = 1,
	ERconLogTypes__warning         = 2,
	ERconLogTypes__display         = 3,
	ERconLogTypes__log             = 4,
	ERconLogTypes__verbose         = 5,
	ERconLogTypes__very_verbose    = 6,
	ERconLogTypes__ERconLogTypes_MAX = 7,

};

// Enum Mordhau.EAIFacingMode
enum class Mordhau_EAIFacingMode : uint8_t
{
	EAIFacingMode__Movement        = 0,
	EAIFacingMode__Location        = 1,
	EAIFacingMode__Actor           = 2,
	EAIFacingMode__Actor2D         = 3,
	EAIFacingMode__Bone            = 4,
	EAIFacingMode__EAIFacingMode_MAX = 5,

};

// Enum Mordhau.EBeaconRequest
enum class Mordhau_EBeaconRequest : uint8_t
{
	EBeaconRequest__Ping           = 0,
	EBeaconRequest__ReserveSlots   = 1,
	EBeaconRequest__EBeaconRequest_MAX = 2,

};

// Enum Mordhau.EReservationStatus
enum class Mordhau_EReservationStatus : uint8_t
{
	EReservationStatus__Success    = 0,
	EReservationStatus__Full       = 1,
	EReservationStatus__Failure    = 2,
	EReservationStatus__EReservationStatus_MAX = 3,

};

// Enum Mordhau.EHorseGear
enum class Mordhau_EHorseGear : uint8_t
{
	EHorseGear__Walk               = 0,
	EHorseGear__Trot               = 1,
	EHorseGear__Canter             = 2,
	EHorseGear__Gallop             = 3,
	EHorseGear__Total              = 4,
	EHorseGear__EHorseGear_MAX     = 5,

};

// Enum Mordhau.EMovementRestriction
enum class Mordhau_EMovementRestriction : uint8_t
{
	EMovementRestriction__None     = 0,
	EMovementRestriction__PartialSprint = 1,
	EMovementRestriction__Walk     = 2,
	EMovementRestriction__NoMovement = 3,
	EMovementRestriction__EMovementRestriction_MAX = 4,

};

// Enum Mordhau.EPerk
enum class Mordhau_EPerk : uint8_t
{
	EPerk__Pugilist                = 0,
	EPerk__Acrobat                 = 1,
	EPerk__Fury                    = 2,
	EPerk__Peasant                 = 3,
	EPerk__Fireproof               = 4,
	EPerk__Huntsman                = 5,
	EPerk__Tank                    = 6,
	EPerk__Rat                     = 7,
	EPerk__Cat                     = 8,
	EPerk__Wrecker                 = 9,
	EPerk__Smith                   = 10,
	EPerk__Dwarf                   = 11,
	EPerk__SecondWind              = 12,
	EPerk__Bloodlust               = 13,
	EPerk__Rush                    = 14,
	EPerk__FleshWound              = 15,
	EPerk__Scavenger               = 16,
	EPerk__Dodge                   = 17,
	EPerk__Ranger                  = 18,
	EPerk__Mule                    = 19,
	EPerk__Butcher                 = 20,
	EPerk__Stun                    = 21,
	EPerk__Supplied                = 22,
	EPerk__EPerk_MAX               = 23,

};

// Enum Mordhau.EAttackMove
enum class Mordhau_EAttackMove : uint8_t
{
	EAttackMove__RightStrike       = 0,
	EAttackMove__LeftStrike        = 1,
	EAttackMove__Stab              = 2,
	EAttackMove__AltStab           = 3,
	EAttackMove__Kick              = 4,
	EAttackMove__Bash              = 5,
	EAttackMove__Couch             = 6,
	EAttackMove__Ranged            = 7,
	EAttackMove__EAttackMove_MAX   = 8,

};

// Enum Mordhau.EProfileValidationFailedReason
enum class Mordhau_EProfileValidationFailedReason : uint8_t
{
	EProfileValidationFailedReason__Unset = 0,
	EProfileValidationFailedReason__NotEnoughPoints = 1,
	EProfileValidationFailedReason__SkillTooLow = 2,
	EProfileValidationFailedReason__EProfileValidationFailedReason_MAX = 3,

};

// Enum Mordhau.EMainWearableSlot
enum class Mordhau_EMainWearableSlot : uint8_t
{
	EMainWearableSlot__Head        = 0,
	EMainWearableSlot__UpperChest  = 1,
	EMainWearableSlot__Legs        = 2,
	EMainWearableSlot__EMainWearableSlot_MAX = 3,

};

// Enum Mordhau.EWearableSlot
enum class Mordhau_EWearableSlot : uint8_t
{
	EWearableSlot__Head            = 0,
	EWearableSlot__Coif            = 1,
	EWearableSlot__UpperChest      = 2,
	EWearableSlot__LowerChest      = 3,
	EWearableSlot__Shoulders       = 4,
	EWearableSlot__Arms            = 5,
	EWearableSlot__Hands           = 6,
	EWearableSlot__Legs            = 7,
	EWearableSlot__Feet            = 8,
	EWearableSlot__Total           = 9,
	EWearableSlot__Invalid         = 10,
	EWearableSlot__EWearableSlot_MAX = 11,

};

// Enum Mordhau.EItemRarity
enum class Mordhau_EItemRarity : uint8_t
{
	EItemRarity__Common            = 0,
	EItemRarity__Uncommon          = 1,
	EItemRarity__Rare              = 2,
	EItemRarity__Epic              = 3,
	EItemRarity__Legendary         = 4,
	EItemRarity__Exclusive         = 5,
	EItemRarity__EItemRarity_MAX   = 6,

};

// Enum Mordhau.EEquipmentCategory
enum class Mordhau_EEquipmentCategory : uint8_t
{
	EEquipmentCategory__Undefined  = 0,
	EEquipmentCategory__OneHanded  = 1,
	EEquipmentCategory__TwoHanded  = 2,
	EEquipmentCategory__Ranged     = 3,
	EEquipmentCategory__Shield     = 4,
	EEquipmentCategory__Utility    = 5,
	EEquipmentCategory__EEquipmentCategory_MAX = 6,

};

// Enum Mordhau.EEquipmentType
enum class Mordhau_EEquipmentType : uint8_t
{
	EEquipmentType__Undefined      = 0,
	EEquipmentType__MeleeNoAltMode = 1,
	EEquipmentType__MeleeWithAltMode = 2,
	EEquipmentType__MeleeThrownAltMode = 3,
	EEquipmentType__ProjectileWeapon = 4,
	EEquipmentType__Shield         = 5,
	EEquipmentType__Thrown         = 6,
	EEquipmentType__Utility        = 7,
	EEquipmentType__EEquipmentType_MAX = 8,

};

// Enum Mordhau.EAuxiliaryMeshMode
enum class Mordhau_EAuxiliaryMeshMode : uint8_t
{
	EAuxiliaryMeshMode__None       = 0,
	EAuxiliaryMeshMode__Arrow      = 1,
	EAuxiliaryMeshMode__Bolt       = 2,
	EAuxiliaryMeshMode__Scabbard   = 3,
	EAuxiliaryMeshMode__Pommel     = 4,
	EAuxiliaryMeshMode__EAuxiliaryMeshMode_MAX = 5,

};

// Enum Mordhau.EMatchmakingState
enum class Mordhau_EMatchmakingState : uint8_t
{
	EMatchmakingState__Idle        = 0,
	EMatchmakingState__Searching   = 1,
	EMatchmakingState__Waiting     = 2,
	EMatchmakingState__Joining     = 3,
	EMatchmakingState__EMatchmakingState_MAX = 4,

};

// Enum Mordhau.ERichPresenceStatus
enum class Mordhau_ERichPresenceStatus : uint8_t
{
	ERichPresenceStatus__MainMenu  = 0,
	ERichPresenceStatus__LocalMatch = 1,
	ERichPresenceStatus__OnlineMatch = 2,
	ERichPresenceStatus__ERichPresenceStatus_MAX = 3,

};

// Enum Mordhau.ELobbyMessage
enum class Mordhau_ELobbyMessage : uint8_t
{
	ELobbyMessage__Invalid         = 0,
	ELobbyMessage__Kick            = 1,
	ELobbyMessage__Status          = 2,
	ELobbyMessage__Profile         = 3,
	ELobbyMessage__ELobbyMessage_MAX = 4,

};

// Enum Mordhau.EOfficialServerVisibility
enum class Mordhau_EOfficialServerVisibility : uint8_t
{
	EOfficialServerVisibility__ServerBrowser = 0,
	EOfficialServerVisibility__Matchmaking = 1,
	EOfficialServerVisibility__EOfficialServerVisibility_MAX = 2,

};

// Enum Mordhau.EClientRequestState
enum class Mordhau_EClientRequestState : uint8_t
{
	EClientRequestState__SessionTicket = 0,
	EClientRequestState__Stats     = 1,
	EClientRequestState__Inventory = 2,
	EClientRequestState__Authenticating = 3,
	EClientRequestState__Done      = 4,
	EClientRequestState__EClientRequestState_MAX = 5,

};

// Enum Mordhau.EServerFilterCategories
enum class Mordhau_EServerFilterCategories : uint8_t
{
	EServerFilterCategories__Server = 0,
	EServerFilterCategories__Population = 1,
	EServerFilterCategories__Modded = 2,
	EServerFilterCategories__Password = 3,
	EServerFilterCategories__EServerFilterCategories_MAX = 4,

};

// Enum Mordhau.EBlockedReason
enum class Mordhau_EBlockedReason : uint8_t
{
	EBlockedReason__Parry          = 0,
	EBlockedReason__Chamber        = 1,
	EBlockedReason__World          = 2,
	EBlockedReason__Clash          = 3,
	EBlockedReason__Hit            = 4,
	EBlockedReason__EBlockedReason_MAX = 5,

};

// Enum Mordhau.EBlockType
enum class Mordhau_EBlockType : uint8_t
{
	EBlockType__Regular            = 0,
	EBlockType__AltRegular         = 1,
	EBlockType__ShieldWall         = 2,
	EBlockType__EBlockType_MAX     = 3,

};

// Enum Mordhau.EMovementModifier
enum class Mordhau_EMovementModifier : uint8_t
{
	EMovementModifier__Walk        = 0,
	EMovementModifier__Strafe      = 1,
	EMovementModifier__Backpedal   = 2,
	EMovementModifier__PartialSprint = 3,
	EMovementModifier__Sprint      = 4,
	EMovementModifier__Rush        = 5,
	EMovementModifier__Chasing     = 6,
	EMovementModifier__Supersprint = 7,
	EMovementModifier__EMovementModifier_MAX = 8,

};

// Enum Mordhau.EServerSort
enum class Mordhau_EServerSort : uint8_t
{
	EServerSort__ServerNameAscend  = 0,
	EServerSort__ServerNameDescend = 1,
	EServerSort__MapNameAscend     = 2,
	EServerSort__MapNameDescend    = 3,
	EServerSort__CountAscend       = 4,
	EServerSort__CountDescend      = 5,
	EServerSort__PingAscend        = 6,
	EServerSort__PingDescend       = 7,
	EServerSort__EServerSort_MAX   = 8,

};

// Enum Mordhau.ECommandType
enum class Mordhau_ECommandType : uint8_t
{
	ECommandType__Invalid          = 0,
	ECommandType__AddAdmin         = 1,
	ECommandType__RemoveAdmin      = 2,
	ECommandType__Kick             = 3,
	ECommandType__Ban              = 4,
	ECommandType__Unban            = 5,
	ECommandType__Mute             = 6,
	ECommandType__Unmute           = 7,
	ECommandType__LookupPlayer     = 8,
	ECommandType__ECommandType_MAX = 9,

};

// Enum Mordhau.EScoreFeedReason
enum class Mordhau_EScoreFeedReason : uint8_t
{
	EScoreFeedReason__Kill         = 0,
	EScoreFeedReason__TeamKill     = 1,
	EScoreFeedReason__Assist       = 2,
	EScoreFeedReason__Suicide      = 3,
	EScoreFeedReason__PlayerDamage = 4,
	EScoreFeedReason__PlayerTeamDamage = 5,
	EScoreFeedReason__OtherDamage  = 6,
	EScoreFeedReason__OtherTeamDamage = 7,
	EScoreFeedReason__Capturing    = 8,
	EScoreFeedReason__Captured     = 9,
	EScoreFeedReason__Neutralizing = 10,
	EScoreFeedReason__Neutralized  = 11,
	EScoreFeedReason__Objective    = 12,
	EScoreFeedReason__Heal         = 13,
	EScoreFeedReason__WaveCleared  = 14,
	EScoreFeedReason__Repair       = 15,
	EScoreFeedReason__VehicleDamage = 16,
	EScoreFeedReason__VehicleTeamDamage = 17,
	EScoreFeedReason__Spawn        = 18,
	EScoreFeedReason__EScoreFeedReason_MAX = 19,

};

// Enum Mordhau.ECameraStyle
enum class Mordhau_ECameraStyle : uint8_t
{
	ECameraStyle__FirstPerson      = 0,
	ECameraStyle__ThirdPerson      = 1,
	ECameraStyle__Fixed            = 2,
	ECameraStyle__ECameraStyle_MAX = 3,

};

// Enum Mordhau.EBanType
enum class Mordhau_EBanType : uint8_t
{
	EBanType__VoteKick             = 0,
	EBanType__TeamKills            = 1,
	EBanType__EBanType_MAX         = 2,

};

// Enum Mordhau.EAntiCheat
enum class Mordhau_EAntiCheat : uint8_t
{
	EAntiCheat__Secure_Only        = 0,
	EAntiCheat__Insecure_Only      = 1,
	EAntiCheat__Both               = 2,
	EAntiCheat__EAntiCheat_MAX     = 3,

};

// Enum Mordhau.EStatSetBy
enum class Mordhau_EStatSetBy : uint8_t
{
	EStatSetBy__Client             = 0,
	EStatSetBy__Server             = 1,
	EStatSetBy__EStatSetBy_MAX     = 2,

};

// Enum Mordhau.EBroadcastTypes
enum class Mordhau_EBroadcastTypes : uint8_t
{
	EBroadcastTypes__None          = 0,
	EBroadcastTypes__Chat          = 1,
	EBroadcastTypes__Killfeed      = 2,
	EBroadcastTypes__Scorefeed     = 3,
	EBroadcastTypes__MatchState    = 4,
	EBroadcastTypes__Login         = 5,
	EBroadcastTypes__Custom        = 6,
	EBroadcastTypes__Punishment    = 7,
	EBroadcastTypes__EBroadcastTypes_MAX = 8,

};

// Enum Mordhau.EDownloadableContent
enum class Mordhau_EDownloadableContent : uint8_t
{
	EDownloadableContent__SupporterPack = 0,
	EDownloadableContent__EDownloadableContent_MAX = 1,

};

// Enum Mordhau.EInputMode
enum class Mordhau_EInputMode : uint8_t
{
	GAME_AND_UI                    = 0,
	Game                           = 1,
	UI_ONLY                        = 2,
	NONE_SPECIFIED                 = 3,
	EInputMode_MAX                 = 4,

};

// Enum Mordhau.ECallResult
enum class Mordhau_ECallResult : uint8_t
{
	ECallResult__Success           = 0,
	ECallResult__Failure           = 1,
	ECallResult__ECallResult_MAX   = 2,

};

// Enum Mordhau.ESoundMix
enum class Mordhau_ESoundMix : uint8_t
{
	ESoundMix__Master              = 0,
	ESoundMix__Effects             = 1,
	ESoundMix__Music               = 2,
	ESoundMix__Voice               = 3,
	ESoundMix__Instruments         = 4,
	ESoundMix__ESoundMix_MAX       = 5,

};

// Enum Mordhau.EBudgetType
enum class Mordhau_EBudgetType : uint8_t
{
	EBudgetType__Particle          = 0,
	EBudgetType__Total             = 1,
	EBudgetType__EBudgetType_MAX   = 2,

};

// Enum Mordhau.ECameraShakeType
enum class Mordhau_ECameraShakeType : uint8_t
{
	ECameraShakeType__Default      = 0,
	ECameraShakeType__Movement     = 1,
	ECameraShakeType__Combat       = 2,
	ECameraShakeType__ECameraShakeType_MAX = 3,

};

// Enum Mordhau.EDismembermentType
enum class Mordhau_EDismembermentType : uint8_t
{
	EDismembermentType__None       = 0,
	EDismembermentType__Blunt      = 1,
	EDismembermentType__Pierce     = 2,
	EDismembermentType__Cut        = 3,
	EDismembermentType__EDismembermentType_MAX = 4,

};

// Enum Mordhau.EMotionType
enum class Mordhau_EMotionType : uint8_t
{
	EMotionType__Idle              = 0,
	EMotionType__Attack            = 1,
	EMotionType__Parry             = 2,
	EMotionType__Flinched          = 3,
	EMotionType__Stunned           = 4,
	EMotionType__Feinted           = 5,
	EMotionType__Blocked           = 6,
	EMotionType__Disarmed          = 7,
	EMotionType__EquipmentSwitch   = 8,
	EMotionType__DropEquipment     = 9,
	EMotionType__Emote             = 10,
	EMotionType__EquipmentModeSwitch = 11,
	EMotionType__RangedDraw        = 12,
	EMotionType__RangedRelease     = 13,
	EMotionType__QuickthrowDraw    = 14,
	EMotionType__QuickthrowRelease = 15,
	EMotionType__InteractWith      = 16,
	EMotionType__Reload            = 17,
	EMotionType__RangedCancel      = 18,
	EMotionType__CouchedAttack     = 19,
	EMotionType__PommelDraw        = 20,
	EMotionType__PommelThrow       = 21,
	EMotionType__EmoteCancel       = 22,
	EMotionType__Holster           = 23,
	EMotionType__EnterVehicle      = 24,
	EMotionType__LeaveVehicle      = 25,
	EMotionType__RagdollFalling    = 26,
	EMotionType__Climbing          = 27,
	EMotionType__Ability           = 28,
	EMotionType__EMotionType_MAX   = 29,

};

// Enum Mordhau.EParryRecoveryType
enum class Mordhau_EParryRecoveryType : uint8_t
{
	EParryRecoveryType__Success    = 0,
	EParryRecoveryType__Fail       = 1,
	EParryRecoveryType__Miss       = 2,
	EParryRecoveryType__EParryRecoveryType_MAX = 3,

};

// Enum Mordhau.EParryStage
enum class Mordhau_EParryStage : uint8_t
{
	EParryStage__Parry             = 0,
	EParryStage__Recovery          = 1,
	EParryStage__EParryStage_MAX   = 2,

};

// Enum Mordhau.EWeaponState
enum class Mordhau_EWeaponState : uint8_t
{
	EWeaponState__Loaded           = 0,
	EWeaponState__Releasing        = 1,
	EWeaponState__Recovery         = 2,
	EWeaponState__Loading          = 3,
	EWeaponState__Building         = 4,
	EWeaponState__EWeaponState_MAX = 5,

};

// Enum Mordhau.EVehicleFlags
enum class Mordhau_EVehicleFlags : uint8_t
{
	EVehicleFlags__None            = 0,
	EVehicleFlags__Burning         = 1,
	EVehicleFlags__EVehicleFlags_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Mordhau.RconParameter
// 0x0028
struct FRconParameter
{
	struct FString                                     ParameterName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ParameterDescription;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiredParameter;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PlayFab_EPFJson>                       ExpectedJsonType;                                          // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U3ZQ[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RconCommandInfo
// 0x0050
struct FRconCommandInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Author;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Aliases;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRconParameter>                      Parameters;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PrePhysTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FPrePhysTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_9EYW[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.SphericalLimbBounds
// 0x0034
struct FSphericalLimbBounds
{
	struct FName                                       StartSocket;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EndSocket;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachSocket;                                              // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoneStartCached;                                           // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoneEndCached;                                             // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.NetDamage
// 0x0024
struct FNetDamage
{
	unsigned char                                      PackedType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bone;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PackedFlags;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B7XM[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector_NetQuantize                         Point;                                                     // 0x0004(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageSource;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageAgent;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CD7Z[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.FloatAndVector
// 0x0010
struct FFloatAndVector
{
	float                                              Float;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Vector;                                                    // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.DismemberedBoneData
// 0x0020
struct FDismemberedBoneData
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsPartial;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBluntForce;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GX8U[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ForceDir;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Agent;                                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.DismemberedQueue
// 0x0060
struct FDismemberedQueue
{
	unsigned char                                      BoneSet[0x50];                                             // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<struct FDismemberedBoneData>                DismemberedBonesQueue;                                     // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Mordhau.PatternInfo
// 0x0010
struct FPatternInfo
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasColor1;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasColor2;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasColor3;                                                // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R972[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.PerspectiveFloat
// 0x0008
struct FPerspectiveFloat
{
	float                                              ThirdPerson;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FirstPerson;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveAnimSequence
// 0x0010
struct FPerspectiveAnimSequence
{
	class UAnimSequence*                               ThirdPerson;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               FirstPerson;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveCurveFloat
// 0x0010
struct FPerspectiveCurveFloat
{
	class UCurveFloat*                                 ThirdPerson;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FirstPerson;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveBool
// 0x0002
struct FPerspectiveBool
{
	bool                                               ThirdPerson;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FirstPerson;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveAnimSequenceBase
// 0x0010
struct FPerspectiveAnimSequenceBase
{
	class UAnimSequenceBase*                           ThirdPerson;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           FirstPerson;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveAnimMontage
// 0x0010
struct FPerspectiveAnimMontage
{
	class UAnimMontage*                                ThirdPerson;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                FirstPerson;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.WoundInfo
// 0x0014
struct FWoundInfo
{
	struct FVector2D                                   WoundType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WoundSize;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AttackInfo
// 0x0128
struct FAttackInfo
{
	bool                                               bCanCombo;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanMissCombo;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForcesRearingFromFront;                                   // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoFlinch;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoReleaseFlinch;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45V0[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FlinchSpeedModifier;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FlinchDurationModifier;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Windup;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ComboWindupIncrease;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MissComboExtraWindupIncrease;                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Release;                                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FeintLockOut;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FeintCost;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChamberFeintCost;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChamberCost;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MorphCost;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TurnCaps;                                                  // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUT2[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 TurnCapCurve;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 HitEffectIKWeightCurve;                                    // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitEffectSpeedUpExponent;                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaDrain;                                              // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraStaminaDrainVsHeldBlock;                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaDamage;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Damage;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      HeadBonus;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      LegBonus;                                                  // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WoodDamage;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StoneDamage;                                               // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopOnHit;                                                // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrainAllStamOnBlock;                                      // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRagdollOnBlock;                                           // 0x009A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTS9[0x1];                                     // 0x009B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChipDamagePercentageOnBlock;                               // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillClashWhenParried;                                     // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRagdollOnHit;                                             // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDismountsHorseRider;                                      // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDismountsLadderUser;                                      // 0x00A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MissStaminaCost;                                           // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitStaminaReward;                                          // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MissRecovery;                                              // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitKockbackFactor;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FollowAttackDirectionFactor;                               // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWoundInfo>                          WoundInfoArray;                                            // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HitShake;                                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HitStopShake;                                              // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      IgnoreBones[0x50];                                         // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty

};

// ScriptStruct Mordhau.PerspectiveAnimSequenceBaseArray
// 0x0010
struct FPerspectiveAnimSequenceBaseArray
{
	TArray<struct FPerspectiveAnimSequenceBase>        Array;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.BlockResult
// 0x0008
struct FBlockResult
{
	Mordhau_EBlockedReason                             Reason;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsStun;                                                   // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDisarm;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRanged;                                                 // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsCancel;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPartyFlag;                                                // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresSelfBlockEvent;                                   // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Surface;                                                   // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.WearableCustomization
// 0x0040
struct FWearableCustomization
{
	int                                                ID;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5S5F[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Colors;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Team1Colors;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Team2Colors;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Pattern;                                                   // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WB33[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.EquipmentCustomization
// 0x0030
struct FEquipmentCustomization
{
	int                                                ID;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VE0D[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              Colors;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              Parts;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Pattern;                                                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Skin;                                                      // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HPED[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AppearanceCustomization
// 0x0028
struct FAppearanceCustomization
{
	int                                                Emblem;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIMS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              EmblemColors;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MetalRoughnessScale;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MetalTint;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Age;                                                       // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Voice;                                                     // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VoicePitch;                                                // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsFemale;                                                 // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Fat;                                                       // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Skinny;                                                    // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Strong;                                                    // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SkinColor;                                                 // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Face;                                                      // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EyeColor;                                                  // 0x0023(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HairColor;                                                 // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Hair;                                                      // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FacialHair;                                                // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Eyebrows;                                                  // 0x0027(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.FaceCustomization
// 0x0030
struct FFaceCustomization
{
	TArray<uint16_t>                                   Translate;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint16_t>                                   Rotate;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint16_t>                                   Scale;                                                     // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.SkillsCustomization
// 0x0004
struct FSkillsCustomization
{
	uint32_t                                           Perks;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.SpawnablePlaneInfo
// 0x0018
struct FSpawnablePlaneInfo
{
	float                                              Forward;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Backward;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Left;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Right;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightXAxisPercentage;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftXAxisPercentage;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.SpawnableObjectInfo
// 0x0098
struct FSpawnableObjectInfo
{
	class UStaticMesh*                                 Preview;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               PreviewSkeletal;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Cost;                                                      // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D5TY[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    RotationOffset;                                            // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffsetPreview;                                     // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    NotHitRotationPreviewOffset;                               // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     NotHitLocationPreviewOffset;                               // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ScalePreview;                                              // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ActorClass;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DisplayName;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PlacableLimitName;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlaceableLimitMax;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnActorOffset;                                          // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoNotAttach;                                              // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOTA[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BoxCheckExtents;                                           // 0x007C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoxCheckOffset;                                            // 0x0088(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZLS9[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.NetState
// 0x0028
struct FNetState
{
	float                                              Timestamp;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LocalTimestamp;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Position;                                                  // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	uint16_t                                           Pitch;                                                     // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Yaw;                                                       // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Roll;                                                      // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8RL3[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.FootGroundingLimb
// 0x01E8
struct FFootGroundingLimb
{
	struct FName                                       TraceEndBone;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TraceStartBone;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TraceDistance;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UpValueLimits;                                             // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  TraceResult;                                               // 0x001C(0x0088) (BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9R8W[0x118];                                   // 0x00A4(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RootSpaceImpactZ;                                          // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x01C0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     InternalTranslationOffset;                                 // 0x01CC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TranslationOffset;                                         // 0x01D8(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ZU1[0x4];                                     // 0x01E4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RepFaceArrayShortWithVersion
// 0x0018
struct FRepFaceArrayShortWithVersion
{
	TArray<uint16_t>                                   Array;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KAYB[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RepArrayByteWithVersion
// 0x0018
struct FRepArrayByteWithVersion
{
	TArray<unsigned char>                              Array;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_44OG[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RepArraySkillsWithVersion
// 0x0008
struct FRepArraySkillsWithVersion
{
	struct FSkillsCustomization                        Skills;                                                    // 0x0000(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BWD9[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RepArrayAppearanceWithVersion
// 0x0030
struct FRepArrayAppearanceWithVersion
{
	struct FAppearanceCustomization                    Appearance;                                                // 0x0000(0x0028) (NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IQV3[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.ECSDuringPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FECSDuringPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_55NW[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.ECSPostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FECSPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_C0KY[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.Stat
// 0x000C
struct FStat
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EStatSetBy                                 SetBy;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3C8[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.EquipmentPartEntry
// 0x0028
struct FEquipmentPartEntry
{
	struct FText                                       PartName;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Parts;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.EmoteEntry
// 0x0008
struct FEmoteEntry
{
	class UClass*                                      EmoteMotion;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ActorSetAndArray
// 0x0060
struct FActorSetAndArray
{
	unsigned char                                      Set[0x50];                                                 // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<class AActor*>                              Array;                                                     // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Mordhau.ActorTraceEntry
// 0x0058
struct FActorTraceEntry
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      BonesHit[0x50];                                            // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty

};

// ScriptStruct Mordhau.PlayerCountArray
// 0x0010
struct FPlayerCountArray
{
	TArray<int>                                        Values;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.HorseGearInfo
// 0x0018
struct FHorseGearInfo
{
	float                                              MaxSpeed;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAcceleration;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowJump;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRiderRegenHealth;                                      // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanRiderRegenStamina;                                     // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanHorseRegen;                                            // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0OR[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      HeadBobShake;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.GameServerFilter
// 0x0048
struct FGameServerFilter
{
	bool                                               bIsNotFull;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasPlayers;                                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEmpty;                                                  // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNotPasswordProtected;                                   // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOfficial;                                               // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsModded;                                                 // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S1D8[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinOpenSlots;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_76QS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QueueName;                                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HIEU[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNodePackedDismemberment
// 0x0010
struct FAnimNodePackedDismemberment
{
	TArray<int>                                        DismemberedBonesIndices;                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.DamageRecord
// 0x0010
struct FDamageRecord
{
	TWeakObjectPtr<class AController>                  Source;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Damage;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.NetBlock
// 0x0010
struct FNetBlock
{
	unsigned char                                      BlockedReason;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Flags;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BlockedMove;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Surface;                                                   // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       BlockingActor;                                             // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Version;                                                   // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F52V[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.NetMotion
// 0x0006
struct FNetMotion
{
	unsigned char                                      ID;                                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MotionType;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MotionParam0;                                              // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MotionParam1;                                              // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MotionParam2;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MotionDynamicParam;                                        // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.SessionSearchResult
// 0x0108
struct FSessionSearchResult
{
	unsigned char                                      UnknownData_U4XZ[0x108];                                   // 0x0000(0x0108) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.ServerSearchResult
// 0x0008 (0x0110 - 0x0108)
struct FServerSearchResult : public FSessionSearchResult
{
	Mordhau_EServerList                                ServerList;                                                // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWB0[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.BasicServerInfo
// 0x0018
struct FBasicServerInfo
{
	struct FString                                     ServerName;                                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X0O6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.PlayerMessageStruct
// 0x0028
struct FPlayerMessageStruct
{
	struct FString                                     MessageBody;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MessagePrefix;                                             // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerTeam;                                                // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NYLA[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RconEventStruct
// 0x0020
struct FRconEventStruct
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4HZ6[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.ChatCommandStruct
// 0x0020
struct FChatCommandStruct
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Type;                                                      // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRequiresAdmin;                                            // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBroadcastCommand;                                         // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHY1[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RconFlag
// 0x0040
struct FRconFlag
{
	unsigned char                                      UnknownData_97IL[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class URconCommand*>                        CommandObjects;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.GameStateLastDemotableTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FGameStateLastDemotableTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_9GUO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.GameStatePostPhysicsTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FGameStatePostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData_QBF8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.CapturePointGroup
// 0x0010
struct FCapturePointGroup
{
	TArray<class AControlPoint*>                       CapturePoints;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.GroupSoundPlayer
// 0x0018
struct FGroupSoundPlayer
{
	TWeakObjectPtr<class UAudioComponent>              CurrentlyPlayingSound;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Entries;                                                   // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.GroupSoundEntry
// 0x0010
struct FGroupSoundEntry
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.GroupSoundGroup
// 0x0080
struct FGroupSoundGroup
{
	TArray<struct FGroupSoundPlayer>                   GroupSoundPlayers;                                         // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class AActor*, struct FGroupSoundEntry>       SoundEntries;                                              // 0x0010(0x0050) (NativeAccessSpecifierPublic)
	int                                                SoundGroupsNum;                                            // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EntryMaxAge;                                               // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinEntriesToPlaySound;                                     // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RFWK[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   SoundCue;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutDuration;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoundGroupMergeDistance;                                   // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ServerStats
// 0x0018
struct FServerStats
{
	unsigned char                                      TargetTickRate;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MinTickRate;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MaxTickRate;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AvgTickRate;                                               // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           InBytesPerSecond;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           OutBytesPerSecond;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ConfiguredInternetSpeed;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NumPlayers;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MaxPlayers;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PlayerCommand
// 0x0030
struct FPlayerCommand
{
	Mordhau_ECommandType                               Type;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4ZXG[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UniquePlayerID;                                            // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntParam;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F3WQ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringParam;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ReplicatedProjectileInfo
// 0x0034
struct FReplicatedProjectileInfo
{
	struct FVector_NetQuantize100                      Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                      Orientation;                                               // 0x000C(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   HitNormal;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BounceForce;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Creator;                                                   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HitSurface;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasStopped;                                               // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasHitWorld;                                              // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HitCounter;                                                // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.FindServerSessionsFilter
// 0x0048
struct FFindServerSessionsFilter
{
	bool                                               bIsNotFull;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasPlayers;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEmpty;                                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNotPasswordProtected;                                   // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDevBuild;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOfficial;                                               // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMatchmaking;                                            // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsModded;                                                 // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Mordhau_EAntiCheat                                 AntiCheat;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TD4K[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinOpenSlots;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinSlots;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSlots;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPing;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MICE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ServerName;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	MordhauOnlineSubsystem_EServerRegion               Region;                                                    // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BL2Q[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.SpineSpaceAdditive
// 0x0084
struct FSpineSpaceAdditive
{
	struct FRotator                                    head;                                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Neck;                                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Spine1;                                                    // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    LeftShoulder;                                              // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    LeftArm;                                                   // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    LeftForearm;                                               // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    LeftHand;                                                  // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RightShoulder;                                             // 0x0054(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RightArm;                                                  // 0x0060(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RightForearm;                                              // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RightHand;                                                 // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.HighMidLowSpineSpaceAdditive
// 0x018C
struct FHighMidLowSpineSpaceAdditive
{
	struct FSpineSpaceAdditive                         High;                                                      // 0x0000(0x0084) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpineSpaceAdditive                         Mid;                                                       // 0x0084(0x0084) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpineSpaceAdditive                         Low;                                                       // 0x0108(0x0084) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveHighMidLowSpineSpaceAdditive
// 0x0318
struct FPerspectiveHighMidLowSpineSpaceAdditive
{
	struct FHighMidLowSpineSpaceAdditive               ThirdPerson;                                               // 0x0000(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FHighMidLowSpineSpaceAdditive               FirstPerson;                                               // 0x018C(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.FacialBoneSetup
// 0x0088
struct FFacialBoneSetup
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SelectionBoneOverride;                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSymmetrical;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNHQ[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SelectionBiasFactor;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ChildBones;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SymmetryTwinBoneIndex;                                     // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SymmetryTwinBoneName;                                      // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BoneIndex;                                                 // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TranslateXRange;                                           // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TranslateYRange;                                           // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TranslateZRange;                                           // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScaleXRange;                                               // 0x0054(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScaleYRange;                                               // 0x005C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ScaleZRange;                                               // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotateXRange;                                              // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotateYRange;                                              // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RotateZRange;                                              // 0x007C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_758W[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNodePackedFaceCustomization
// 0x0020
struct FAnimNodePackedFaceCustomization
{
	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup;                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          FaceCustomizationBonesTransforms;                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveVector2D
// 0x0010
struct FPerspectiveVector2D
{
	struct FVector2D                                   ThirdPerson;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FirstPerson;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CharacterGearCustomization
// 0x0020
struct FCharacterGearCustomization
{
	TArray<struct FWearableCustomization>              Wearables;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEquipmentCustomization>             Equipment;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AnglingSpineSpaceAdditive
// 0x0318
struct FAnglingSpineSpaceAdditive
{
	struct FHighMidLowSpineSpaceAdditive               Right;                                                     // 0x0000(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FHighMidLowSpineSpaceAdditive               Left;                                                      // 0x018C(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CharacterProfile
// 0x00B8
struct FCharacterProfile
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FCharacterGearCustomization                 GearCustomization;                                         // 0x0018(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAppearanceCustomization                    AppearanceCustomization;                                   // 0x0038(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FFaceCustomization                          FaceCustomization;                                         // 0x0060(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSkillsCustomization                        SkillsCustomization;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4717[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Category;                                                  // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayFabId;                                                 // 0x00A8(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CharMove
// 0x000C
struct FCharMove
{
	struct FVector                                     TargetLocation;                                            // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CharPhysics
// 0x0024
struct FCharPhysics
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ActorTraceData
// 0x0068
struct FActorTraceData
{
	bool                                               bIgnoreFurtherTraces;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsAllowedToAddForce;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_A5GB[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Set[0x50];                                                 // 0x0002(0x0050) UNKNOWN PROPERTY: SetProperty
	TArray<struct FActorTraceEntry>                    ActorTraceEntryArray;                                      // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Mordhau.EquipmentSkinEntry
// 0x0050
struct FEquipmentSkinEntry
{
	struct FText                                       SkinName;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FEquipmentPartEntry>                 PartTypes;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ColorTables;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPatternInfo>                        Patterns;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                               ShadowPhAt;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.EquipmentHolsterInfo
// 0x0060
struct FEquipmentHolsterInfo
{
	struct FName                                       HolsterSocket;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHiddenIn1P;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8ZI[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                DrawAnimation;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                DrawAnimation1P;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AltModeDrawAnimation1P;                                    // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJCP[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PlayerChatMessagesContainer
// 0x0018
struct FPlayerChatMessagesContainer
{
	TArray<struct FPlayerMessageStruct>                Messages;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O69D[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.GameplayTagCondition
// 0x0040
struct FGameplayTagCondition
{
	struct FGameplayTagContainer                       RequiredTags;                                              // 0x0000(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       BlockedTags;                                               // 0x0020(0x0020) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.GameplayTagConditionDelegate
// 0x0058
struct FGameplayTagConditionDelegate
{
	struct FGameplayTagCondition                       Condition;                                                 // 0x0000(0x0040) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    Delegate;                                                  // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	bool                                               bIsConditionSatisfied;                                     // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBHD[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.MordhauDamageInfo
// 0x00A8
struct FMordhauDamageInfo
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x0088) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0RHZ[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      DamageSource;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageAgent;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsFlinchAnimation;                                     // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3IPI[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.SteamPlayFabConversionResult
// 0x0050
struct FSteamPlayFabConversionResult
{
	TMap<struct FString, struct FString>               SteamIDPlayFabIDMap;                                       // 0x0000(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ServerRestrictionInfo
// 0x0010
struct FServerRestrictionInfo
{
	bool                                               bIsBanned;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RAB8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BanDuration;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMuted;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OZ0[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MuteDuration;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AnimNode_AttackAngling
// 0x0138 (0x0200 - 0x00C8)
struct FAnimNode_AttackAngling : public FAnimNode_SkeletalControlBase
{
	struct FSpineSpaceAdditive                         SpineSpaceAdditivePose;                                    // 0x00C8(0x0084) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              head;                                                      // 0x014C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Neck;                                                      // 0x015C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Spine;                                                     // 0x016C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftShoulder;                                              // 0x017C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftArm;                                                   // 0x018C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftForearm;                                               // 0x019C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftHand;                                                  // 0x01AC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightShoulder;                                             // 0x01BC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightArm;                                                  // 0x01CC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightForearm;                                              // 0x01DC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightHand;                                                 // 0x01EC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7Y9[0x4];                                     // 0x01FC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_BlendBetweenBones
// 0x0048 (0x0110 - 0x00C8)
struct FAnimNode_BlendBetweenBones : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              BlendBoneA;                                                // 0x00D8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              BlendBoneB;                                                // 0x00E8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              ReferenceBlendBone;                                        // 0x00F8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              BlendBetweenAlpha;                                         // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D6PC[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_Dismemberment
// 0x0010 (0x00D8 - 0x00C8)
struct FAnimNode_Dismemberment : public FAnimNode_SkeletalControlBase
{
	struct FAnimNodePackedDismemberment                Dismemberment;                                             // 0x00C8(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AnimNode_FaceCustomization
// 0x0020 (0x00E8 - 0x00C8)
struct FAnimNode_FaceCustomization : public FAnimNode_SkeletalControlBase
{
	struct FAnimNodePackedFaceCustomization            FaceCustomization;                                         // 0x00C8(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.LineTraceMemoryEntry
// 0x0024
struct FLineTraceMemoryEntry
{
	struct FVector                                     TraceStart;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceEnd;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DestroyTime;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Owner;                                                     // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.DecalInfo
// 0x0018
struct FDecalInfo
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Size;                                                      // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q9SG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.ServerAddress
// 0x0008
struct FServerAddress
{
	uint32_t                                           IP;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Port;                                                      // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQOD[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.MordhauColorItemTable
// 0x0028
struct FMordhauColorItemTable
{
	struct FText                                       TableName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              Entries;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.Achievement
// 0x0008
struct FAchievement
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveBlendSpaceBase
// 0x0010
struct FPerspectiveBlendSpaceBase
{
	class UBlendSpaceBase*                             ThirdPerson;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                             FirstPerson;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AnimNode_MordhauSpringBone
// 0x0080 (0x0148 - 0x00C8)
struct FAnimNode_MordhauSpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              bone;                                                      // 0x00C8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsRotationSpring;                                         // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRotationFlipped;                                        // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B55F[0x2];                                     // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BoneOffset;                                                // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsBoneOffsetInComponentSpace;                             // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_77K3[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BoneOffsetRotationProjection;                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringStiffness;                                           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamping;                                             // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringMass;                                                // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDisplacement;                                           // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseDisplacementLimits;                                    // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHF1[0x3];                                     // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     DisplacementLimitsMin;                                     // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DisplacementLimitsMax;                                     // 0x0110(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TeleportThreshold;                                         // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BoneLocation;                                              // 0x0120(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorSpringState                          SpringState;                                               // 0x012C(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AnimNode_RotateAroundPivot
// 0x0030 (0x00F8 - 0x00C8)
struct FAnimNode_RotateAroundPivot : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<Engine_EBoneControlSpace>              Space;                                                     // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GD59[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoneToModify;                                              // 0x00CC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Pivot;                                                     // 0x00E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FN2[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_SpeedWarping
// 0x00B8 (0x0180 - 0x00C8)
struct FAnimNode_SpeedWarping : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              Hips;                                                      // 0x00C8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftLegTarget;                                             // 0x00D8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftUpLeg;                                                 // 0x00E8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftFoot;                                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightLegTarget;                                            // 0x0108(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightUpLeg;                                                // 0x0118(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightFoot;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Speed;                                                     // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalLegLength;                                            // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Axis;                                                      // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatSpringState                           SpringState;                                               // 0x014C(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              SpringStiffness;                                           // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringDamping;                                             // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SpringMass;                                                // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   HipsOffsetRemapIn;                                         // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   HipsOffsetRemapOut;                                        // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   HipsOffsetClamp;                                           // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HipsZOffset;                                               // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.AnimNode_SpineSpreader
// 0x0058 (0x0120 - 0x00C8)
struct FAnimNode_SpineSpreader : public FAnimNode_SkeletalControlBase
{
	float                                              SpreadPercentage;                                          // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              Spine1;                                                    // 0x00CC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightShoulder;                                             // 0x00DC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightArm;                                                  // 0x00EC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightForearm;                                              // 0x00FC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightHand;                                                 // 0x010C(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Q0O[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_StopBounces
// 0x0150 (0x0218 - 0x00C8)
struct FAnimNode_StopBounces : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              Hips;                                                      // 0x00C8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftUpLeg;                                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftLeg;                                                   // 0x00E8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftFoot;                                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightUpLeg;                                                // 0x0108(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightLeg;                                                  // 0x0118(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightFoot;                                                 // 0x0128(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LowerBack;                                                 // 0x0138(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Spine;                                                     // 0x0148(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Spine1;                                                    // 0x0158(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Neck;                                                      // 0x0168(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              head;                                                      // 0x0178(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftShoulder;                                              // 0x0188(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightShoulder;                                             // 0x0198(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              LeftArm;                                                   // 0x01A8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              RightArm;                                                  // 0x01B8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     BounceDuckWithBounceWeight;                                // 0x01C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    StopBounce;                                                // 0x01D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              NotFirstPersonWithAtmosphericsAndAnimLOD1;                 // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotateAroundHipsPivot;                                     // 0x01E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftFootTranslation;                                       // 0x01F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightFootTranslation;                                      // 0x01FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopBounceMediumWeight;                                    // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopBounceLightWeight;                                     // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InverseHeadWeight;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSHX[0x4];                                     // 0x0214(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_TwoBoneIKOffset
// 0x0038 (0x0210 - 0x01D8)
struct FAnimNode_TwoBoneIKOffset : public FAnimNode_TwoBoneIK
{
	struct FVector                                     OffsetVector;                                              // 0x01D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotateEndBonePivot;                                        // 0x01E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotateEndBoneOffset;                                       // 0x01F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseParentZLimit;                                          // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBIP[0x3];                                     // 0x01FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ParentZLimitOffset;                                        // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEffectorLocationIsOffset;                                 // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BTSN[0xB];                                     // 0x0205(0x000B) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_TwoHandedIK
// 0x0138 (0x0200 - 0x00C8)
struct FAnimNode_TwoHandedIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                    // 0x00C8(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStretching : 1;                                      // 0x00D8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BB9F[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartStretchRatio;                                         // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxStretchScale;                                           // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CROB[0xC];                                     // 0x00E4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneSocketTarget                           JointTarget;                                               // 0x00F0(0x0060) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     JointTargetLocation;                                       // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EBoneControlSpace>              JointTargetLocationSpace;                                  // 0x015C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMaintainEffectorRelRot : 1;                               // 0x015D(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsUsingFixedTarget;                                       // 0x015E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XL7U[0x1];                                     // 0x015F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SlidingTransform;                                          // 0x0160(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   SlidingStretchBlendLimits;                                 // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FixedTarget;                                               // 0x0198(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                              MainHandWeaponBone;                                        // 0x01A4(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              MainHandBone;                                              // 0x01B4(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              OffhandThumbFingerBone;                                    // 0x01C4(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              OffhandIndexFingerBone;                                    // 0x01D4(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              MainHandMiddleFingerBone;                                  // 0x01E4(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KHU0[0xC];                                     // 0x01F4(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AnimNode_WeightShift
// 0x0050 (0x0118 - 0x00C8)
struct FAnimNode_WeightShift : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<Engine_EBoneControlSpace>              Space;                                                     // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C8U5[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBoneReference                              BoneToModify;                                              // 0x00CC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Bone1ToMaintain;                                           // 0x00DC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                              Bone2ToMaintain;                                           // 0x00EC(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x00FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Pivot;                                                     // 0x0108(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JEXN[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.SpawnablePlaneTraceResult
// 0x0270
struct FSpawnablePlaneTraceResult
{
	unsigned char                                      UnknownData_TVSN[0x270];                                   // 0x0000(0x0270) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.SpawnablePlaneTraceSettings
// 0x0048
struct FSpawnablePlaneTraceSettings
{
	TArray<class UClass*>                              CheckActorsOnPlaneTraceHit;                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EObjectTypeQuery>>       HitTraceObjectTypes;                                       // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForwadDistance;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackDistance;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftDistance;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightDistance;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RightForwardPercentage;                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeftForwardPercentage;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TraceAmount;                                               // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_46ZV[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.CharState
// 0x0001
struct FCharState
{
	unsigned char                                      State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CharLook
// 0x000C
struct FCharLook
{
	unsigned char                                      FacingMode;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Y9L[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset2D;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerceptionInfo
// 0x0008
struct FPerceptionInfo
{
	bool                                               bSight;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHearing;                                                  // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDamage;                                                   // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Team;                                                      // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UpdateTime;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CharacterInventory
// 0x0020
struct FCharacterInventory
{
	class AMordhauEquipment*                           RightHand;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AMordhauEquipment*                           LeftHand;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AMordhauEquipment*>                   Equipment;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.VehicleTransitionInfo
// 0x0010
struct FVehicleTransitionInfo
{
	class UAnimSequence*                               Animation;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PlayerProfile
// 0x00C8
struct FPlayerProfile
{
	int                                                Rank;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      RankDisplayType;                                           // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7IDP[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Banner;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EXFY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCharacterProfile                           Character;                                                 // 0x0010(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.MatchmakingTicket
// 0x0020
struct FMatchmakingTicket
{
	struct FString                                     QueueName;                                                 // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TicketId;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.RichPresence
// 0x0028
struct FRichPresence
{
	Mordhau_ERichPresenceStatus                        Status;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_85XZ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameMode;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.MatchRewards
// 0x0068
struct FMatchRewards
{
	struct FPlayFabMatch                               Match;                                                     // 0x0000(0x0060) (NativeAccessSpecifierPublic)
	int                                                Gold;                                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XP;                                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.UnlockRecipe
// 0x0038
struct FUnlockRecipe
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredGold;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequiredXP;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RequiredItems;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             UnlockedItems;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.CondensedUserLagReport
// 0x0028
struct FCondensedUserLagReport
{
	int                                                GroupCount;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IYFL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            GroupTimestamp;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           CombinedInBytesPerSec;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           CombinedOutBytesPerSec;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CombinedTickRate;                                          // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           CombinedPlayerCount;                                       // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxTimeDifference;                                         // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.UserLagReport
// 0x0018
struct FUserLagReport
{
	int64_t                                            Timestamp;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           InBytesPerSecond;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           OutBytesPerSecond;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AvgTickRate;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PlayerCount;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDYH[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.AdminFlag
// 0x0040
struct FAdminFlag
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Flag;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Commands;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ServerInfo
// 0x0050 (0x0068 - 0x0018)
struct FServerInfo : public FBasicServerInfo
{
	struct FString                                     HostName;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameMode;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MapName;                                                   // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DockerHost;                                                // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DockerServer;                                              // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.LobbySearchResult
// 0x0000 (0x0108 - 0x0108)
struct FLobbySearchResult : public FSessionSearchResult
{

};

// ScriptStruct Mordhau.VisibilityMap
// 0x0058
struct FVisibilityMap
{
	unsigned char                                      UnknownData_2CJ4[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.VisibilityList
// 0x0050
struct FVisibilityList
{
	unsigned char                                      UnknownData_BEX6[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.ColorTableEntry
// 0x0038
struct FColorTableEntry
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DisplayedColor;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.MordhauColorTable
// 0x0028
struct FMordhauColorTable
{
	struct FText                                       TableName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FColorTableEntry>                    Entries;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.MapInfo
// 0x0020
struct FMapInfo
{
	struct FString                                     GameModeMapName;                                           // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameModeMetadata*                           GameModeMetadata;                                          // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMapMetadata*                                MapMetadata;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.SoundClassInfo
// 0x0018
struct FSoundClassInfo
{
	class USoundClass*                                 SoundClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundMix*>                           SoundMixes;                                                // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.SoundMixInfo
// 0x0018
struct FSoundMixInfo
{
	class USoundMix*                                   SoundMix;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundClass*>                         SoundClasses;                                              // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.WoundMaterialData
// 0x0038
struct FWoundMaterialData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     UpVector;                                                  // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightVector;                                               // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ForwardVector;                                             // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   WoundType;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.MordhauDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FMordhauDamageEvent : public FPointDamageEvent
{
	Mordhau_EMordhauDamageType                         Type;                                                      // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SubType;                                                   // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PZRO[0x2];                                     // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       DamageSource;                                              // 0x00AC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       DamageAgent;                                               // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWantsFlinchAnimation;                                     // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1E0[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.PermutationValuePair
// 0x0008
struct FPermutationValuePair
{
	int                                                Permutation;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ArrayOfActor
// 0x0010
struct FArrayOfActor
{
	TArray<class AActor*>                              Actors;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PerspectiveAnglingSpineSpaceAdditive
// 0x0630
struct FPerspectiveAnglingSpineSpaceAdditive
{
	struct FAnglingSpineSpaceAdditive                  ThirdPerson;                                               // 0x0000(0x0318) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnglingSpineSpaceAdditive                  FirstPerson;                                               // 0x0318(0x0318) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.RconResponseStruct
// 0x0048
struct FRconResponseStruct
{
	class UPlayFabJsonObject*                          RootObject;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayFabJsonObject*                          DataObject;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CommandName;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Type;                                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1T5Z[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     FailureReason;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.PlayerlistPlayer
// 0x0040
struct FPlayerlistPlayer
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_03TO[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayFabId;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Platform;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsABot;                                                   // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXSN[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.PlayerlistResponse
// 0x0068
struct FPlayerlistResponse
{
	struct FRconResponseStruct                         BaseResponse;                                              // 0x0000(0x0048) (NativeAccessSpecifierPublic)
	TArray<struct FPlayerlistPlayer>                   Players;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BotCount;                                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVerbose;                                                  // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIncludeBots;                                              // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y25B[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.RconRequestInfoResponse
// 0x0058
struct FRconRequestInfoResponse
{
	struct FRconCommandInfo                            CommandInfo;                                               // 0x0000(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WT7M[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.EmbedFooterField
// 0x0010
struct FEmbedFooterField
{
	struct FString                                     Text;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.EmbedAuthorField
// 0x0010
struct FEmbedAuthorField
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.EmbedFieldField
// 0x0028
struct FEmbedFieldField
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInline;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVCD[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.DiscordEmbed
// 0x0070
struct FDiscordEmbed
{
	struct FString                                     Title;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Color;                                                     // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEmbedFooterField                           Footer;                                                    // 0x0040(0x0010) (NativeAccessSpecifierPublic)
	struct FEmbedAuthorField                           Author;                                                    // 0x0050(0x0010) (NativeAccessSpecifierPublic)
	TArray<struct FEmbedFieldField>                    Fields;                                                    // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.DiscordMessage
// 0x0030
struct FDiscordMessage
{
	TArray<struct FDiscordEmbed>                       Embeds;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Username;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Mordhau.ReportMessage
// 0x0028
struct FReportMessage
{
	struct FString                                     Body;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Prefix;                                                    // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Team;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M89T[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Mordhau.PlayerReport
// 0x0090
struct FPlayerReport
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReporteePlayFabID;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReporterPlayFabID;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReportType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerName;                                                // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScreenshotFilename;                                        // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      KillsDeathsTksTD;                                          // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FReportMessage>                      Messages;                                                  // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
