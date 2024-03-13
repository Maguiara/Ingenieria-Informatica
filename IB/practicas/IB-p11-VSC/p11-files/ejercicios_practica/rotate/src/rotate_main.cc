/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 * 
 * 
*/

#include <iostream>
#include <fstream>
#include <string>
#include "rotate.h"
#include "tools.h"

int main(int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage(argc, argv);
  std::string fichero_entrada{argv[1]};
  RotarVocalesFichero(fichero_entrada);
  return 0;
}