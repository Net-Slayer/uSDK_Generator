import os
import re


def FindLine(listA, lineStr):
    FoundIndex = -1
    for i, v in enumerate(listA):
        # print(str(i) + " : " + v)
        if lineStr in v:
            FoundIndex = i
            break
    if FoundIndex == -1:
        print("Line '" + lineStr + "' not found")
    else:
        print("Found '" + lineStr + "' at line: " + str(FoundIndex))
    return FoundIndex


def isVariable(x):
    return re.match(r'(.*); \/\/ \((.*)\)$', x)


def grabData(x):
    m = re.search(r'[ ](\S*); \/\/ \((.*)\)$', x)
    if m:
        name = m.group(1)
        found = m.group(2)
    else:
        name = found = ""
    return name, found
    # 1. iterate over mordhauclasses.h to find unique combinations of flags
    # 2. assign uproperty specifiers for each unique cell
    # 3. load csv and s2 class


def resolveSpecifiers(x, Name):
    specList = []
    # Note: TWeakObjectPtr needs to be blank
    if ('BlueprintVisible' in x) and ('BlueprintReadOnly' not in x):
        specList.append("BlueprintReadWrite")
    if 'BlueprintReadOnly' in x:
        specList.append("BlueprintReadOnly")
    if 'Edit' in x or 'BlueprintReadWrite' in specList:
        specList.append("EditAnywhere")
    if 'EditConst' in x or 'DisableEditOnInstance' in x:
        specList.append("EditDefaultsOnly")
    if 'ExportObject' in x:
        specList.append("Export")
    if 'InstancedReference' in x:
        specList.append("Instanced")
    if 'Net' in x:
        specList.append("Replicated")
    if 'RepNotify' in x:
        specList.append("ReplicatedUsing=\"OnRep_" + Name + "\"")
    if 'Transient' in x:
        specList.append("Transient")
    if 'AdvancedDisplay' in x:
        specList.append("AdvancedDisplay")
    if 'BlueprintAssignable' in x:
        specList.append("BlueprintAssignable")
    return specList


def ClassSpecProperty(fileName, Lines):
    print(fileName + " has " + str(len(Lines)) + " lines")
    # VariableBeginIndex = [i for i, v in enumerate(
    #     Lines) if '// Variables' in v]
    VariableBeginIndex = FindLine(Lines, '// Variables')

    # FunctionBeginIndex = [i for i, v in enumerate(
    #     Lines) if '// Functions' in v]
    FunctionBeginIndex = FindLine(Lines, '// Functions')

    ClassOut = []
    if (VariableBeginIndex == -1) or (FunctionBeginIndex == -1):
        return Lines
    else:
        VarCount = 0
        for i, v in enumerate(Lines):
            if i > VariableBeginIndex and i < FunctionBeginIndex:
                # 4. iterate lines of s2 class determining if variable
                if isVariable(v):
                    var, flags = grabData(v)
                    VarCount += 1
                    if flags != "":
                        # 5. if variable, use lookup function to insert uproperty line above
                        res = flags.strip('][').split(', ')
                        print("varName: \"" + var + "\"")
                        print(res)
                        spec = resolveSpecifiers(res, var)
                        print(spec)
                        ClassOut.append("UPROPERTY(" + ', '.join(spec) + ")\n")
                    else:
                        ClassOut.append("UPROPERTY()\n")
            ClassOut.append(v)
        print(str(VarCount))
        return ClassOut
