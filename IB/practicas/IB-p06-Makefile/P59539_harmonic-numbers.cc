/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P59539_harmonic-numbers.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date 23 10 2023
 * @brief Reads a number n and prints the n-th harmonic number 
 *        Hn = 1/1 + 1/2 + ... + 1/n
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>
#include <iomanip>

int main () {
  int numero1;
  std::cin >> numero1;

  double harmonico;
  for (int i = 1; i <= numero1; i++) {
    harmonico += 1.0/i;
  }
  std::cout << std::fixed << std::setprecision(4) << harmonico << std::endl;
  return 0; 
}
