/* Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file  numeropar.cc
 * @author Marco Aguiar Álvarez
 * @date Oct 15 2023
 * @brief This program reads a number and 
 *        determinates if its even or odd
 *
 */
 
#include <iostream>

int main () {

  int numero;
  std::cout << "Introduzca su número" << std::endl;
  std::cin >> numero;
  // El == es un operador de comparación, distinto de = que se usa para asignar valores 
  if (numero % 2 == 0) {
    std::cout << "El número " << numero << " es par " << std::endl;
  } else 
    std::cout << "El número " << numero << " es impar" << std::endl;
  return 0; 
} 
