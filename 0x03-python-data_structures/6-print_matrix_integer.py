#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    matint = len(matrix)
    x = len(matrix[0])
    for r in range(0, matint):
        for i in range(0, x):
            if i == x - 1:
                print('{:d}'.format(matrix[r][i]), end='')
            else:
                print('{:d}'.format(matrix[r][i]), end=' ')
        print()
