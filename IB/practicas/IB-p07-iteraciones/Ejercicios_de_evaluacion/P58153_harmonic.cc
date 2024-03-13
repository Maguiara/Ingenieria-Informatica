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
#include <iomanip> 

int main () {
  int numero1,numero2;
  while (std::cin >> numero1 >> numero2) {
    double harmonico1{0};
    for (int i = 1; i <= numero1; i++) {
      harmonico1 += (1.0/i);
    }
    double harmonico2{0};
    for (int i = 1; i <= numero2; i++) {
      harmonico2 += (1.0/i);
    }
  double resultado = harmonico1 - harmonico2;
  std::cout << std::fixed << std::setprecision(10) << resultado << std::endl;
  }
}
