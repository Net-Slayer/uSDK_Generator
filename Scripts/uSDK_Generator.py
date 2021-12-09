import os
import configparser

from S1_SplitByClass import SplitByClass
from S2_FormatClass import FormatClass
from S3_SpecifyProperties import ClassSpecProperty
from S4_SpecifyFunctions import ClassSpecFunction
config = configparser.ConfigParser()
config.read("config.ini")

GameApiName = config.get(
    "Names", "API_Name", raw=True).strip('"')
ClassSearchStr = config.get(
    "SearchTerms", "classSearchStr", raw=True).strip('"')
ClassDataInput = config.get("InputFiles", "MainClassDump", raw=True).strip('"')
OutputSplitFiles = config.get(
    "OutputFiles", "SplitClassDir", raw=True).strip('"')
FinalOutputDir = config.get(
    "OutputFiles", "FinalOutput", raw=True).strip('"')

# split all files
SplitByClass(ClassDataInput, ClassSearchStr, OutputSplitFiles)

FileCounter = 0
# for each file
for entry in os.scandir(OutputSplitFiles):
    if (entry.path.endswith(".h")) and entry.is_file():
        print("basename: " + entry.name)
        ClassFile = FinalOutputDir + "\\" + entry.name
        ClassFile = ClassFile.strip().replace("\\", "/")
        print(ClassFile)
        #   format class
        S2 = FormatClass(entry, GameApiName)
        #   spec properties
        S3 = ClassSpecProperty(entry.name, S2)
        #   spec Functions
        S4 = ClassSpecFunction(S3, entry.name, GameApiName)
        Final = S4
        FileCounter += 1
        with open(ClassFile, 'w') as f:
            for item in Final:
                f.write(item)

print("Complete, Files Processed : " + str(FileCounter))
