#!/usr/bin/python3
def safe_print_list_integers(my_list=[], x=0):
    """
    Print the first x elements of a list and only integers
    Args:
        my_list (list): the list to print the elements from.
        x (int): the number of the elements of my_list to be printed.
    Returns:
        the number of the elements that printed.
    """
    xint = 0
    for c in range(0, x):
        try:
            print("{:d}".format(my_list[c]), end="")
            xint += 1
        except (TypeError, ValueError):
            continue
    print("")
    return (xint)
