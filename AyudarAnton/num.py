import random

class Matrix:
    def __init__(self, rows, columns, elements=None):
        self.__rows = rows
        self.__columns = columns
        if elements is None:
            self.__elements = [[random.randint(1, 100) for _ in range(columns)] for _ in range(rows)]
        else:
            self.__elements = elements

    def __str__(self):
        return '\n'.join([' '.join(map(str, row)) for row in self.__elements])

    def get_value(self, i, j):
        return self.__elements[i][j]

    def set_value(self, i, j, value):
        self.__elements[i][j] = value

    def __add__(self, other):
        if self.__rows != other.__rows or self.__columns != other.__columns:
            raise ValueError("Matrices must have the same dimensions to be added.")
        result = [[self.__elements[i][j] + other.__elements[i][j] for j in range(self.__columns)] for i in range(self.__rows)]
        return Matrix(self.__rows, self.__columns, result)

    def __sub__(self, other):
        if self.__rows != other.__rows or self.__columns != other.__columns:
            raise ValueError("Matrices must have the same dimensions to be subtracted.")
        result = [[self.__elements[i][j] - other.__elements[i][j] for j in range(self.__columns)] for i in range(self.__rows)]
        return Matrix(self.__rows, self.__columns, result)