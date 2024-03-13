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
  std::cin >> numero;

//Para la mitad superior del rombo 
  for (int i = 1; i <= numero; i++) {
    for (int j = 1; j <= numero - i; j++) {
      std::cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
}

//Para la mitad inferior del rombo
  for (int i = numero - 1; i >= 1; i--) {
    for (int j = 1; j <= numero - i; j++) {
      std::cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
