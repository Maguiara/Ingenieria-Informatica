/**
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 13/12/2023
 * @brief Archivo main del programa
*/


#include <iostream>
#include "P13_rectangulo.h"

int main () {
  Rectangulo rectangulo_1;
  Rectangulo rectangulo_2;
  std::cout << "Introduzaca la base y la altura de su primer rectangulo" << std::endl;
  std::cin >> rectangulo_1;
  std::cout << "Introduzca la base y la altura de su segundo rectangulo" << std::endl;
  std::cin >> rectangulo_2;
  if (rectangulo_1 == rectangulo_2) {
    std::cout << "El rectangulo " << rectangulo_1 << " es igual a " << rectangulo_2 << std::endl;
  } else {
    std::cout << "El rectangulo " << rectangulo_1 << " no es igual a " << rectangulo_2 << std::endl;
  }
}