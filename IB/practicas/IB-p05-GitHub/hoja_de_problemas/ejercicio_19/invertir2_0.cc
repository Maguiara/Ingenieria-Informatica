/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints a vector of numbers in the inversed order. 
 *
 */

#include <iostream> 
#include <vector>

int main () { 
  int size, number; 
  std::cin >> size;
  std::vector<int> my_vector(size);
  for (int i = 0; i < size; i++) { 
    std::cin >> number; 
    my_vector.emplace_back(number);
  }
  for (int j = size - 1; j >= 0; j--) {
    std::cout << my_vector[j] << " " << std::endl;
  }
return 0;
} 
