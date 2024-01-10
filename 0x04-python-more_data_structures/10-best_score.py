#!/usr/bin/python3
def best_score(my_dict):
    if my_dict and len(my_dict):
        max = list(my_dict.keys())[0]
        for cle in my_dict:
            if my_dict[cle] > my_dict[max]:
                max = cle
        return max
    return None
