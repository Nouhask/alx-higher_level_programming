#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if idx >= len(my_list) or idx < 0:
        return my_list
    nueva_list = my_list[:]
    nueva_list[idx] = element
    return nueva_list
