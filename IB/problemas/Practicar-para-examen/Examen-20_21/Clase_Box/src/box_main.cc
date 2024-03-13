/**
 * 
 * 
*/
#include <iostream>
#include "box.h"

int main () {
  Box caja1;
  Box caja2;
  Box caja3;
  std::cout << "Introduzca los datos de la primera caja \n";
  std::cin >> caja1;
  std::cout << "Introduzca los datos de la segunda caja \n";
  std::cin >> caja2;
  std::cout << "Introduzaca los datos de la tercera caja \n";
  std::cin >> caja3;

  std::cout << "Comparacion de la caja 1 y la caja 2: " << std::endl;
  if (caja1 == caja2) {
    std::cout << "La caja " << caja1 << " y la caja " << caja2 << " son iguales" << std::endl;
  } else {
    std::cout << "La caja " << caja1 << " y la caja " << caja2 << " no son iguales" << std::endl;
  }

  std::cout << "Comparacion de la caja 1 y la caja 3: " << std::endl;
  if (caja1 == caja3) {
    std::cout << "La caja " << caja1 << " y la caja " << caja3 << " son iguales" << std::endl;
  } else {
    std::cout << "La caja " << caja1 << " y la caja " << caja3 << " no son iguales" << std::endl;
  }
}