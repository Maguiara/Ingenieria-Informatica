/**
 * Universidad de La Laguna 
 * Escuala Superior de Ingenieria y Tecnologia
 * Grado de Ingenieria Informatica
 * Informatica Basica 
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 06/12/23
 * @brief Programa que implementa la clase complejos para asi poder realizar operaciones con estos numeros complejos
*/

#include <iostream>
#include <cstdlib>
#include "complejo.h" 
#include "tools.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  double parte_real1 = std::stod(argv[1]);
  double parte_imaginaria1 = std::stod(argv[2]);
  double parte_real2 = std::stod(argv[3]);
  double parte_imaginaria2 = std::stod(argv[4]);
  Complejo complejo1(parte_real1, parte_imaginaria1);
  Complejo complejo2(parte_real2, parte_imaginaria2);
  std::cout << "Su primer numero complejo es " << complejo1 << " y su segundo numero complejo es " << complejo2 << std::endl;
  Complejo resultado;
  resultado = complejo1 + complejo2;
  std::cout << "El resultado de la suma de complejos es: " << resultado << std::endl;
  resultado = complejo1 - complejo2;
  std::cout << "El resultado de la resta de complejos es: " << resultado << std::endl;
  resultado = complejo1 * complejo2;
  std::cout << "El resultado de la multiplicacion de complejos es: " << resultado << std::endl;
  resultado = complejo1 / complejo2;
  std::cout << "El resultado de la division de complejos es:  " << resultado << std::endl;
}