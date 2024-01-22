#!/usr/bin/python3
def safe_print_integer(value):
    """
    Print an int with "{:d}".format().
    Args:
        value (int): the integer to be printed.
    Returns:
        if a ValueError or TypeError occurs - False
        Otherwise - True.
    """
    try:
        print("{:d}".format(value))
        return (True)
    except (ValueError, TypeError):
        return (False)
