#!/usr/bin/python3
import sys

if __name__ != "__main__":
    exit()

argc = len(sys.argv) - 1

p = 0
resu = 0
for arg in sys.argv:
    if p != 0:
        resu += int(arg)
    else:
        p += 1
print("{:d}".format(resu))
