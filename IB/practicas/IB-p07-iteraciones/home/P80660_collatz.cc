/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  decimal_binary.cc
 * @author Marco Aguiar Álvarez
 * @date 25 10 23
 * @brief Pritns the binary form of a decimal number
 *
 *
 */

#include <iostream>

int main () {
  int numero;
  while (std::cin >> numero) {
  int pasos{0};
    while (numero > 1) { 
      if (numero % 2 == 0) {
        numero = numero / 2;
      } else {
        numero = (numero * 3) + 1;
      }
    ++pasos;
    } 
  std::cout << pasos << std::endl;
  }
}
