/**
 * Universidad de La Laguna
 *    
*/

#include <iostream>
#include <string>
#include <fstream>
#include "cripto.h"
#include "tools.h"

int main (int argc, char* argv[]) {
  PrintProgramPorpouse();
  Usage(argc, argv);
  std::string fichero_entrada{argv[1]};
  std::string fichero_salida{argv[2]};
  std::string metodo{argv[3]};
  std::string key{argv[4]};
  std::string operacion{argv[5]};
  std::ifstream fichero_entrada_stream{fichero_entrada};
  std::ofstream fichero_salida_stream{fichero_salida};
  if (metodo == "xor") {
    if (operacion == "+") {
      EncriptadoXor(fichero_entrada_stream, fichero_salida_stream, key);
    } else if (operacion == "-") {
      DesencriptadoXor(fichero_entrada_stream, fichero_salida_stream, key);
    }
  } else if (metodo == "cesar") {
    int key_int = std::stoi(key);
    if (operacion == "+") {
      EncriptadoCesar(fichero_entrada_stream, fichero_salida_stream, key_int);
    } else if (operacion == "-") {
      DesencriptadoCesar(fichero_entrada_stream, fichero_salida_stream, key_int);
    }
  }
  fichero_entrada_stream.close();
  fichero_salida_stream.close();
}