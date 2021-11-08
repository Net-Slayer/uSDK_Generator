import os
import re


FunctionData = r"..\SampleDump\CPP\SDK\Mordhau_functions.cpp"
FunctionFile = open(FunctionData, 'r')
FunctionLines = FunctionFile.readlines()


def grabData(funcName, ClassFileName):
    m = re.search(r'[ ](\S*)\((.*)\);', funcName)
    name = m.group(1)
    params = m.group(2)
    FunctionStr = "Function Mordhau." + ClassFileName + name
    flags = ""
    for i, v in enumerate(FunctionLines):
        if FunctionStr in v:
            flags = FunctionLines[i + 1]
            break
            # flags = flags.strip('][').split(', ')
            # look for line Function Mordhau.className.functionName
    return name, params, flags


input_CPP = r"..\Output\SpecifiedClasses\MordhauCharacter.h"

ClassDirectory = r"..\Output\FinalClasses\MordhauCharacter.h"
print(ClassDirectory + " " + str(os.path.isdir(ClassDirectory)))
# 1. load single class
file1 = open(input_CPP, 'r')
Lines = file1.readlines()

FunctionBeginIndex = [i for i, v in enumerate(Lines) if '// Functions' in v][0]
print(FunctionBeginIndex)
print(Lines[FunctionBeginIndex])
GeneratedClassName = os.path.basename(input_CPP).replace(".h", ".generated.h")
ClassOut = ["#pragma once\n", "#include \"CoreMinimal.h\"",
            "#include \"Mordhau.h\""]
# append required includes (wip)
# append final include (generated header)
ClassOut.append("#include \"" + GeneratedClassName + "\"")

print(ClassOut)
for i, v in enumerate(Lines):
    if i > FunctionBeginIndex and i < (len(Lines) - 1):
        name, params, flags = grabData(v, "MordhauCharacter")
        print(name)
        print(params)
        print(flags)
