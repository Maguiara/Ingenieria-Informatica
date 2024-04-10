import time
import matrix
import numpy as np

t0 = time.time()
# Matrix user code
matrix1 = matrix.Matrix(100, 100, 1, 100)
matrix2 = matrix.Matrix(100, 100, 1, 100)
print("Matrix 1:")
matrix1.display()
print("Matrix 2:")
matrix2.display()
result_matrix = matrix1 + matrix2
print("Sum of matrices:")
result_matrix.display()
result_matrix = matrix1 - matrix2
print("Difference of matrices:")
result_matrix.display()
t1 = time.time()
print("Time taken for Matrix operations:", t1 - t0)

t2 = time.time()
# NumPy code
numpy_matrix1 = np.random.randint(1, 100, size=(100, 100))
numpy_matrix2 = np.random.randint(1, 100, size=(100, 100))
print("NumPy Matrix 1:")
print(numpy_matrix1)
print("NumPy Matrix 2:")
print(numpy_matrix2)
result_numpy_matrix = numpy_matrix1 + numpy_matrix2
print("Sum of NumPy matrices:")
print(result_numpy_matrix)
result_numpy_matrix = numpy_matrix1 - numpy_matrix2
print("Difference of NumPy matrices:")
print(result_numpy_matrix)
t3 = time.time()
print("Time taken for NumPy operations:", t3 - t2)