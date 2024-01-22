#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    """
    Divides divides element by element 2 lists.
    Args:
        my_list_1 (list): 1 list.
        my_list_2 (list): 2 list.
        list_length (int): the num of elements to be divided.
    Returns:
        A new list of length list_length containing all the divisions.
    """
    nueva_list = []
    for a in range(0, list_length):
        try:
            divi = my_list_1[a] / my_list_2[a]
        except TypeError:
            print("wrong type")
            divi = 0
        except ZeroDivisionError:
            print("division by 0")
            divi = 0
        except IndexError:
            print("out of range")
            divi = 0
        finally:
            nueva_list.append(divi)
    return (nueva_list)
