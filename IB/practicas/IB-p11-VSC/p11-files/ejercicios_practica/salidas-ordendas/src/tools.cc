/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * @author
 * @date 28/11/2023
 * @brief Este archivo contiene la implementación de las funciones declaradas en tools.h
*/

#include <iostream>
#include <string>
#include "tools.h"

void PrintProgramPorpouse() {
  std::cout << "Este programa se encarga de leer un archivo de texto con diferentes palabras y produce una salida" << std::endl;
  std::cout << "A.txt, B.txt, ... Z.txt con las palabras que empiezan por cada una de las letras del alfabeto." << std::endl;
    }

void Usage(int argc, char *argv[]) {
  if (argc == 2) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << "Modo de uso: " << argv[0] << " fichero_de_entrada.txt" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (argc != 2) {
    std::cout << argv[0] << ": Faltan parámetros." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
}