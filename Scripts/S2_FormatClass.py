import os
import re


def condense_spaces(x):
    y = x
    while '  ' in y:
        y = y.replace('  ', ' ')
    return y


input_CPP = r"..\Output\SplitClasses\MordhauCharacter.h"

ClassDirectory = r"..\Output\FormattedClasses\MordhauCharacter.h"
print(ClassDirectory + " " + str(os.path.isdir(ClassDirectory)))
# 1. load single class
file1 = open(input_CPP, 'r')
Lines = file1.readlines()

MinLines = []
text = file1.read()
print(str(text))

# 2. Clear empty and "unknown data" lines

for line in Lines:
    if line.strip() != "" and not re.match(r'^.*UnknownData.*$', line):
        # 3. clear 1 line memaddress
        if not re.match(r'^\/\/ 0.*?\(.*?\)', line):
            # 4. clear horizontal whitespace
            condensed = condense_spaces(line)
            # 5. clear "static" prefix from static functions
            fixed = re.sub(r"\t(.*?) (STATIC_)", r"\tstatic \1 ", condensed)
            # 6. class api insertion
            api_compat = re.sub(r"(class )(.*)(\:)",
                                r"class MORDHAU_API \2 : ", fixed)
            # 7. remove mem address from inline comments
            cleared = re.sub(r"\/\/ 0x.*?\(.*?\)", r"//", api_compat)
            MinLines.append(cleared)

block = ''.join(MinLines)
print(block)
# 8. Add Generatedbody()
generated = re.sub(
    r"\{\npublic:", r"{\nGENERATED_BODY()\r\npublic:\n// Variables", block)
# 9. Remove static init function block
final = re.sub(r"static(.*).*?\n.*?\{([^\}]*)\}", "// Functions", generated)

with open(ClassDirectory, 'w') as f:
    f.seek(0)
    f.write(final)
    f.truncate()
