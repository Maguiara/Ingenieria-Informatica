/**
 * 
*/

#include <iostream>
#include "DFA.h"
#include "tools.h"

int main (int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage(argc, argv);
  std::string fichero_entrada{argv[1]};
  std::string fichero_salida{argv[2]};
  ProcesarDFA(fichero_entrada, fichero_salida);
  return 0;
}