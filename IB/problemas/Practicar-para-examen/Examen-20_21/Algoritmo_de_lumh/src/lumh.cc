#include "lumh.h"


std::string NumeroTarjetaSinEspacios (const std::string& numero_tarjeta) {
  std::string numero_tarjeta_sin_espacios{""}; 
  for (char c : numero_tarjeta) {
    if (!std::isspace(c)) {
      if (std::isdigit(c)) {
        numero_tarjeta_sin_espacios += c;
      }
    }
  }
  return numero_tarjeta_sin_espacios;
}

bool ComprobarNumeroTarjeta( std::string& numeros_sin_espacios) {
  for(int i{0}; i < numeros_sin_espacios.length(); i += 2) {
    int temp = (numeros_sin_espacios[i] - '0') * 2;
    if (temp > 9) {
      temp = temp - 9;
      numeros_sin_espacios[i] = (temp + '0');
    }
    numeros_sin_espacios[i] = (temp + '0');
  }
  int suma_de_lumh{0};
  for (char c : numeros_sin_espacios) {
    suma_de_lumh += (c - '0');
  }
  return (suma_de_lumh % 10 == 0);
}