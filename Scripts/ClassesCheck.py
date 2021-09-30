import os
from tkinter.filedialog import askopenfilename

filename = askopenfilename()

if filename.endswith("_classes.h"):

    input_CPP = filename
    sourcedir = r'F:\documents\Unreal Projects\Mordhau\Mordhau\Source\Mordhau'
    sourcedir = sourcedir.replace("\\", "/")

    search_str = "// Class Mordhau."

    file1 = open(input_CPP, 'r')
    Lines = file1.readlines()

    Checklist = []

    for line in Lines:
        out = line.strip()
        if out.startswith(search_str):
            subOut = out.split(".")
            checkClass = subOut[1] + ".h"
            print(checkClass)
            Checklist.append(checkClass)

    missing = []

    for line in Checklist:
        srcpath = sourcedir + "/" + line
        if not os.path.isfile(srcpath):
            print(srcpath)
            missing.append(srcpath)

    with open('MissingClassList.txt', 'w') as f:
        for item in missing:
            f.write("%s\n" % item)
