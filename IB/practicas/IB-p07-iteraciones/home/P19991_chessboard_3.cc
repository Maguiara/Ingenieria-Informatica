/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P19991_chessboard_3.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Oct 10th 2023
 * @brief This is a program given a chessboard, 
 * calculate the total number of coins on its
 * two digital.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P19991_en
 */

#include <iostream>
  int main() {
    int size {0};
    char number;
    int sum = 0;
    std::cin >> size;
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          std::cin >> number;
            if (i == j || i + j == size - 1) {
              sum += static_cast<int> (number - '0');
            }
          }
        }
        std::cout << sum << std::endl;
    return 0;
  }
