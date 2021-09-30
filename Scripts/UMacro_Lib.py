import os
import re


# // ScriptStruct Mordhau.EquipmentSkinEntry
# USTRUCT(BlueprintType, Blueprintable)
# struct FEquipmentSkinEntry
# {
#     GENERATED_BODY()
#     FText SkinName // (Edit, BlueprintVisible)
#     TArray < struct FEquipmentPartEntry > PartTypes // (Edit, BlueprintVisible, ZeroConstructor)
#     TArray < uint8 > ColorTables // (Edit, BlueprintVisible, ZeroConstructor)
#     TArray < struct FPatternInfo > Patterns // (Edit, BlueprintVisible, ZeroConstructor)
# }
test_str = "TArray < struct FPatternInfo > Patterns // (Edit, BlueprintVisible, ZeroConstructor)"


def UP_Macro(arg):
    out = ""
    return out
