/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P24080_square_1.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Oct 29th 2023
 * @brief This is a program that prints squares with n2 n's.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P24080_en
 */

#include <iostream>
  int main() {
    int number {0};
    int counter {0};
      while (std::cin >> number) {
        if (counter != 0) {
          std::cout << std::endl;
        }
        for (int i = 0; i < number; i++) {
          for (int j = 0; j < number; j++) {
            std::cout << number;
          }
          std::cout << std::endl;
        }
        counter++;
      }
      return 0;
  }
