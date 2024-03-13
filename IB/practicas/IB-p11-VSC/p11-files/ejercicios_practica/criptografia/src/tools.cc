/**
 * 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "tools.h"

void PrintProgramPorpouse() {
  std::cout << "Este programa se encarga de encriptar ficheros de texto recbiendo: " << std::endl;
    std::cout << "1. El fichero de entrada" << std::endl;
    std::cout << "2. El fichero de salida" << std::endl;
    std::cout << "3. El metodo de encriptacion" << std::endl;
    std::cout << "4. La clave de encriptacion" << std::endl;
    std::cout << "5. que operacion desea hacer (si encriptar o desepcriptar)" << std::endl;
}

void Usage(int argc, char* argv[]) {
  if (argc != 6) {
    std::cout << argv[0] << ": Faltan parámetros" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc == 2) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << "Este programa se encarga de encriptar ficheros de texto recbiendo: \n"
            "1. El fichero a codificar\n"
            "2. El fichero codificado\n"
            "3. El metodo de encriptacion\n"
                "1- Cifrado xor\n"
                "2- Cifrado de Cesar\n"
            "4. La clave de encriptacion\n"
                 "(Palabra secreta para el cifrado xor, Valor de k para el cifrado de Cesar)\n"
            "5. que operacion desea hacer\n"
                "+: Encriptar\n"
                "-: Desencriptar" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}