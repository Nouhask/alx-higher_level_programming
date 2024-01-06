#!/usr/bin/python3
def multiple_returns(sentence):
    s = len(sentence)
    if s == 0:
        n = None
    else:
        n = sentence[0]
    tupl = (s, n)
    return tupl
