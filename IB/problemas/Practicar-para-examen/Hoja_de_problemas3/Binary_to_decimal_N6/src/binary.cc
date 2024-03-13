/**
 * 
 * 
*/
#include "binary.h"

int CambiarDecimalABinario(int numero_usuario) {
  int digito{0};
  int posicion{0};
  int numero_decimal{0};
  while (numero_usuario > 0) {
    digito = numero_usuario % 10;
    if (digito == 1) {
      numero_decimal += pow(2, posicion);
    }
    ++posicion;
    numero_usuario /= 10;
  }
  return numero_decimal;
}