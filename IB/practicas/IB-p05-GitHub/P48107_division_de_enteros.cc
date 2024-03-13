/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief Prints the division and the reminder of two natural numbers 
 *
 */

#include <iostream> 

int main () {
  int valor1, valor2; 
  std::cin >> valor1 >> valor2; 
  int division = valor1 / valor2; 
  int reminder = valor1 % valor2;
  std::cout << division << " " << reminder << std::endl; 
  return 0; 
}
