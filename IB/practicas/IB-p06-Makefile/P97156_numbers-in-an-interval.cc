/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P97156_numbers-in-an-interval.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date 18 10 2023
 * @brief  Prints the numbers between the interval (a,b)
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>

int main () {
  int numero1, numero2;
  std::cin >> numero1 >> numero2;

  for (int i = numero1; i <= numero2; i++) {
    if (i > numero1) {
      std::cout << ",";
    }
    std::cout << i;      
  }
   std::cout << std::endl;
}

