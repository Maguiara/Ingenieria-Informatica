/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Archivo de declaracion de la clase Rectangulo junto a las sobrecargas
*/
#include <iostream>
#include "Car.h"

int main () {
  Car coche1;
  Car coche2;

  std::cout << "<PRIMER COCHE>\n";
  std::cin >> coche1;
  std::cout << "<SEGUNDO COCHE>\n";
  std::cin >> coche2;

  if (coche1 > coche2 ) {
    std::cout << "El coche: " << coche1 << " tiene mas kilometros que el coche: " << coche2 << std::endl;
  } else {
    std::cout << "El coche: " << coche2 << " tiene mas kilometros que el coche: " << coche1 << std::endl; 
  }
}