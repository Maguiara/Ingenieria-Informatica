/**
 * 
 * 
*/


#include <iostream>
#include "racional.h"

int main () {
  Racional numero_1;
  Racional numero_2;
  std::cout << "Introduzca la primera fraccion (formato a b siendo a denominador y b numerador)" << std::endl;
  std::cin >> numero_1;
  std::cout << "Introduzca la segunda fraccion (mismo formato que la anterior)" << std::endl;
  std::cin >> numero_2;

  Racional resultado;
  resultado = numero_1 + numero_2;
  std::cout << "La suma es: " << resultado << std::endl;
  resultado = numero_1 - numero_2;
  std::cout << "La resta es: " << resultado << std::endl;
  resultado = numero_1 * numero_2;
  std::cout << "La multiplicacion es: " << resultado << std::endl;
  resultado = numero_1 / numero_2;
  std::cout << "La division es: " << resultado << std::endl;
  if (numero_1 < numero_2) {
    std::cout << "El numero menor es: " << numero_1 << std::endl;
  } else {
    std::cout << "El numero menor es: " << numero_2 << std::endl;
  }
  if (numero_1 > numero_2) {
    std::cout << "El numero mayor es: " << numero_1 << std::endl; 
  } else {
    std::cout << "El numero mayor es: " << numero_2 << std::endl;
  }
}