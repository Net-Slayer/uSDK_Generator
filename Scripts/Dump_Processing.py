import os
import re
from tkinter.filedialog import askopenfilename

filename = askopenfilename()

if filename.endswith("_classes.h"):

    input_CPP = filename
    source_file = r'F:\documents\Unreal Projects\Mordhau\Mordhau\Source\Mordhau\Mordhau.h'
    source_file = source_file.replace("\\", "/")
    with open(‘file1.txt’) as fp:
        lines1 = fp.read().split('\n')
    with open(‘file2.txt’) as fp:
        lines2 = fp.read().split('\n')

    lines3 = []
    for k in range(len(lines1)):
        line = lines1[k].split(',')[:3]
        line.extend(lines2[k].split(',')[3])
        lines3.append(','.join(line))

    fp = open(‘file3.txt’, 'w')
    fp.write('\n'.join(lines3))
    fp.close()
