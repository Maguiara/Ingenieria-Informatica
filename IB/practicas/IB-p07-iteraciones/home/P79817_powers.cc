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
  int numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    int potencia = pow(numero1,numero2);
    std::cout << potencia << std::endl;
  }
}
