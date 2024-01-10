#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    for ji in sorted(a_dictionary.keys()):
        print("{}: {}".format(ji, a_dictionary[ji]))
