/**
 * 
 * 
*/
#include "lumh.h"


int main () {
  std::string tarjeta_usuario{"4126 9428 8307 9448"};
  std::string numeros_sin_espacios{NumeroTarjetaSinEspacios(tarjeta_usuario)};
  if (ComprobarNumeroTarjeta(numeros_sin_espacios)) {
    std::cout << "Ta bueno mi pana" << std::endl;
  } else {
    std::cout << "No ta bueno mi pana" << std::endl;
  }
}