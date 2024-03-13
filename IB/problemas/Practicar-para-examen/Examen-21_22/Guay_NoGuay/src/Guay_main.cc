/**
 * 
 * 
*/
#include <iostream>
#include <cstdlib>
#include "Guay.h"

int main (int argc, char* argv[]) {
  int numero_usuario{std::stoi(argv[1])};
  if (ComprobarNumeroGuay(numero_usuario)) {
    std::cout << "N es GUAY\n";
  } else {
    std::cout << "N no es GUAY\n";
  }
}