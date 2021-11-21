import os
import re


FunctionData = r"..\SampleDump\CPP\SDK\Mordhau_functions.cpp"
FunctionFile = open(FunctionData, 'r')
FunctionLines = FunctionFile.readlines()


def grabData(funcName, ClassFileName):
    m = re.search(r'[ ](\S*)\((.*)\);', funcName)
    name = m.group(1)
    params = m.group(2)
    FunctionStr = "Function Mordhau." + ClassFileName + '.' + name
    # look for line Function Mordhau.className.functionName
    print("Looking for '" + FunctionStr + "' in FunctionData")
    flags = ""
    prevLine = ""
    for i, v in enumerate(FunctionLines):
        if FunctionStr in prevLine:
            n = re.search(r'Flags  -> \((.*)\)', v)
            flags = n.group(1)
            break
        prevLine = v
    if flags != "":
        flags.strip('][').split(', ')
    return name, params, flags


def resolveSpecifiers(x, fname):
    specList = []
    constFlag = False
    if ('BlueprintCallable' in x) or fname.startswith("OnRep_"):
        specList.append("BlueprintCallable")
    if ('BlueprintPure' in x):
        specList.append("BlueprintPure")
    if ('NetClient' in x):
        specList.append("Client")
    if ('NetServer' in x):
        specList.append("Server")
    if ('NetReliable' in x):
        specList.append("Reliable")
    if ('Event' in x):
        if ('Native' in x):
            specList.append("BlueprintNativeEvent")
        else:
            specList.append("BlueprintImplementableEvent")
    if ('Const' in x):
        constFlag = True
    return specList, constFlag


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
ClassOut = ["#pragma once\n", "#include \"CoreMinimal.h\"\n",
            "#include \"Mordhau.h\"\n"]
# append required includes (wip)
# append final include (generated header)
ClassOut.append("#include \"" + GeneratedClassName + "\"\n")

print(ClassOut)
for i, v in enumerate(Lines):
    if i > FunctionBeginIndex and i < (len(Lines) - 1):
        name, params, flags = grabData(v, "MordhauCharacter")
        spec, isConst = resolveSpecifiers(flags, name)
        ClassOut.append("UFUNCTION(" + ', '.join(spec) + ")\n")
        if isConst:
            ClassOut.append(v.replace(';', ' const;'))
        else:
            ClassOut.append(v)
    else:
        ClassOut.append(v)

with open(ClassDirectory, 'w') as f:
    for item in ClassOut:
        f.write(item)  # + "\n")
