import os
import re


def grabData(funcName, ClassFileName, FunctionLines):
    m = re.search(r'[ ](\S*)\((.*)\);', funcName)
    print(m)
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


def ClassSpecFunction(Lines, ClassName, GameName, FunctionData):
    FunctionFile = open(FunctionData, 'r')
    FunctionLines = FunctionFile.readlines()

    FunctionBeginIndex = [i for i, v in enumerate(
        Lines) if '// Functions' in v]

    if len(FunctionBeginIndex) == 0:
        NoFunctions = True
        FunctionBeginIndex = len(Lines)
    else:
        FunctionBeginIndex = FunctionBeginIndex[0]

    print(FunctionBeginIndex)
    GeneratedClassName = ClassName.replace(".h", ".generated.h")
    ClassOut = ["#pragma once\n", "#include \"CoreMinimal.h\"\n",
                "#include \"" + GameName + ".h\"\n"]
    # append required includes (wip)
    # append final include (generated header)
    ClassOut.append("#include \"" + GeneratedClassName + "\"\n")
    print(ClassOut)
    BaseName = ClassName.replace(".h", "")
    print("ClassName is: " + BaseName)

    if NoFunctions:
        return Lines
    else:
        for i, v in enumerate(Lines):
            if i > FunctionBeginIndex and i < (len(Lines) - 1):
                name, params, flags = grabData(v, BaseName, FunctionLines)
                spec, isConst = resolveSpecifiers(flags, name)
                ClassOut.append("UFUNCTION(" + ', '.join(spec) + ")\n")
                if isConst:
                    ClassOut.append(v.replace(';', ' const;'))
                else:
                    ClassOut.append(v)
            else:
                ClassOut.append(v)
        return ClassOut
