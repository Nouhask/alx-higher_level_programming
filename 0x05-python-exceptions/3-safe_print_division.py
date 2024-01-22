#!/usr/bin/python3
def safe_print_division(a, b):
    """
    Returns the div of a, b.
    """
    try:
        divis = a / b
    except (ZeroDivisionError,TypeError):
        divis = None
    finally:
        print("Inside result: {}".format(divis))
    return (divis)
