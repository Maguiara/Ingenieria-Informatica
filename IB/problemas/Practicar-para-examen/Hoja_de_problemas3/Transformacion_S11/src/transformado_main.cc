/**
 * 
 * 
*/

#include "transformado.h"

int main () {
  std::vector<int> numeros_usuario;
  int numero_usuario;
  while (std::cin >> numero_usuario) {
    numeros_usuario.emplace_back(numero_usuario);
  }
  std::cout << Transformar(numeros_usuario) << std::endl;
}