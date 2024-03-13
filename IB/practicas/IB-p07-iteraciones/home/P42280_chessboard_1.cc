/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P42250_uncle_ernie.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Oct 29th 2023
 * @brief This is a program that given a chessboard,
 * calculates the total number of coins it contains.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P42250_en
 */

#include <iostream>
  int main() {
    int row {0};
    int columns {0};
    while (std::cin >> row >> columns) {
      int sum {0};
      char number {0};
        for (int i = 0; i < row * columns; i++) {
          std::cin >> number;
          sum += static_cast<int>(number - '0');
         }
          std::cout << sum << std::endl;
        }
  return 0;
}
