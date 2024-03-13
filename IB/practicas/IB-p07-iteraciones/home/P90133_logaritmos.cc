/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file mayuscula_minuscula.cc
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es 
 * @date 18 10 2023
 * @brief  If you input a lowercase character,
 *         this program will print the uppercase and viceverse
 *
 * @see http://www.cplusplus.com/doc/tutorial/program_structure/
 * @see http://cpp.sh/2dd
 */

#include <iostream>
#include <cmath>

int main () {
  int base, numero;
  while (std::cin >> base >> numero) {
    double logaritmo1 = log10 (numero);
    double logaritmo2 = log10 (base);
    int resultado = logaritmo1 / logaritmo2;
    std::cout << resultado << std::endl;
  }
}
