import os
import configparser

from S1_SplitByClass import SplitByClass
from S2_FormatClass import FormatClass
config = configparser.ConfigParser()
config.read("config.ini")

GameApiName = config.get(
    "Names", "API_Name", raw=True).strip('"')
ClassSearchStr = config.get(
    "SearchTerms", "classSearchStr", raw=True).strip('"')
ClassDataInput = config.get("InputFiles", "MainClassDump", raw=True).strip('"')
OutputSplitFiles = config.get(
    "OutputFiles", "SplitClassDir", raw=True).strip('"')


# split all files
SplitByClass(ClassDataInput, ClassSearchStr, OutputSplitFiles)


# for each file
for entry in os.scandir(OutputSplitFiles):
    if (entry.path.endswith(".h")) and entry.is_file():
        #   format class
        S2 = FormatClass(entry, GameApiName)
        #   spec properties
        # S3 = ClassSpecProperty()
        # #   spec Functions
        # S4 = ClassSpecFunction()
