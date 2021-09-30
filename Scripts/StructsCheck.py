import os
from tkinter.filedialog import askopenfilename

filename = askopenfilename()

if filename.endswith("_structs.h"):

    input_CPP = filename
    source_file = r'F:\documents\Unreal Projects\Mordhau\Mordhau\Source\Mordhau\Mordhau.h'
    source_file = source_file.replace("\\", "/")

    search_str = "// ScriptStruct Mordhau."

    file1 = open(input_CPP, 'r')
    Lines = file1.readlines()

    Checklist = []

    for line in Lines:
        out = line.strip()
        if out.startswith(search_str):
            subOut = out.split(".")
            checkClass = subOut[1]
            print(checkClass)
            Checklist.append(checkClass)

    missing = []

    for line in Checklist:
        with open(source_file) as f:
            if line not in f.read():
                missing.append(line)

    with open('MissingStructList.txt', 'w') as f:
        for item in missing:
            f.write("%s\n" % item)
