/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P35080_square_3.cc
 * @author Cathaysa Acosta Hernández alu0101671574@ull.edu.es
 * @date Oct 29th 2023
 * @brief This is a program that prints n n × n squares.
 *  Draw each square independently, and start filling 
 *  it with 0, 1, ..., 9, 0, etc.
 * @bug There are known bugs
 * @see https://jutge.org/problems/P35080_en
 */

#include <iostream>
  int main () {
    int number {0};
    int counter {0};
    std::string numbers = "0123456789";
      while (std::cin >> number) {
        for (int i = 0; i < number; i++) {
          if (counter != 0) {
            std::cout << std::endl;
          }
          int m{0};
          for (int j = 0; j < number; j++) {
            for (int k = 0; k < number; k++) {
              std::cout << numbers[m];
               m++;
               if (m >= 10) {
                 m = 0;
               }
            }
            std::cout << std::endl;
          }
          counter++;
        }
      }
    return 0;
  }
