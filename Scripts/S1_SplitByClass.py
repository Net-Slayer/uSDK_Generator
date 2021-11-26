import os


def SplitByClass(inputFile, searchStr, OutDir):
    print("Is the directory: " + OutDir
          + " valid? : " + str(os.path.isdir(OutDir)))
    SplitClassesCount = 0
    if os.path.isfile(inputFile):
        print(inputFile + " successfully located")

        file1 = open(inputFile, 'r')
        Lines = file1.readlines()
        LineIndexList = []
        TerminalLine = 0
        FileLines = enumerate(Lines, 1)

        # get line indexes for each class block
        LinesProcessed = 0
        for num, line in FileLines:
            out = line.strip()
            if out.startswith(searchStr):
                print(out + " found at : " + str(num))
                LineIndexList.append(num)
            # determine end of file, last instance of "};"
            elif out.startswith("};"):
                TerminalLine = num
            LinesProcessed += 1
        print("Lines Processed = " + str(LinesProcessed))
        print("TerminalLine found at Line " + str(TerminalLine))

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
            ClassFile = OutDir + "\\" + ClassFileName
            ClassFile = ClassFile.strip().replace("\\", "/")
            print(ClassFile)
            SplitClassesCount += 1
            with open(ClassFile, 'w') as f:
                for item in ClassContents:
                    f.write(item + "\n")
    print(str(SplitClassesCount) + " classes processed")
