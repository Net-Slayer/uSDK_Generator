import os
import re

search_str = "// Class Mordhau."

input_CPP = "..\SampleDump\Cpp\SDK\Mordhau_classes.h"

if os.path.isfile(input_CPP):
    print(input_CPP + " successfully located")

    file1 = open(input_CPP, 'r')
    Lines = file1.readlines()
    LineIndexList = []
    TerminalLine = 0

    # get line indexes for each class block
    for num, line in enumerate(Lines, 1):
        out = line.strip()
        if out.startswith(search_str):
            print(line + " found at : " + str(num))
            LineIndexList.append(num)
        # determine end of file, last instance of "};"
        elif out.startswith("};"):
            TerminalLine = num

print("TerminalLine = " + str(TerminalLine))

# split file at N1 to N2-1, if n2-1 does not exist use last line of file "};"
# testing webhook
