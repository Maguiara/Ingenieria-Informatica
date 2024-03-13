/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief Programa que lee un archivo de texto y cuenta el numero de vocales y consonantes e imprime por pantalla la palabra con mas vocales y consonantes
*/

#include <iostream>
#include <fstream>
#include <string>
#include "tools.h"
#include "vowels-consonats.h"


int main (int argc, char* argv[]) { 
  PrintProgramPorpouse();
  Usage(argc, argv);
  std::string nombre_archivo{argv[1]};
  std::ifstream archivo_entrada{nombre_archivo};
  std::string palabra;
  std::string palabra_con_mas_vocales;
  std::string palabra_con_mas_consonantes;
  int contador_vocales{0};
  int contador_consonantes{0};
  int contador_vocales_max{0};
  int contador_consonantes_max{0};
  while (archivo_entrada >> palabra) {
    contador_vocales = ContarVocales(palabra);
    contador_consonantes = ContarConsonates(palabra);
    if (contador_vocales > contador_vocales_max) {
      contador_vocales_max = contador_vocales;
      palabra_con_mas_vocales = palabra;
    }
    if (contador_consonantes > contador_consonantes_max) {
      contador_consonantes_max = contador_consonantes;
      palabra_con_mas_consonantes = palabra;
    }
  }
  std::cout << "La palabra con mas vocales es: " << palabra_con_mas_vocales << " con " << contador_vocales_max << " vocales" << std::endl;
  std::cout << "La palabra con mas consonantes es: " << palabra_con_mas_consonantes << " con " << contador_consonantes_max << " consonantes" << std::endl;
  archivo_entrada.close();
  return 0;
}
