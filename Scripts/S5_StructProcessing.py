import os
import re

from S3_SpecifyProperties import grabData, resolveSpecifiers, FindLine
from S2_FormatClass import condense_spaces

# quick function to determine if struct else enum


def isStruct(x):
    if 'ScriptStruct' in x:
        print(x + " is Struct")
        return True

    else:
        print(x + " is Enum")
        return False


# ProcessStructs is a variation of the SplitByClass function
# Checks for enums/structs lines and doesn't split the file
def ProcessStructs(inputFile, coreName, OutFile):
    # file handling
    if os.path.isfile(inputFile):
        print(inputFile + " successfully located")
        file1 = open(inputFile, 'r')
        Lines = file1.readlines()

        LineIndexList = []
        TerminalLine = 0
        FileLines = enumerate(Lines, 1)
        EnumSearchStr = "// Enum {Name}.".format(Name=coreName)
        StructSearchStr = "// ScriptStruct {Name}.".format(Name=coreName)
        # get line indexes for each class block
        LinesProcessed = 0
        for num, line in FileLines:
            out = line.strip()
            if out.startswith(EnumSearchStr) or out.startswith(StructSearchStr):
                print(out + " found at : " + str(num))
                LineIndexList.append(num)
            # determine end of file, last instance of "};"
            elif out.startswith("};"):
                TerminalLine = num
            LinesProcessed += 1
        print("Lines Processed = " + str(LinesProcessed))
        print("TerminalLine found at Line " + str(TerminalLine))

        # prepare final header file
        coreStructFile = []
        GeneratedClassName = coreName + ".generated.h"
        coreStructFile = ["#pragma once\n", "#include \"CoreMinimal.h\"\n",
                          "#include \"" + coreName + ".h\"\n"]
        # append required includes (wip)
        # append final include (generated header)
        coreStructFile.append("#include \"" + GeneratedClassName + "\"\n")
        # split file at N1 to N2-1, if n2-1 does not exist use TerminalLine"
        for n, v in enumerate(LineIndexList):
            # get n+1 to determine end of each section
            if n + 1 < len(LineIndexList):
                n2 = LineIndexList[n + 1] - 1
            else:
                n2 = TerminalLine
            # get class title
            # as this list is enumerated from index 0 as 1
            FullLine = Lines[v - 1].strip().split(".")
            TypeData = FullLine[0]
            ClassFileName = (FullLine[1].replace(
                "{Name}_".format(Name=coreName), ""))
            print(ClassFileName + " " + str(v) + " and " + str(n2))
            # actual data of the class
            ClassContents = Lines[(v - 1):(n2)]
            # format the contents
            FormattedContents = FormatSubClass(
                ClassContents, coreName, TypeData, ClassFileName)
            coreStructFile.append("\n\n")
            print("appended 3 new lines")
            if isStruct(TypeData):
                SpecifiedContents = SpecifyStruct(
                    ClassFileName, FormattedContents)
                coreStructFile.append(
                    "USTRUCT(BlueprintType, Blueprintable) ")
            else:
                SpecifiedContents = FormattedContents
                coreStructFile.append("UENUM(BlueprintType) ")
            coreStructFile.extend(SpecifiedContents)
        with open(OutFile, 'w') as f:
            for item in coreStructFile:
                f.write(item)
    else:
        print("Structs file not found @ " + inputFile)

# FormatSubClass is a variant of the FormatClass function
# Performs specific fixes for structs dump


def FormatSubClass(contents, name2, header, subName):
    MinLines = []
    for line in contents:
        # ignore unknown data lines
        if line.strip() != "":
            if not (re.match(r'^.*UnknownData.*$', line) or re.match(r'\/\/ 0x....[ ,\s]', line)):
                # condense spaces
                condensed = condense_spaces(line)
                # clear mem address from comments
                cleared = re.sub(r"\/\/ 0x.*?\(.*?\)", r"//", condensed)
                # replace unsigned char with byte
                byteFix1 = cleared.replace("unsigned char", "uint8")
                byteFix2 = byteFix1.replace("uint8_t", "uint8")
                nameFix = byteFix2.replace("{Name}_E".format(Name=name2), "E")
                replStr = subName + "__"
                nameFix2 = nameFix.replace(replStr, "")
                MinLines.append(nameFix2)

    block = ''.join(MinLines)

    # Determine if USTRUCT or UENUM
    # Add the Generated_ustruct_body
    if isStruct(header):
        final = re.sub(
            r"\{\n", r"{\nGENERATED_USTRUCT_BODY()\r\npublic:\n// Variables\n", block)
    else:
        final = block
    # 9. Remove static init function block
    final = final.splitlines(True)
    print(final)
    return final


def SpecifyStruct(structName, data):
    VarCount = 0
    StructOut = []
    VariableBeginIndex = FindLine(data, '// Variables')
    TerminalLine = FindLine(data, '};')
    if (VariableBeginIndex == -1):
        return data
    else:
        for i, v in enumerate(data):
            if i > VariableBeginIndex and i < TerminalLine:
                var, flags = grabData(v)
                VarCount += 1
                if flags != "":
                    # 5. if variable, use lookup function to insert uproperty line above
                    res = flags.strip('][').split(', ')
                    print("varName: \"" + var + "\"")
                    print(res)
                    spec = resolveSpecifiers(res, var)
                    print(spec)
                    StructOut.append("UPROPERTY(" + ', '.join(spec) + ")\n")
                else:
                    StructOut.append("UPROPERTY()\n")
            StructOut.append(v)
        print(str(VarCount))
        return StructOut
