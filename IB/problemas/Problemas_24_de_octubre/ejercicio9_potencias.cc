/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  potencias_de_dos.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief This program calculates 2 to a power of n
 *
 */

#include <iostream>
#include <cmath> 

int main () {
  int exponente;
  std::cout << "Ingrese un numero entero, este sera el exponente de 2" << std::endl;
  std::cin >> exponente;

  for ( int i {0}; i <= exponente; i++) {
    std::cout << pow(2 , i) << " ";
  }
  std::cout << std::endl;
  return 0;
} 
