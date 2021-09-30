import os
import re
from tkinter.filedialog import askopenfilename


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

filename = askopenfilename()
input_CPP = filename
data_file = 'MissingStructList.txt'

source_file = r'F:\documents\Unreal Projects\Mordhau\Mordhau\Source\Mordhau\Mordhau.h'
source_file = source_file.replace("\\", "/")

search_regex1 = r"(\/\/ ScriptStruct Mordhau\.)(.*?\n).*?(USTRUCT.+?\n).*?(struct F(\2)).*?\{\n(GENERATED_BODY\(\)\n)(\t{1}.*?\)\n)*?(\}\;)"
search_regex = r"(?!GENERATED_BODY\(\)\n+)((\t{1}.*?\)\n)+?)(?=\}\;+)"

with open(input_CPP, 'r') as f:
    tables = re.findall(search_regex, f.read())

print(tables[0])
