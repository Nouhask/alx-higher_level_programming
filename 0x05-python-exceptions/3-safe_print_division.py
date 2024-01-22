#!/usr/bin/python3
def safe_print_division(a, b):
    """
    divides 2 integers and prints the result.
    """
    try:
        divid = a / b
    except (ZeroDivisionError, TypeError):
        divid = None
    finally:
        print("Inside result: {}".format(divid))
    return (divid)
