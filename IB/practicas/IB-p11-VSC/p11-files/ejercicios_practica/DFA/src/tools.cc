/**
 * 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "tools.h"

void PrintProgramPorpouse() {
  std::cout << "Este programa consiste en un automata determinista finito (DFA) que lee un fichero" << std::endl;
  std::cout << "input.txt con la especificiacion de un DFA" << std::endl;
}
void Usage(int argc, char* argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Faltan parámetros" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 2) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << "Este programa consiste en un automata determinista finito (DFA) que lee un fichero" << std::endl;
      std::cout << "input.txt con la especificiacion de un DFA siguiendo la siguiente estructura:" << std::endl;
        std::cout << "1. El numero total de estados del DFA" << std::endl;
        std::cout << "2. Estado de arraque del DFA" << std::endl;
        std::cout << "3. Una linea por cada estado del DFA" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}