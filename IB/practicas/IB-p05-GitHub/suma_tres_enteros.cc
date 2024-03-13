/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file suma_tres_enteros.cc
 * @author Marco Aguiar Álvarez
 * @date 18 10 2023
 * @brief Prints the sum of three integers numbers. 
 */

#include <iostream> 

int main() { 
  int number1, number2, number3;
  std::cout << "Ingrese tres numeros enteros" << std::endl;
  std::cin >> number1 >> number2 >> number3;
  int suma = number1 + number2 + number3;
  std::cout << "La suma de sus tres numeros enteros es " << suma << std::endl;
  return 0; 
}
