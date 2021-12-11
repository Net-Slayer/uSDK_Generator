import os
import re


def condense_spaces(x):
    y = x
    while '  ' in y:
        y = y.replace('  ', ' ')
    return y


def FormatClass(inputFile, API_Name):

    # 1. load single class
    file1 = open(inputFile, 'r')
    Lines = file1.readlines()
    MinLines = []

    API_Name = API_Name.upper() + "_API"

    # 2. Clear empty and "unknown data" lines

    for line in Lines:
        if line.strip() != "" and not re.match(r'^.*UnknownData.*$', line):
            # 3. clear 1 line memaddress
            if not re.match(r'^\/\/ 0.*?\(.*?\)', line):
                # 4. clear horizontal whitespace
                condensed = condense_spaces(line)
                # 5. clear "static" prefix from static functions
                fixed = re.sub(r"\t(.*?) (STATIC_)",
                               r"\tstatic \1 ", condensed)
                # 6. class api insertion
                api_compat = re.sub(r"(class )(.*)(\:)",
                                    r"class " + API_Name + r" \2 : ", fixed)
                # 7. remove mem address from inline comments
                cleared = re.sub(r"\/\/ 0x.*?\(.*?\)", r"//", api_compat)
                # replace unsigned char with byte
                MinLines.append(cleared.replace("unsigned char", "uint8"))

    block = ''.join(MinLines)
    # 8. Add Generatedbody()
    generated = re.sub(
        r"\{\npublic:", r"{\nGENERATED_BODY()\r\npublic:\n// Variables", block)
    # 9. Remove static init function block
    final = re.sub(
        r"static(.*).*?\n.*?\{([^\}]*)\}", "// Functions", generated)
    final = final.splitlines(True)
    print("Final length : " + str(len(final)))
    print("Class Formatted: {FileName}".format(FileName=inputFile.name))
    return final
