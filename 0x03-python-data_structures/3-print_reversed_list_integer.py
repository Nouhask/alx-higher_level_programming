#!/usr/bin/python3
def print_reversed_list_integer(my_list=[]):
    if my_list:
        if len(my_list) > 0:
            d = len(my_list) - 1
            for i in my_list:
                print('{:d}'.format(my_list[d]))
                d -= 1
