/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P43850_uncle_ernie.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Oct 10th 2023
 * @brief This is a program that perfom a magic trick.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P43850_en
 */

#include <iostream>
  int main() {
    int number {0};
    int counter {0};
    int k{0};
    std::string numbers = "0123456789";
      while (std::cin >> number) {
          if (counter != 0) {
            std::cout << std::endl;
          }
          for (int i = 0; i < number; i++) {
            for (int j = 0; j < number; j++) {
              std::cout << numbers [k];
              k++;
              if (k >= 10) {
                k = 0;
              }
            }
            std::cout << std::endl;
          }
          counter++;
      }
      return 0;
  }
