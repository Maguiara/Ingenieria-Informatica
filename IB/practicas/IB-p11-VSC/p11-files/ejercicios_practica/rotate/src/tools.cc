/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author Marco Aguiar Álvarez alu0101620961@ull.edu.es
 * @date 27 Nov 2023
 * @brief 
 */

#include <iostream>
#include <cstdlib> // Para el exit(EXIT_SUCCESS)
#include <string>
#include "tools.h"

void PrintProgramPorpouse() {
  std::cout << "Este programa lee un archivo de texto y escribe otro con las vocales rotadas una posicion a la derecha" << std::endl;
}

void Usage(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << "Falta un archivo de texto como parametro" << std::endl;
    std::cout << "Para mas informacion utilice: " << argv[0] << " --help" << std::endl;
    exit(EXIT_SUCCESS);
  }
    std::string parameter{argv[1]};
    if (parameter == "--help") {
        std::cout << "Modo de uso: " << argv[0] << " fichero_entrada" << std::endl;
      exit(EXIT_SUCCESS);
    }
}