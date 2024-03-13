/**
 * 
 * 
 * 
*/

#include "TRE.h"

void CalcularTRE(int numero_de_iteraciones) {
  int lado_a, lado_b, lado_c;
  for (int i{3}; i <= numero_de_iteraciones + 3; ++i) {
    lado_a = i;
    if( lado_a % 2 != 0) {
      lado_b = (2 * (lado_a / 2)) * ( (lado_a / 2) + 1);
      lado_c = lado_b + 1;
    } else {
      lado_b = (lado_a / 2) * (lado_a / 2) - 1;
      lado_c = (lado_a / 2) * (lado_a / 2) + 1;
    }
    if (lado_a <= lado_b && lado_a <= lado_c) {
      std::cout << "El TRE numero " << i - 2 << ": corresponde con los lados: " << lado_a << " " << lado_b << " " << lado_c << std::endl;
    } else {
      std::cout << "El TRE numero " << i -2 << ": tiene un formato invalido" << std::endl;
    }
  }
}