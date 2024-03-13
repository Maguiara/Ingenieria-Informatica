/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P90615_maximun-three-integers.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date  23 10 2023
 * @brief Compares three integers numbers and prints the higher one.
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream> 

int main () {
  int numero1, numero2, numero3;
  std::cin >>  numero1 >> numero2 >> numero3;
  if (numero1 >= numero2 && numero1 >= numero3) {
    std::cout << numero1 << std::endl; 
  } else if (numero2 >= numero1 && numero2 >= numero3) {
    std::cout << numero2 << std::endl; 
  } else
    std::cout << numero3 << std::endl;
  return 0;
} 
