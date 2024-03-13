/**
 * 
 * 
*/


#include <iostream>
#include <cstdlib>
#include "tools.h"
#include "books.h"

int main (int argc, char* argv[]) {
  Usage(argc, argv);
  
  Book libro1("El Quijote de la Mancha", 1605, 21.0);
  Book libro2("El Lazarillo de Tormes" , 1554, 18.0);
  Book libro3("Los pilares de la Tierra", 1989, 27.0);

  int impuesto = std::stod(argv[1]);

  std::cout << libro1 << " " << libro1.CalcularPrecioConImpuestos(impuesto) << std::endl;
  std::cout << libro2 << " " << libro2.CalcularPrecioConImpuestos(impuesto) << std::endl;
  std::cout << libro3 << " " << libro3.CalcularPrecioConImpuestos(impuesto) << std::endl;
}