import os

search_str = "// Class Mordhau."

input_CPP = r"..\SampleDump\Cpp\SDK\Mordhau_classes.h"
ClassDirectory = r"..\Output"
print(ClassDirectory + " " + str(os.path.isdir(ClassDirectory)))

if os.path.isfile(input_CPP):
    print(input_CPP + " successfully located")

    file1 = open(input_CPP, 'r')
    Lines = file1.readlines()
    LineIndexList = []
    TerminalLine = 0
    FileLines = enumerate(Lines, 1)
    # get line indexes for each class block
    for num, line in FileLines:
        out = line.strip()
        if out.startswith(search_str):
            print(out + " found at : " + str(num))
            LineIndexList.append(num)
        # determine end of file, last instance of "};"
        elif out.startswith("};"):
            TerminalLine = num

print("TerminalLine = " + str(TerminalLine))

# split file at N1 to N2-1, if n2-1 does not exist use TerminalLine"
for n, v in enumerate(LineIndexList):
    # get n+1
    if n + 1 < len(LineIndexList):
        n2 = LineIndexList[n + 1] - 1
    else:
        n2 = TerminalLine
    # get class title
    # as this list is enumerated from index 0 as 1
    FullLine = Lines[v - 1].strip().split(".")
    ClassFileName = (FullLine[1] + ".h")
    print(ClassFileName + " " + str(v) + " and " + str(n2))
    ClassContents = Lines[(v - 1):(n2)]
    ClassFile = ClassDirectory + "\\" + ClassFileName
    ClassFile = ClassFile.strip().replace("\\", "/")
    print(ClassFile)
    with open(ClassFile, 'w') as f:
        for item in ClassContents:
            f.write(item + "\n")
