import os
import configparser

from S1_SplitByClass import SplitByClass
from S2_FormatClass import FormatClass
from S3_SpecifyProperties import ClassSpecProperty
from S4_SpecifyFunctions import ClassSpecFunction
from S5_StructProcessing import ProcessStructs


# Configuration
config = configparser.ConfigParser()
config.read("config.ini")

GameApiName = config.get(
    "Names", "API_Name", raw=True).strip('"')
ClassSearchStr = config.get(
    "SearchTerms", "classSearchStr", raw=True).strip('"')
ClassDataInput = config.get("InputFiles", "MainClassDump", raw=True).strip('"')
FunctionDataInput = config.get(
    "InputFiles", "MainFunctionDump", raw=True).strip('"')
StructDataInput = config.get(
    "InputFiles", "MainStructsDump", raw=True).strip('"')
OutputSplitFiles = config.get(
    "OutputFiles", "SplitClassDir", raw=True).strip('"')
FinalOutputDir = config.get(
    "OutputFiles", "FinalOutput", raw=True).strip('"')

print()
# # {value for value in variable}plit all files
# SplitByClass(ClassDataInput, ClassSearchStr, OutputSplitFiles)
#
FileCounter = 0
# Parse for each resulting file
for entry in os.scandir(OutputSplitFiles):
    if (entry.path.endswith(".h")) and entry.is_file():
        ClassFile = FinalOutputDir + "\\" + entry.name
        ClassFile = ClassFile.strip().replace("\\", "/")
        print("\nProcessing : " + ClassFile)
        #   Format class
        S2 = FormatClass(entry, GameApiName)
        #   Spec properties
        # print("Result of Stage 2")
        # print(S2)
        # print("end of file")
        S3 = ClassSpecProperty(entry.name, S2)
        #   Spec Functions
        S4 = ClassSpecFunction(S3, entry.name, GameApiName, FunctionDataInput)
        Final = S4
        FileCounter += 1
        # Write out the file
        with open(ClassFile, 'w') as f:
            for item in Final:
                f.write(item)

print("Complete! Files Processed : " + str(FileCounter))

# stage 5 - Structs and enums
ProcessStructs(StructDataInput, GameApiName,
               FinalOutputDir + "\\" + GameApiName + ".h")
