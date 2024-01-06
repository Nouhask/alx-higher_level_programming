#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    nueva_list = my_list[:]
    for i in range(0, len(my_list)):
        if my_list[i] % 2 == 0:
            nueva_list[i] = True
        else:
            nueva_list[i] = False
    return nueva_list
