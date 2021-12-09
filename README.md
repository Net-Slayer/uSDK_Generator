# uSDK_Generator
Python script to parse UE4 Memory dumps into Unreal C++ Class files
For use in the creation of unofficial SDKs

### Note: UE4 Memory Dumps
These often come with 4 files:
* GameName_classes.h
* GameName_functions.Cpp
* GameName_structs.h
* GameName_params.h

While many more files are usually created from a memory dump, most of the data we need to make a uSDK is in the first three of these core files.

## Config:
I have built this to be configurable via a config.ini file


## Method:
Stage 1 - Split Classes into separate files.
Stage 2 - Format each file from stage 1 applying fixes, removing some junk and format it inline with UE4 Class structure
Stage 3 - Interpret flags from GameName_classes.h to add UPROPERTY Specifiers
Stage 4 - Interpret flags from GameName_functions.cpp to add UFUNCTION Specifiers
***
_The above is the Minimal Viable Product stage, which is ready for use as one script
Though If I have further time the following stages would also be implemented_
***
Stage 5 - Format Core structs and enums from GameName_structs.h
Stage 6 - Modify includes of classes generated from above stages to auto-include referenced class types.
Stage 7 - Generate .cpp files for the above classes that contain functions

## Output:
The result is a foundational set of classes that would go in your source folder for a uSDK project
while this helps with assembling blueprints, you will have to get actual content from something like uModel or FModel.
