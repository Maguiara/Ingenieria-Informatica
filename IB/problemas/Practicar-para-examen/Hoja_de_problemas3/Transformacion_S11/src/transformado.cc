/**
 * 
 * 
*/

#include "transformado.h"

std::string Transformar(const std::vector<int>& cadena_usuario) {
  std::string cadena_transformada;
  for (int i : cadena_usuario) {
    if (i >= 0 && i <= 9) {
      cadena_transformada += (i + '0');
    } else if (i >= 10 && i <= 35) {
      cadena_transformada += 'A' + (i - 10);
    }
  }
  return cadena_transformada;
}