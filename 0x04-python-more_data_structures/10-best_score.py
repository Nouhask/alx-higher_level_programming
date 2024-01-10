#!/usr/bin/python3
def best_score(my_dictionary):
    if my_dict and len(my_dictionary):
        max = list(my_dictionary.keys())[0]
        for key in my_dictionary:
            if my_dictionary[key] > my_dictionary[max]:
                max = key
        return max
    return None
