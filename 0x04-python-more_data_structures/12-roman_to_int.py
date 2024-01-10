#!/usr/bin/python3
def roman_to_int(roman_string):
    if type(roman_string) is not str or roman_string is None:
        return 0
    roman_dict = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
    }
    decs = [roman_dict[x] for x in roman_string]
    output = 0
    for ji in range(len(decs)):
        output += decs[ji]
        if decs[ji - 1] < decs[ji] and ji != 0:
            output -= (decs[ji - 1] + decs[ji - 1])
    return output
