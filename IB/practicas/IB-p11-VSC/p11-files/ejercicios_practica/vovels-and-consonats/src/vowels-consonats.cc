/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Fichero que incluye la declaracion de funciones del fichero tools.cc 
 */

#include <fstream>
#include <string>
#include "vowels-consonats.h"

int ContarVocales (const std::string& palabra) {
  int contador_vocales{0};
  for (int i = 0; i < palabra.length(); i++) {
    if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' ||
        palabra[i] == 'u' || palabra[i] == 'A' || palabra[i] == 'E' || palabra[i] == 'I' ||
        palabra[i] == 'O' || palabra[i] == 'U') {
      contador_vocales++;
    }
  }
  return contador_vocales;
}

int ContarConsonates (const std::string& palabra) {
  int contador_consonantes{0};
  for (int i = 0; i < palabra.length(); i++) {
    if (palabra[i] != 'a' && palabra[i] != 'e' && palabra[i] != 'i' && palabra[i] != 'o' &&
        palabra[i] != 'u' && palabra[i] != 'A' && palabra[i] != 'E' && palabra[i] != 'I' &&
        palabra[i] != 'O' && palabra[i] != 'U') {
      contador_consonantes++;
    }
  }
  return contador_consonantes;
}
