#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    """Prints x elememts of a list.

    Args:
        my_list (list): the list to prints the elem from.
        x (int): the num of the elements of my_list to print.

    Returns:
        the number of the elements printed.
    """
    elemx = 0
    for s in range(x):
        try:
            print("{}".format(my_list[s]), end="")
            elemx += 1
        except IndexError:
            break
    print("")
    return (elemx)
